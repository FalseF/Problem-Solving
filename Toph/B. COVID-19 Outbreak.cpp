#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
vector< pair<ll,ll> >G[1000006];

map<ll,ll>ar,ans;

ll bfs(ll s, ll p)
{
    ans[s]=ar[s];
    for(auto it: G[s])
    {
        if(p==it.first) continue;
        bfs(it.first,s);
        //cout<<ans[s]<<endl;
        ans[s]+=min(ans[it.first],it.second);
        //cout<<ans[s]<<endl;
    }
  return 0;
}

int main()
{
    ll n,e,c,u,v;
    cin>>n>>e;
    for(ll i=1;i<n;i++)
    {
        cin>>u>>v>>c;
        G[u].push_back(make_pair(v,c));
        G[v].push_back(make_pair(u,c));
    }
    for(ll i=1;i<=n;i++) cin>>ar[i];
    ll ck=bfs(e,-1);

    cout<<ans[e]<<endl;
}
