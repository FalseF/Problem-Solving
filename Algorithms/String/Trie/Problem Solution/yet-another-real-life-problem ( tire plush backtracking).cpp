// Problem: The Punishment of Hasinur
// Contest: Toph
// URL: https://toph.co/p/the-punishment
// Memory Limit: 1536 MB
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
const int max_node = 1e6+10;
int trie[max_node][28];
int root,id;
int id_s[max_node];
string S[max_node];
int path[max_node];
void inti()
{
	root=0;
	id=0;
	for( int i = 0; i<26; i++)
	{
		trie[root][i]=-1;
	}
}
void Insert(string s, int len, int pos)
{
	int now=root;
	path[0]=0;
	for(int i = 0;i<len; i++)
	{
		if( trie[now][s[i]-'a'] == -1)
		{
			trie[now][s[i]-'a'] = ++id;

			for( int j =0 ; j<26; j++)
			{
				trie[id][j] = -1;
			}
		}
		path[id]=now;
		now=trie[now][s[i]-'a'];
	}
	
	id_s[now] = pos;
	
	while(now!=path[now])
	{
		int p = path[now];
		if(id_s[p]<=0)
		{
			id_s[p] = id_s[now];
		}
		
		if(S[id_s[p]]>S[id_s[now]])
		{
			id_s[p] = id_s[now];
		}
		
		now=p;
	}
	
}

int Find(string s, int len)
{
	int now = root,ck=0;
	for(int i =0 ;i<len; i++)
	{
		if( trie[now][s[i]-'a'] ==-1) return -1;
		now = trie[now][s[i]-'a'];
	}
	
	return now;

}

int main()
{
	FastIO();
	inti();
    int n,t;
    cin>>t;
    int cs =0,i=0;
    string s1;
    while(t--)
    {
    	cin>>n;
    	if(n==1)
    	{
    		i++;
    		cin>>S[i];
    		int len = S[i].length();
    		Insert(S[i],len,i);
    	}
    	else
    	{
    		cin>>s1;
    		if(s1==".")
    		{
    			if(S[id_s[0]].empty()) cout<<"No word found!\n";
    			else cout<<S[id_s[0]]<<endl;
    		}
    		
    		else
    		{
    			int len = s1.length();
    			int nd = Find(s1,len);
    			if(nd<=-1)
    			{
    				cout<<"No word found!\n";
    			}
    			else 
    			{
    				cout<<S[id_s[nd]]<<endl;
    			}
    			
    		}
    	}
    }

	
}




