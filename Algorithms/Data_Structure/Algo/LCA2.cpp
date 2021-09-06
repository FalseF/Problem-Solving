/*########  IN THE NAME OF ALLAH   ##########*/

#pragma GCC diagnostic ignored "-Wunused-variable"
#pragma GCC diagnostic ignored "-Wunused-parameter" 
#include<bits/stdc++.h>
using namespace std;
#pragma GCC diagnostic ignored "-Wunused-but-set-variable" 
#pragma GCC diagnostic ignored "-Wformat"
#define ll long long
vector<int>graph[100005];
int level[100005];
int ST[20][100005];
int parent[100005],node;
void dfs(int u,int p)
{
	for(auto it:graph[u])
	{
		if(it==p) continue;
		parent[it] = u;
		level[it] = level[u] + 1;
		dfs(it,u); 
	}
}

void built_st(int n)
{
	// 1 llen er parent inti kora
	for(int i=0;i<n;i++)
	{
		ST[0][i] = parent[i];
	}
	
	// 1 len bade baki gulor parent calculate kora
	for(int k = 1; (1<<k)<n; k++)
	{
		for(int node = 0; node<n; node++)
		{
			if(ST[k-1][node] !=-1)
			{
				int p1 = ST[k-1][node];
				
				int p2 = ST[k-1][p1];
				
				ST[k][node] = p2;
			}
		}
	}
}

int find_lca(int u, int v, int n)
{
	   if(level[v]>level[u])
     {
     	swap(u,v);
     }
	int log = log2(n) + 1;
	// level same kora
	for(int k=log; k>=0; k--)
	{
		if( ( level[u] - ( 1 << k ) ) >= level[v] )
		{
			u = ST[k][u];
		}
	}
	
	for(int k = log; k>=0; k--)
	{
		if(ST[k][u]!=-1  & ST[k][u] != ST[k][v] )
		{
			u = ST[k][u];
			v = ST[k][v];
		}
	}
	
	return parent[u];
	
}

int main()
{
  
     int n,e,u,v;
     scanf("%d%d",&n,&e);
     for(int i =1;i<=e;i++)
     {
     	scanf("%d%d",&u,&v);
     	graph[u].push_back(v);
     	graph[v].push_back(u);
     }
     
     memset(parent,-1,sizeof(parent));
     dfs(0,0);

     built_st(n);
     
     int l,r;
     scanf("%d%d",&l,&r);
     
     int lca = find_lca(l,r,n);
     
     printf("%d\n",lca);

   
   /************ALEYA YOUSUF ************/
 
 /************ALLtAH IS ALMIGHTY ************/
return 0;
 
}