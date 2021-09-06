#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

struct edge{

    ll U,V,W;

    edge(ll a,ll b,ll c)
    {
        U=a;V=b;W=c;
    }

};

vector<edge>G;

ll dis[100000];

ll path[10000]=0;

void bellmanford(ll s, ll N, ll  E)
{
    dis[s]=0;

    for(ll i=1;i<N;i++)
    {
        for(ll j=0;j<E;j++)
        {
            ll u=G[j].U;

            ll v=G[j].V;

            ll C=G[j].W;

            if((dis[u]+C)<dis[v])
            {
                dis[v]=C+dis[u];
            }
        }
    }


        for(ll j=0;j<E;j++)
        {
            ll u=G[j].U;

            ll v=G[j].V;

            ll C=G[j].W;

            if((dis[u]+C)<dis[v])
            {
                cout<<"Negative weight  Cycle  Found";
                break;
                dis[v]=C+dis[u];
            }
        }
}


int main()


{
    ll N,E,u,v,c;

    for(ll i=0;i<100000;i++) dis[i]=INT_MAX;

    cin>>N>>E;


    for(ll i=0;i<E;i++)
    {
        cin>>u>>v>>c;

        G.push_back(edge(u,v,c));
    }

    bellmanford(1,N,E);

    for(ll i=1;i<=N;i++) cout<<dis[i]<<" ";


}
