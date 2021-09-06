#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

struct edge{

    ll N;ll cost;ll use;

    edge(ll a, ll c, ll b)
    {
        N=a;cost=c;use=b;
    }

};

vector<edge>G[20000];

ll dis[20000];

struct nodes
{
    ll node;ll cost1;ll use1;

    nodes(ll a, ll  b,ll c)
    {
        node=a;cost1=b;use1=c;
    }
};

bool operator <(nodes a, nodes b)
{
    return a.cost1>b.cost1;
}

void dijkstra(ll s,ll d)
{
    dis[s]=0;

    priority_queue<nodes>Q;

    Q.push(nodes(s,0,0));

    ll c=0;

    while(!Q.empty())
    {
        nodes u=Q.top();

        Q.pop();

        for(ll i=0;i<G[u.node].size();i++)
        {
            edge v=G[u.node][i];


            c=u.use1 + G[u.node][i].use;
            cout<<c<<endl;

            if(c<=d && (G[v.N][i].cost + u.cost1)<dis[v.N])
            {
                dis[v.N]=G[v.N][i].cost + u.cost1;
                cout<<dis[v.N]<<endl;

                Q.push(nodes(v.N,dis[v.N],c));

            }
        }




    }
}

int main()
{
    ll m,E,k,d,u,v,c,T;

    cin>>T;

    for(ll i=1;i<=T;i++)
    {

        cin>>m>>E>>k>>d;

        for(ll r=0;r<m;r++) {dis[r]=1000000000;}



        for(ll j=0;j<E;j++)
        {

            scanf("%lld%lld%lld",&u,&v,&c);

            G[u].push_back(edge(v,c,0));

            G[v].push_back(edge(u,c,0));



        }
          for(ll j=0;j<k;j++)
        {
            scanf("%lld %lld %lld",&u,&v,&c);

            G[u].push_back(edge(v,c,1));

            G[v].push_back(edge(u,c,1));



        }

        dijkstra(0,d);
        cout<<dis[m-1]<<endl;

    }
}
