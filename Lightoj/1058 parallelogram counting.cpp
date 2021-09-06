#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
struct sohag{
    ll X,Y;
    sohag(ll x, ll y)
    {
        X=x;
        Y=y;
    }

};
vector<sohag>V;
int main()
{
    ll t,n,x,y,midx,midy,s=0,r=0;
       map<pair<int, int>, int> M;
    map< pair<int,int>, int>:: iterator it;
    scanf("%lld",&t);
    for(ll i=1;i<=t;i++)
    {
        scanf("%lld",&n);
        for(ll j=0;j<n;j++)
        {
            scanf("%lld%lld",&x,&y);
            V.pb(sohag(x,y));
        }
        for(ll j=0;j<n;j++)
        {
            for(ll k=j+1;k<n;k++)
            {
                midx=V[j].X+V[k].X;
                midy=V[j].Y+V[k].Y;
                M[make_pair(midx,midy)]++;
            }
        }
         for (it = M.begin(); it != M.end(); it++)
    {
        ll sn = it->second;
        s+= sn*(sn - 1)/2;
    }
    printf("Case %lld: %lld\n",i,s);
    M.clear();
    V.clear();
    s=0;
    }
return 0;
}

