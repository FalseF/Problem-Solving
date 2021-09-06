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

        ll mx=max(Rank[u],Rank[v]);
        ans=max(ans,mx);


    }


        ll mx=max(Rank[u],Rank[v]);
        ans=max(ans,mx);
}

int main()

{
    //freopen("input.txt","w",stdout);
    ll t,u,v,e,n;

    string s,s1,s2;

    while(scanf("%lld %lld",&n,&e))
    {
        if(n==0 && e==0) break;

        ans=0;



        for(ll i=1;i<=n;i++)
        {
            //ans=0;
            cin>>s;
           parent[s]=s;
           Rank[s]=1;
        }
        for(int j=1;j<=e;j++)
        {
            cin>>s1>>s2;

           Union(s1,s2);
        }

         if(e==0) {ans=1;}

         cout<<endl;

          cout<<ans<<endl;

        visited.clear();
        Rank.clear();
        parent.clear();

    }
}

