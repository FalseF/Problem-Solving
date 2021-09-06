
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define WRITE(f) freopen(f,"w",stdout)
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
    WRITE("1.txt");
    ll N,E;
    while(cin>>N){
            if(N==0) return 0;
    ll u,v;
    ll ck=0;
    memset(dp,-1,sizeof(dp));
    for(ll i=0;i<=N;i++)
    {
        parent[i]=-1;
        Graph[i].clear();
    }
    for(ll i=1;i<=N;i++)
    {
        cin>>E;
        for(ll j=1;j<=E;j++)
        {
            cin>>v;
            ck=1;
        Graph[i].push_back(v);
        //Graph[v].push_back(i);
        }

    }
    if(ck==0)
    {
        cout<<1<<endl;
        continue;
    }
    ll ans=min(fun(1,1),fun(1,0));
    cout<<ans<<endl;
    }
}
