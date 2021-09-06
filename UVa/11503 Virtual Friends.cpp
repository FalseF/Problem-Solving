#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

ll ans;


map<string,string>parent;

map<string, ll >Rank;

map<string , ll> visited;

string Find(string x)
{
    if(parent[x]==x) return x;

    parent[x]=Find(parent[x]);

    return parent[x];
}

void Union(string x, string y)
{
    string u=Find(x);

    string v=Find(y);

    if(u!=v)
    {
        if(Rank[v]>Rank[u]){Rank[v]+=Rank[u];parent[u]=v;}
        else {Rank[u]+=Rank[v];parent[v]=u;}

        ans=max(Rank[u],Rank[v]);
    }

    ans=max(Rank[u],Rank[v]);
}

int main()

{
    ll t,u,v,e;

    string s,s1;

    scanf("%lld",&t);

    for(ll i=1;i<=t;i++)
    {
        //ans=0;
        scanf("%lld",&e);

        for(int j=1;j<=e;j++)
        {
            cin>>s>>s1;

           if(visited[s]==0) {parent[s]=s;visited[s]=1;Rank[s]=1;}
           if(visited[s1]==0) {visited[s1]=1;parent[s1]=s1;Rank[s1]=1;}

           Union(s,s1);

           cout<<ans<<endl;

        }

        visited.clear();
        Rank.clear();
        parent.clear();
    }
}
