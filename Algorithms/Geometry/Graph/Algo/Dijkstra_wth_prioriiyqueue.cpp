#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll path[200000];
struct edges{
    ll N;ll W;
    edges (ll a, ll b)
    {
        N=a;
        W=b;

    }

};
vector<edges>graph[200000];

struct nodes{
    ll cost;ll pos;
    nodes(ll a, ll b)
    {
        cost=b;
        pos=a;
    }

};


bool operator <(nodes A, nodes B)
{
    return A.cost>B.cost;
}

ll dist[200000];

void dijkstra(ll source)
{


       priority_queue<nodes>Q;

       Q.push(nodes(source,0));
       dist[source]=0;

    while(!Q.empty())
    {
        nodes u=Q.top();
        
        Q.pop();
        
        if(u.cost!=dist[u.pos]) continue;

        for(ll i=0;i<graph[u.pos].size();i++)
        {
            edges v=graph[u.pos][i];

            if((u.cost+v.W)<dist[v.N])
            {
                dist[v.N]=u.cost+v.W;
                Q.push(nodes(v.N,dist[v.N]));
                path[v.N]=u.pos;
            }

        }
    }
}

void pathprint(ll d,ll s)
{
    if(d==s){cout<<d<<" "; return;}
    else pathprint(path[d],s);
    cout<<d<<" ";
}

int main()
{
    ll n,e,c,u,v;
    cin>>n>>e;
      for(ll i=0;i<=n;i++) dist[i]=INT_MAX;
    for(ll i=0;i<e;i++)
    {
        cin>>u>>v>>c;
        graph[u].push_back(edges(v,c));
        graph[v].push_back(edges(v,c));
    }
    dijkstra(1);
   // cout<<dist[4]<<endl;
    pathprint(n,1);
}
