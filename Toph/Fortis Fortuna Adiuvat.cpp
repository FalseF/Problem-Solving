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
vector<edges>graph1[200000];
vector<edges>graph2[200000];
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

ll dist1[200000];
ll dist2[200000];
void dijkstra1(ll source)
{
       priority_queue<nodes>Q;
       Q.push(nodes(source,0));
       dist1[source]=0;
    while(!Q.empty())
    {
        nodes u=Q.top();
        Q.pop();
            if(u.cost!=dist1[u.pos]) continue;
        for(ll i=0;i<graph1[u.pos].size();i++)
        {
            edges v=graph1[u.pos][i];
            if((u.cost+v.W)<dist1[v.N])
            {
                dist1[v.N]=u.cost+v.W;
                Q.push(nodes(v.N,dist1[v.N]));
            }

        }
    }
}

void dijkstra2(ll source)
{
       priority_queue<nodes>Q;
       Q.push(nodes(source,0));
       dist2[source]=0;
    while(!Q.empty())
    {
        nodes u=Q.top();
        Q.pop();
            if(u.cost!=dist2[u.pos]) continue;
        for(ll i=0;i<graph2[u.pos].size();i++)
        {
            edges v=graph2[u.pos][i];
            if((u.cost+v.W)<dist2[v.N])
            {
                dist2[v.N]=u.cost+v.W;
                Q.push(nodes(v.N,dist2[v.N]));
            }
        }
    }
}

int main()
{
    ll T,cs=0,i,j,k,l,N,E,D,Q,d,s,u,v,w;
    cin>>T;
    while(T--)
    {
        cin>>N>>E>>D>>Q;
        for(i=1;i<=N;i++)
        {
            dist1[i]=9223372036854775807;
            dist2[i]=9223372036854775807;
            graph1[i].clear();
            graph2[i].clear();
        }
        for(i=1;i<=E;i++)
        {
            cin>>u>>v>>w;
            graph1[u].push_back(edges(v,w));
            graph2[v].push_back(edges(u,w));
        }
        dijkstra1(D);
        dijkstra2(D);
        cs++;
        cout<<"Case "<<cs<<":"<<endl;
        while(Q--)
        {
            cin>>s>>d;
            ll ans=dist2[s]+dist1[d];
            //cout<<dist2[s]<<" "<<dist1[d]<<endl;
            if(ans>=9223372036854775807 || dist1[d]==9223372036854775807 || dist2[s]==9223372036854775807) cout<<"Be seeing ya, John"<<endl;
            else cout<<ans<<endl;
        }
    }
}
