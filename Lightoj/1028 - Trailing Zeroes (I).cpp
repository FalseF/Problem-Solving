#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

vector <ll> primes;
#define MAX 1000005

bool A[MAX];

void sieve()
{
    primes.push_back(2);

    for(ll i=2;i<=MAX;i+=2)
        A[i]=1;
    for(ll i=3;i<=MAX;i+=2)
    {
        if(A[i]==0)
        {
            primes.push_back(i);
            for(ll j=i*2 ;j<=MAX;j+=i)
                A[j]=1;
        }
    }

}


ll prime_factor(ll source)
{
    ll Count=0,M,R=1;

    for(ll i=0;i<=primes.size()&& primes[i]*primes[i] <= source; i++)
    {
        if(source%primes[i]==0)
        {
            Count=0;

            while(source%primes[i]==0)
            {
                Count++;
                source=source/primes[i];
            }
            M=Count+1;
            R=R*M;
        }
    }
     if(source!=1)
    {
        R=R*2;

    }
    return R;
}





int main()
{
    freopen("1.txt","w",stdout);
    sieve();
    ll N;ll T;
    scanf("%lld",&T);
    for(ll i=1;i<=T;i++){
            scanf("%lld",&N);
    ll R=prime_factor(N)-1;
    printf("Case %lld: %lld\n",i,R);
    }
    return 0;
}
