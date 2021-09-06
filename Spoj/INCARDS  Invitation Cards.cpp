#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define MAX 1000009

ll dis[MAX+10];
struct edge
{
    ll node,cost;

    edge(ll a , ll b)
    {
        node=a;

        cost=b;
    }
};

vector<edge>G1[1000009];

vector<edge>G2[1000009];

struct Nodes{

   ll N1,W1;

   Nodes(ll a, ll b)
   {
       N1=a;
       W1=b;
   }
};

bool operator <(Nodes a, Nodes b)
{
    return a.W1>b.W1;
}

ll dijkstra1(ll source, ll N)
{
     for(ll k=1;k<=N;k++) dis[k]=999999999999999999;

     ll ans=0;

     priority_queue<Nodes>Q;

     Q.push(Nodes(source,0));

     dis[source]=0;

     while(!Q.empty())
     {
         Nodes u=Q.top();

         Q.pop();

         for(ll i=0;i<G1[u.N1].size();i++)
         {
             edge v=G1[u.N1][i];

             if((u.W1+v.cost)<dis[v.node])
             {
                 dis[v.node]=u.W1+v.cost;

                 Q.push(Nodes(v.node,dis[v.node]));
             }
         }
     }

     for(int i=1;i<=N;i++) ans+=dis[i];

     return ans;
}

ll dijkstra2(ll source, ll N)
{
     for(ll k=1;k<=N;k++) dis[k]=999999999999999999;

     ll ans=0;

     priority_queue<Nodes>Q;

     Q.push(Nodes(source,0));

     dis[source]=0;

     while(!Q.empty())
     {
         Nodes u=Q.top();

         Q.pop();

         for(ll i=0;i<G2[u.N1].size();i++)
         {
             edge v=G2[u.N1][i];

             if((u.W1+v.cost)<dis[v.node])
             {
                 dis[v.node]=u.W1+v.cost;

                 Q.push(Nodes(v.node,dis[v.node]));
             }
         }
     }

     for(int i=1;i<=N;i++) ans+=dis[i];

     return ans;
}


int main()
{
    ll N,E,u,v,c;

    ll T;

    cin>>T;
    for(ll i=1;i<=T;i++)
    {
        cin>>N>>E;
        for(ll j=1;j<=E;j++)
        {
            cin>>u>>v>>c;

            G1[u].push_back(edge(v,c));

            G2[v].push_back(edge(u,c));
        }

        ll ans1=dijkstra1(1, N); //cout<<ans1<<endl;

        ll ans2=dijkstra2(1,N);

        //cout<<ans1<<" "<<ans2<<endl;

        cout<<ans1+ans2<<endl;

        for(int i=1;i<=N;i++){
            G1[i].clear();
            G2[i].clear();
        }

    }
}
