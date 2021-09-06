#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod = 1000000007;
ll BIT[100005], ar[100005],n;
struct FT
{
    ll n;
    FT(int _n)
    {
        n = _n;
        memset(BIT,0,sizeof(BIT));
    }
    void update(ll x, int delta)
    {
        for(; x <= n; x += x&-x)
        {
            BIT[x] += delta;
            //cout << x << " " << BIT[x]<< endl;
            BIT[x]%=mod;
        }
    }
    int query(int x, int sum = 0)
    {
        for(; x > 0; x -= x&-x)
        {
            sum += BIT[x];
            sum%=mod;
            //cout<<x<<" "<<BIT[x]<<endl;

        }
        return sum;
    }
};
int main()
{
    ll n,t,cs=0;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        vector<ll>vc;
        for(ll i=1; i<=n; i++)
        {
            scanf("%lld",&ar[i]);
            vc.push_back(ar[i]);
        }
        sort(vc.begin(),vc.end());
        vc.resize(unique(vc.begin(),vc.end())-vc.begin());
        for(ll i=1; i<=n; i++)
        {
            ll id=lower_bound(vc.begin(),vc.end(),ar[i])-vc.begin();
            id++;
            ar[i]=id;
            //cout<<id<<" ";
        }
        FT ft(n);
        ll ans=0;
        for (ll i = 1; i <= n; i++)
        {
            //cout<<i<<" q\n";
            if(ar[i]==1)
            {
                ft.update(ar[i], 1);
                ans++;
                ans%=mod;
            }
            else
            {

                ll sum=ft.query(ar[i]-1);
                sum++;
                ft.update(ar[i],sum);
                ans=(ans+sum)%mod;

            }
        }
        cs++;
        printf("Case %lld: %lld\n",cs,ans);

    }

}

