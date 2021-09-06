#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

struct edge{

    string U,V;ll W;

    edge(string u, string v, ll w)
    {
        U=u;V=v;W=w;
    }

};

map<string , ll> visited;

vector<edge>G;

map<string,string>parent;

bool fun (edge a, edge b)
{
    return a.W>b.W;
}


string Find(string x)
{
    if(parent[x]==x) return x;

    parent[x]=Find(parent[x]);

    return parent[x];
}

ll ans=10000000;

void kruskal(ll n, ll e,string s, string d)
{
     sort(G.begin(),G.end(),fun);

     ans=10000000;

     for(ll i=0;i<e;i++)
     {
         string u=G[i].U;

         string v=G[i].V;

         ll w=G[i].W;

        string px=Find(u);

        string py=Find(v);

        if(px!=py)
        {
            parent[px]=py;
            ans=min(ans,w);

        }
        px=Find(s);
        py=Find(d);
        if(px==py) break;
     }
}

int main()
{
    ll n,e,c=0,taka;
    string u,v,s,d;

    while(cin>>n>>e)
    {
        c++;
        if(n==0 && e==0) break;

        for(ll i=1;i<=e;i++)
        {
            cin>>u>>v>>taka;

            parent[u]=u;

            parent[v]=v;

           G.push_back(edge(u,v,taka));
        }

        cin>>s>>d;

        kruskal(n,e,s,d);

        cout<<"Scenario #"<<c<<endl;

        cout<<ans<<" tons"<<endl<<endl;
        G.clear();
        parent.clear();


    }
}
