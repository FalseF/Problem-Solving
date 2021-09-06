#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll Set(ll N, ll poss) {return (N|(1<<poss));}
ll Reset(ll N, ll poss) {return (N&~(1<<poss));}
bool check(ll N, ll poss) {return (bool)(N&(1<<poss));}
ll w[200][200];
ll n,dp[10][1<<10],MAX=99999999999999;
ll fun(ll cur, ll mask)
{
    //if(cur>n) return 99999999999999;
    if(mask==(1<<n-1)) return w[cur][0];
    if(dp[cur][mask]!=-1) return dp[cur][mask];
    ll ans=9999999999999;
    for(ll j=0;j<n;j++)
    {
        //if(w[cur][j]==MAX) continue;
        if(!check(mask,j))
        {
            ll r=w[cur][j]+fun(j,Set(mask,j));
            //cout<<r<<endl;
            ans=min(ans,r);
        }
    }
    return dp[cur][mask]=ans;
}
int main()
{
    cin>>n;
    for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<n;j++) cin>>w[i][j];
    }
    memset(dp,-1,sizeof(dp));
    ll ans=fun(0,1);
    cout<<ans<<endl;
}
