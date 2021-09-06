#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

ll parent[200005];

void initialize(ll N)
{
    for(ll i=1;i<=N;i++) parent[i]=i;
}

struct edge{

    ll U,V,W;

    edge(ll u,ll v,ll w)
    {
        U=u;V=v;W=w;

    }

};

vector<edge>G;


struct connect{
    ll U1,V1,W1;

    connect(ll u,ll v,ll w)
    {
        U1=u;V1=v;W1=w;
    }

};
vector<connect>graph;
ll cost1=0,cost2=0;

ll Find(ll x)
{
    if(parent[x]==x) return x;
    parent[x]=Find(parent[x]);
    return parent[x];
}

bool fun(edge a, edge b)
{
    return a.W<b.W;
}

void MST1(ll N, ll E)
{
    sort(G.begin(),G.end(),fun);

    for(ll i=0;i<E;i++)
    {
        ll u=G[i].U;

        ll v=G[i].V;

        ll w=G[i].W;

        ll px=Find(u);

        ll py=Find(v);

        if(px!=py)
        {
            parent[py]=px;

            graph.push_back(connect(u,v,w));
            cost1+=w;
        }
    }
}
ll ans=100000;

ll MST2(ll E,ll x, ll y)
{
    cost1=0;
    for(ll i=0;i<E;i++)
    {
        ll u=G[i].U;

        ll v=G[i].V;

        ll w=G[i].W;

        if(u==x && v==y) continue;//directed graph er khete

        ll px=Find(u);

        ll py=Find(v);

        if(px!=py)
        {
            cost1+=w;
            parent[py]=px;
        }
    }
    return cost1;
}

int main()
{
    ll N,E,u,v,c;

    scanf("%lld %lld",&N,&E);

    initialize(N);

    for(int i=1;i<=E;i++)
    {
        scanf("%lld %lld %lld",&u,&v,&c);

        G.push_back(edge(u,v,c));
    }

    MST1(N,E);

    cout<<"First MST is : "<<cost1<<endl;

    for(ll i=0;i<graph.size();i++)
    {
        initialize(N);

        ll x=graph[i].U1;

        ll y=graph[i].V1;

        ll a=MST2(E,x,y);

        ans=min(ans,a);
    }
    cout<<"second MST is : "<<ans<<endl;



}


