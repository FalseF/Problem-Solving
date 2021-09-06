#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mx = 200002;
int source;
int L[mx];
int P[mx][22];
int T[mx];
int dis_max[mx][22];
int dis_min[mx][22];
vector<pair<int,int> >graph[mx];
int value[mx];
void INIT(int N)
{
    for(int i=1;i<=N;i++) {
    value[i]=0;
    T[i]=0;
    graph[i].clear();
    L[i]=0;
    for(int j=0;j<=22;j++)
    {
        dis_max[i][j]=0;
        P[i][j]=-1;
        dis_min[i][j]=999999;
    }

    }
}

void dfs(int from,int u,int dep)
{
    T[u]=from;
    L[u]=dep;
    //cout<<from<<" "<<u<<endl;
    for(int i=0;i<graph[u].size();i++)
    {
        int v=graph[u][i].first;
        int w=graph[u][i].second;
        if(v==from) continue;
        dfs(u,v,dep+1);
    }
}
int lca_query(int N, int p, int q)
  {
      int tmp, log, i;
        if(L[p]<L[q]) swap(p,q);
        log=log2(L[p]);
        int mn=0,Mx=999999;

        for (i = log; i >= 0; i--)
          if (L[p] - (1 << i) >= L[q])
          {
              mn=max(mn,dis_max[p][i]);
              Mx=min(Mx,dis_min[p][i]);
              p = P[p][i];
          }

      if (p == q)
        {
            printf("%d %d\n",Mx,mn);

        }

       else {
                for (i = log; i >= 0; i--)
                  if (P[p][i] != -1 && P[p][i] != P[q][i])
                  {
                      mn=max(mn,max(dis_max[p][i],dis_max[q][i]));
                      Mx=min(Mx,min(dis_min[p][i],dis_min[q][i]));
                     // mn2=min(mn2,dis_max[q][i])
                      p = P[p][i], q = P[q][i];
                  }

                  int fk=max(mn,max(dis_max[p][0],dis_max[q][0]));
                  int fk1=min(Mx,min(dis_min[p][0],dis_min[q][0]));
                  printf("%d %d\n",fk1,fk);
       }
  }
void lca_init(int N)
  {
      int i, j;
       for (i = 1; i <=N; i++){
            P[i][0] = T[i];
           dis_max[i][0]=value[i];
           dis_min[i][0]=value[i];
       }
      for (j = 1; (1 << j) <=N; j++)
         for (i = 1; i <=N; i++)
             if (P[i][j - 1] != -1)
             {
                 //cout<<i<<" "<<p1<<" "<<p2<<n1<<" "<<n2<<endl;
                 dis_max[i][j]=max(dis_max[i][j-1],dis_max[P[i][j-1]][j-1]);
                 dis_min[i][j]=min(dis_min[i][j-1],dis_min[P[i][j-1]][j-1]);
              P[i][j]=P[P[i][j-1]][j-1];
             }
 }
#define WRITE(f) freopen(f,"w",stdout)
int main()
{

  // WRITE("1.txt");
    int X,Y,W,N,E,q,t,cs=0,w;
    scanf("%d",&t);
    while(t--)
    {
        int u,v;
        scanf("%d",&N);
         INIT(N);
        for(int i=1;i<N;i++)
        {
            scanf("%d%d%d",&u,&v,&w);
             graph[u].push_back(make_pair(v,w));
            graph[v].push_back(make_pair(u,w));
        }

        dfs(1,1,0);
        for(int i=1;i<=N;i++)
        {
            for(int j=0;j<graph[i].size();j++)
            {
                int x=graph[i][j].first;
                int w=graph[i][j].second;
                //cout<<i<<" "<<x<<" "<<w<<endl;
                //cout<<i<<" "<<L[i]<<" "<<x<<" "<<L[x]<<endl;
                if(L[x]<L[i])
                {
                    value[i]=w;
                }
                else value[x]=w;
            }
        }



        lca_init(N);
        int Q,l,r;
        scanf("%d",&Q);
        cs++;
        printf("Case %d:\n",cs);
        while(Q--)
        {
            scanf("%d %d",&l,&r);
            lca_query(N,l,r);
        }
    }

    return 0;
}
