// Problem: Yet Another XOR Problem
// Contest: Toph
// URL: https://toph.co/p/yet-another-xor-problem
// Memory Limit: 1024 MB
// Time Limit: 3000 ms
// 
// Powered by CP Editor (https://cpeditor.org)
#include<bits/stdc++.h>
using namespace std;

const int max_node = 1e7+5;
int trie[max_node][4];
int root,id;
int cnt[max_node][4];
void inti()
{
	root=0;
	id=0;
	for( int i = 0; i<2; i++)
	{
		trie[root][i]=-1;
	}
}
void Insert(int n)
{
	int now=root;
	for(int i=30;i>=0;i--)
	{
		int bit = (n>>i)&1;
		if(trie[now][bit]==-1)
		{
			trie[now][bit] = ++id;
			for(int j =0;j<2;j++)
			{
				trie[id][j]=-1;
			}
		}
		
		cnt[now][bit]++;
		now = trie[now][bit];
	}

}

void Dell(int n)
{
     int now = root;
    for(int i=30;i>=0;i--)
    {
    	int bit=(n>>i)&1;
    	cnt[now][bit]--;
    	now=trie[now][bit]; 
    }
     
}

int Find(int n)
{
	int ans = 0;
	int now = root;
	for(int i=30;i>=0;i--)
	{
		int bit =(n>>i)&1;
		
		if(trie[now][bit^1]!=-1 && cnt[now][bit^1]>0)
		{
			ans+=(1<<i);
			now=trie[now][bit^1];
		}
		else {
			now = trie[now][bit];
		}
	}
	
	return ans;
}

int ar[max_node];
int mx;
vector<int>graph[max_node];
void dfs(int u, int p)
{
	Insert(ar[u]);
	for(auto it:graph[u])
	{
		if(it==p) continue;
	     int n = Find(ar[it]);
		mx = max(mx,n);
		dfs(it,u);
		
	}
	Dell(ar[u]);
}

int main()
{
	inti();
	
	int t;
	int n,u,v;
	
	scanf("%d",&n);
	for(int i=1;i<=n;i++) scanf("%d",&ar[i]);
    for(int i =1;i<n;i++)
    {
    	scanf("%d%d",&u,&v);
    	graph[u].push_back(v);
    	graph[v].push_back(u);    
    }
    mx=0;
    dfs(1,-1);
    printf("%d\n",mx);
	
	
}


