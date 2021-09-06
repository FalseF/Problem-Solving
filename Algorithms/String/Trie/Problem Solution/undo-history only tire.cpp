// Problem: Undo History
// Contest: Toph
// URL: https://toph.co/p/undo-history
// Memory Limit: 512 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;
void FastIO(){
  ios_base :: sync_with_stdio (false);
    cin.tie(0);
  cout.precision(20);
}
const int max_node = 5e3+5;
int trie[max_node][28];

int root,id;

void inti()
{
	root=0;
	id=0;
	for( int i = 0; i<26; i++)
	{
		trie[root][i]=-1;
	}
}
int Insert(string s, int len)
{
	int now=root,cost=0;
	for(int i = 0;i<len; i++)
	{
		if( trie[now][s[i]-'a'] == -1)
		{
			cost++;
			trie[now][s[i]-'a'] = ++id;
			
			for( int j =0 ; j<26; j++)
			{
				trie[id][j] = -1;
			}
		}
		now=trie[now][s[i]-'a'];
	}
	
	return cost;
}


int main()
{
	FastIO();
	
	int t,n,cs=0;
	cin>>t;
	
	while(t--)
	{
		inti();
		cs++;
		cin>>n;
		string s,l_s="";
		int ans=n,ck=0;
		while(n--)
		{
			ck++;
			cin>>s;
		    int len = s.length();
		    int cost = Insert(s,len);
		    int l_len=l_s.length();
		   if(ck==1)
		   {
		   	 ans+=cost;
		   }
		   
		   else if(l_len>len)
		   {
		   	  ans+=cost+2;
		   }
		   else 
		   {
		   	  string tem = string(s.begin(),s.begin()+l_len);
		   	  
		   	  if(tem==l_s)
		   	  {
		   	  	  ans+=min(len - l_len, cost+2);
		   	  }
		   	  
		   	  else ans+=cost+2;
		   }
		   
		   l_s = s;
			
		}
		
		cout<<"Case #"<<cs<<": "<<ans<<endl;
		
	}
	
	
	
}