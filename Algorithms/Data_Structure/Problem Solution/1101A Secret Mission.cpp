#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define mp make_pair
#define mx 100002
int source;
int L[mx];
int P[mx][22];
int T[mx];
int dis_max[mx][22];
struct edge{
    int U,V,W;
    edge(int a,int b,int c)
    {
        U=a; V=b; W=c;
    }
};

vector <edge> Edges;
vector<pair<int,int> >graph1[mx];
bool sohag(edge a,edge b)
{
    return a.W<b.W;
}

int Parent[mx+5],visited[mx],value[mx];

void INIT(int N)
{
    for(int i=1;i<=N;i++) {
    value[i]=0;
    graph1[i].clear();
    L[i]=0,
    T[i]=-1,
    Parent[i]=i;
    for(int j=0;j<=21;j++)
    {
        dis_max[i][j]=0;
        P[i][j]=-1;
    }

    }
}

int Find(int r)
{
    if(r==Parent[r]) return r;
    else return Parent[r]=Find(Parent[r]);
}

void Kruskal(int E)
{

    sort(Edges.begin(),Edges.end(),sohag);


    //for(int i=0;i<E;i++) cout<<Edges[i].U<<" "<<Edges[i].V<<" "<<Edges[i].W<<endl;

    for(int i=0;i<E;i++)
    {
        int X=Edges[i].U;
        int Y=Edges[i].V;
        int Cost=Edges[i].W;
         //cout<<X<<" "<<Y<<endl;
        int PX=Find(X);
        int PY=Find(Y);

        if(PX!=PY)
        {
            //ans+=Cost;
            Parent[PX]=PY;
            graph1[X].push_back(make_pair(Y,Cost));
            graph1[Y].push_back(make_pair(X,Cost));

        }
    }
}

void dfs(int from,int u,int dep)
{
    T[u]=from;
    L[u]=dep;
    for(int i=0;i<(int)graph1[u].size();i++)
    {
        int v=graph1[u][i].first;
        int w=graph1[u][i].second;
        if(v==from) continue;
        dfs(u,v,dep+1);
    }
}
int lca_query(int N, int p, int q)
  {
      int tmp, log, i;
        if(L[p]<L[q]) swap(p,q);
        log=log2(L[p]);
        int mn=0;

        for (i = log; i >= 0; i--)
          if (L[p] - (1 << i) >= L[q])
          {
              mn=max(mn,dis_max[p][i]);
              p = P[p][i];
          }

      if (p == q)
          return mn;

        for (i = log; i >= 0; i--)
          if (P[p][i] != -1 && P[p][i] != P[q][i])
          {
              mn=max(mn,max(dis_max[p][i],dis_max[q][i]));
             // mn2=min(mn2,dis_max[q][i])
              p = P[p][i], q = P[q][i];
          }
          int fk=max(mn,max(dis_max[p][0],dis_max[q][0]));
      return fk;
  }
void lca_init(int N)
  {
      int i, j;
       for (i = 1; i <=N; i++){
            P[i][0] = T[i];
           dis_max[i][0]=value[i];
       }
      for (j = 1; (1 << j) <=N; j++)
         for (i = 1; i <=N; i++)
             if (P[i][j - 1] != -1)
             {
                 //cout<<i<<" "<<p1<<" "<<p2<<n1<<" "<<n2<<endl;
                 dis_max[i][j]=max(dis_max[i][j-1],dis_max[P[i][j-1]][j-1]);
             P[i][j]=P[P[i][j-1]][j-1];
             }
 }
#define WRITE(f) freopen(f,"w",stdout)
int main()
{

   WRITE("1.txt");
    int X,Y,W,N,E,q,t,cs=0,w;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&N,&E);
        int u,v;
        Edges.clear();
        for(int i=1;i<=E;i++)
        {
            scanf("%d%d%d",&u,&v,&w);
            u;v;
             Edges.pb(edge(u,v,w));
        }
        INIT(N);
        Kruskal(E);
        dfs(1,1,0);
        for(int i=1;i<=N;i++)
        {
            for(int j=0;j<graph1[i].size();j++)
            {
                int x=graph1[i][j].first;
                int w=graph1[i][j].second;
                //cout<<i<<" "<<L[i]<<" "<<x<<" "<<L[x]<<endl;
                if(L[x]<L[i])
                {
                    value[i]=w;
                }
                else value[x]=w;
            }
        }
//
//        for(int i=0;i<N;i++) cout<<value[i]<<" ";
//        cout<<endl;
        lca_init(N);
        int Q,l,r;
        scanf("%d",&Q);
        cs++;
        printf("Case %d:\n",cs);
        while(Q--)
        {
            scanf("%d %d",&l,&r);
            int n=lca_query(N,l,r);
            printf("%d\n",n);
        }
    }

    return 0;
}
