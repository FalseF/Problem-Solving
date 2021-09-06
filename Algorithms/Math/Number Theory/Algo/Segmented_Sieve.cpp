#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
vector <ll> primes;
void sieve(ll N)
{
    bool num[N+3];

    memset(num,false,sizeof(num));

    primes.clear();

    if(N>1)primes.push_back(2);

    for(ll i=2;i<=N;i+=2)
        num[i]=true;num[2]=true;
    for(ll i=3;i<=N;i+=2)
    {
        if(!num[i])
        {

                primes.push_back(i);

            for(ll j=i*2 ;j<=N;j+=i)
                num[j]=true;
        }
    }

}

ll Segmented_sieve(ll low, ll high)
{
    ll limit=floor(sqrt(high))+1;

    sieve(limit);

    ll l=primes.size();

    ll n=high-low+1;


    bool ans[n+2];

    memset(ans,false,sizeof(ans));

    for(ll i=0;i<l;i++)
    {
        ll lolimt=floor(low/primes[i])*primes[i];

        if(lolimt<low)
        {
            lolimt+=primes[i];
        }
        if(lolimt==primes[i]) lolimt+=primes[i];

        for(ll j=lolimt;j<=high;j+=primes[i])
        {
            ans[j-low]=true;
        }

    }

    ll cnt=0;

    for(ll i=low;i<=high;i++)
    {
        if(!ans[i-low]) {cnt++;}
    }

    return cnt;
}

int main()
{
    //WRITE("output.txt");

    ll n,m,k,l,h,T;

    cin>>T;

    for(ll i=1;i<=T;i++)
    {

    cin>>l>>h;

    ll ans=Segmented_sieve(l,h);

    if(l==1) ans--;
    printf("Case %lld: %lld\n",i,ans);


    }

}