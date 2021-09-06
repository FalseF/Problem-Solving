//LCA using sparse table
//Complexity: O(NlgN,lgN)
#include<bits/stdc++.h>
using namespace std;
#define mx 100002
int L[mx];
int P[mx][22];
int T[mx];
vector<int>graph[mx];
void dfs(int from,int u,int dep)
{
    T[u]=from;
    L[u]=dep;
    for(int i=0;i<(int)graph[u].size();i++)
    {
        int v=graph[u][i];
        if(v==from) continue;
        dfs(u,v,dep+1);
    }
}

int lca_query(int N, int p, int q)
  {
      int tmp, log, i;

      if (L[p] < L[q])
          swap(p,q);
          log=log2(L[p]);
        for (i = log; i >= 0; i--)
          if (L[p] - (1 << i) >= L[q])
              p = P[p][i];

      if (p == q)
          return p;

        for (i = log; i >= 0; i--)
          if (P[p][i] != -1 && P[p][i] != P[q][i])
              p = P[p][i], q = P[q][i];
      return T[p];
  }

void lca_init(int N)
  {
      memset (P,-1,sizeof(P));
      int i, j;
       for (i = 0; i <N; i++)
          P[i][0] = T[i];
      for (j = 1; (1 << j) < N; j++)
         for (i = 0; i < N; i++)
             if (P[i][j - 1] != -1)
             {
                 int p1=P[i][j - 1];
                 P[i][j] = P[p1][j - 1];
             }
 }

int main(void) {
    int node,u,v;
    //node 0 theke kora
    cin>>node;
    for(int i=1;i<node;i++)
    {
        cin>>u>>v;
        graph[u].push_back(v);
    }
	dfs(0, 0, 0);
	lca_init(node);
  int l,r;
	cin>>l>>r;
	printf("LCA l ans r is %d  %d %d\n", l,r,lca_query(node,l,r) );
	return 0;
}
