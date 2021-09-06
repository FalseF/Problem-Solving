#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
vector <ll> primes;
#define MAXP 1000007
#define WRITE(f) freopen(f,"w",stdout)
bool num[MAXP+100];
ll pck[1000019];
void sieve()
{
    pck[2]=1;
    for(ll i=2;i<=MAXP;i+=2)
        num[i]=1;
    for(ll i=3;i<=MAXP;i+=2)
    {
        if(num[i]==0)
        {
            pck[i]=1;
            for(ll j=i*2 ;j<=MAXP;j+=i)
                num[j]=1;
        }
    }

}
int main()
{
    //WRITE("1.txt");
    sieve();
    ll T,N,u,cs=0;
    scanf("%lld",&T);
    while(T--)
    {
        scanf("%lld",&N);
        cs++;
        ll ar[N+4];
        ll ans=0;
        for(ll i=1;i<=N;i++)
        {
            cin>>u;
            u++;
            if(pck[u]==1)
            {
                ans+=u;

            }
            else{
                    //u++;
            for(ll j=u;;j++)
            {
                if(pck[j]==1)
                {
                    ans+=j;
                    break;
                }
            }
            }
        }
        printf("Case %lld: %lld Xukha\n",cs,ans);
    }

}
