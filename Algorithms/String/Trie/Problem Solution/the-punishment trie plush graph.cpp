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
const int max_node = 5e6+10;
int trie[max_node][30];
int end_point[max_node];
int root,id;
int id_s[max_node];
int node[max_node];
string S[max_node];
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
	node[0] =0;
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
		
		node[id] =id;
		
		now=trie[now][s[i]-'a'];
	}
	
	id_s[now] = pos;
	
	end_point[now]++;
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

void dfs(int pa)
{
   for(int i=0;i<26;i++)
   {
   	   int u = trie[pa][i];
   	  if(u!=-1)
   	  {
   	  	 dfs(u);
		  if(end_point[u]>end_point[pa])
		    {
		    	end_point[pa] = end_point[u];
		    	node[pa] = node[u];
		    }
		    
		    else if(end_point[u]==end_point[pa])
		    {
		    	if(S[id_s[node[u]]]<S[id_s[node[pa]]])
		    	{
		    		node[pa] = node[u];
		    	}
		    }
   	  }
   }
    
}
int main()
{
	FastIO();
	inti();
    int n,t;
    cin>>n;
    string s,s1;
    for(int i=1;i<=n;i++)
    {
    	cin>>S[i];
    	int len = S[i].length();
    	Insert(S[i],len,i);
    }
  
    dfs(0);
    cin>>t;
    int cs =0;
    while(t--)
    {
    	cs++;
    	cin>>s1;
    	int len = s1.length();
    	int nd = Find(s1,len);
    	if(nd<=-1)
    	{
    		cout<<"Case "<<cs<<": -1"<<endl;
    		continue;
    	}
    	
    	cout<<"Case "<<cs<<": "<<S[id_s[node[nd]]]<<" "<<end_point[node[nd]]<<endl;
    }

	
}

