#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll dp[2000][2000];
ll parent[500000];
vector<ll>Graph[100000];
ll fun(ll node, ll gard)
{
    if(dp[node][gard]!=-1) return dp[node][gard];
    ll ans=gard;
    for(ll i=0;i<Graph[node].size();i++)
    {
        ll v=Graph[node][i];
        if(v==parent[node]){continue;}
        parent[v]=node;
        if(gard==1)
        {
            ans+=min(fun(v,0),fun(v,1));
        }
        else
        {
            ans+=fun(v,1);
        }
    }
    return dp[node][gard]=ans;
}
int main()
{
    ll N,E;
    cin>>N;
    ll u,v;
    for(ll i=1;i<N;i++)
    {
        cin>>u>>v;
        Graph[u].push_back(v);
        Graph[v].push_back(u);

    }
    memset(dp,-1,sizeof(dp));
    memset(parent,-1,sizeof(parent));
    ll s;
    cin>>s;
    ll ans=min(fun(s,1),fun(s,0));
    cout<<ans<<endl;
}
