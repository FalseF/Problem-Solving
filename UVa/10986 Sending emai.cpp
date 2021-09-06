#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

ll dis[200002];

struct edge{

    ll N;ll W;

    edge(ll a, ll b)
    {
        N=a;W=b;
    }
};

vector<edge>G[200002];

struct node{

    ll ver;ll cost;

    node(ll a, ll b)
    {
        ver=a;cost=b;
    }

};

bool operator <(node a, node b)
{
    return a.cost>b.cost;
}

void dijkstra(ll s)
{


    priority_queue<node>Q;

    Q.push(node(s,0));

    dis[s]=0;


    while(!Q.empty())
    {
        node u=Q.top();

        Q.pop();

        for(ll i=0;i<G[u.ver].size();i++)
        {
            edge v=G[u.ver][i];

            if((u.cost + v.W)<dis[v.N])
            {
                dis[v.N]=u.cost+v.W;
                Q.push(node(v.N,dis[v.N]));
            }

        }

    }
}

int main()
{

//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);

    ll n,E,c,u,v,t,s,d;

    cin>>t;

    for(ll i=1;i<=t;i++)
    {
        for(ll k=0;k<50001;k++) dis[k]=INT_MAX;

        cin>>n>>E>>s>>d;


            for(ll j=0;j<E;j++)
            {
                cin>>u>>v>>c;

                G[u].push_back(edge(v,c));

                G[v].push_back(edge(u,c));
            }

            dijkstra(s);

            if(dis[d]==INT_MAX) {cout<<"Case #"<<i<<": unreachable"<<endl;}

             else { cout<<"Case #"<<i<<": "<<dis[d]<<endl;}

           for(ll j=0;j<n;j++) G[j].clear();

    }
}

