#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define mp make_pair
#define mx 200005
ll source;
ll L[mx];
ll P[mx][22];
ll T[mx];
ll dis_max[mx][22],res;
struct edge{
    ll U,V,W;
    edge(ll a,ll b,ll c)
    {
        U=a; V=b; W=c;
    }
};

vector <edge> Edges,ans;
vector<pair<ll,ll> >graph1[mx];
bool sohag(edge a,edge b)
{
    return a.W<b.W;
}

ll Parent[mx+5],visited[mx],value[mx];

void INIT(ll N)
{
    for(ll i=1;i<=N;i++) {
    value[i]=0;
    graph1[i].clear();
    L[i]=0,
    T[i]=-1,
    Parent[i]=i;
    for(ll j=0;j<=21;j++)
    {
        dis_max[i][j]=0;
        P[i][j]=-1;
    }

    }
}

ll Find(ll r)
{
    if(r==Parent[r]) return r;
    else return Parent[r]=Find(Parent[r]);
}

void Kruskal(ll E)
{

    sort(Edges.begin(),Edges.end(),sohag);


    //for(ll i=0;i<E;i++) cout<<Edges[i].U<<" "<<Edges[i].V<<" "<<Edges[i].W<<endl;

    for(ll i=0;i<E;i++)
    {
        ll X=Edges[i].U;
        ll Y=Edges[i].V;
        ll Cost=Edges[i].W;
         //cout<<X<<" "<<Y<<endl;
        ll PX=Find(X);
        ll PY=Find(Y);

        if(PX!=PY)
        {
            res+=Cost;
            Parent[PX]=PY;
            graph1[X].push_back(make_pair(Y,Cost));
            graph1[Y].push_back(make_pair(X,Cost));

        }
    }
}

void dfs(ll from,ll u,ll dep)
{
    T[u]=from;
    L[u]=dep;
    for(ll i=0;i<(ll)graph1[u].size();i++)
    {
        ll v=graph1[u][i].first;
        ll w=graph1[u][i].second;
        if(v==from) continue;
        dfs(u,v,dep+1);
    }
}
ll lca_query(ll N, ll p, ll q)
  {
      ll tmp, log, i;
        if(L[p]<L[q]) swap(p,q);
        log=log2(L[p]);
        ll mn=0;

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
          ll fk=max(mn,max(dis_max[p][0],dis_max[q][0]));
      return fk;
  }
void lca_init(ll N)
  {
      ll i, j;
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

    ll X,Y,W,N,E,q,t,cs=0,w;
    res=0;

        cin>>N>>E;
        ll u,v;
        for(ll i=1;i<=E;i++)
        {
           cin>>u>>v>>w;
            ans.pb(edge(u,v,w));
             Edges.pb(edge(u,v,w));
        }
        INIT(N);
        Kruskal(E);
        dfs(1,1,0);
        for(ll i=1;i<=N;i++)
        {
            for(ll j=0;j<graph1[i].size();j++)
            {
                ll x=graph1[i][j].first;
                ll w=graph1[i][j].second;
                //cout<<i<<" "<<x<<" "<<L[i]<<" "<<L[x]<<endl;
                if(L[x]<L[i])
                {
                    value[i]=w;
                }
                else value[x]=w;
            }
        }
//
//        for(ll i=0;i<N;i++) cout<<value[i]<<" ";
//        cout<<endl;
        lca_init(N);
        ll Q,l,r;
        for(ll i=0;i<E;i++){
                ll u1=ans[i].U;
               ll v1=ans[i].V;
              ll w=ans[i].W;
              //cout<<res<<" "<<w<<endl;
            ll n=lca_query(N,u1,v1);
            printf("%lld\n",res+w-n);
        }

    return 0;
}


