//LCA using sparse table
//Complexity: O(NlgN,lgN)
#include<bits/stdc++.h>
using namespace std;
#define mx 100002
#define WRITE(f) freopen(f,"w",stdout)
int L[mx];
int P[mx][22],value[mx];
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

int lca_query(int N, int p, int q, int num)
  {
      int tmp, log, i;
      if (L[p] < L[q])
          swap(p,q);
          log=log2(L[p]);
          //cout<<L[p]<<" "<<log<<endl;
        for (i =log;i>=0;i--){
          cout<<p<<" "<<i<<" "<<P[p][i]<<endl;
          if (P[p][i]!=-1 &&  value[P[p][i]]>=num){

              p= P[p][i];

          }
        }

        return p;
  }

void lca_init(int N)
  {
      int i, j;
       for (i = 0; i <N; i++)
          P[i][0] = T[i];
      for (j = 1; (1 << j )< N; j++)
         for (i = 0; i < N; i++)
             if (P[i][j - 1] != -1)
             {
                 int p1=P[i][j - 1];
                 P[i][j] = P[p1][j - 1];
             }
 }

int main() {
    //WRITE("1.txt");
    int node,u,v,t,q,cs=0;
     scanf("%d",&t);
     while(t--)
     {
         cs++;
         scanf("%d %d",&node,&q);
         for(int i=0;i<node;i++)
         {
             graph[i].clear();
             T[i]=-1;
             L[i]=0;
             value[i]=0;
             for(int j=0;j<=22;j++)
             {
                 P[i][j]=-1;

             }
         }
         graph[0].push_back(0);
         value[0]=1;
         int u,v,n;
         for(int i=1;i<node;i++)
         {
             scanf("%d%d",&n,&v);
             graph[n].push_back(i);
             value[i]=v;
         }
	dfs(0, 0,0);
	lca_init(node);

	printf("Case %d:\n",cs);
	int num,l;
    while(q--)
    {
        scanf("%d%d",&l,&num);
    int ans=lca_query(node,l,0,num);
    printf("%d\n",ans);}
     }
	return 0;
}
