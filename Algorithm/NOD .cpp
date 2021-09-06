#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

vector <ll> primes;
#define MAX 10000000

bool A[MAX+100];

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

ll pfactor[MAX];
ll power[MAX];
ll pfactor_size;

void prime_factor(ll source)
{
    ll Count=0;

    for(ll i=0;i<=MAX && primes[i]*primes[i] <= source; i++)
    {
        if(source%primes[i]==0)
        {
            pfactor[Count]=primes[i];
            Count++;
        }

        while(source%primes[i]==0)
        {
            power[Count-1]++;
            source=source/primes[i];
        }
    }

    if(source!=1)
    {
        pfactor[Count]=source;
        power[Count]=1;
        Count++;
    }

    pfactor_size=Count;
}

ll NOD(ll source)
{
    ll n=1;

    for(ll i=0;i<pfactor_size;i++)
    {
        n=n*(power[i]+1);
    }
    return n;
}


//time complexity is huge;
ll NOD1(ll N)
{
    ll c=0,i,n,j;
    double A=sqrt(N);
    n=A;
    for(i=1;i<=n;i++)
    {
        if(N%i==0) c++;
    }
    if(A==n) return c*2-1;
    else return c*2;
}




int main()
{
    sieve();
    ll N;
    cin>>N;
    prime_factor(N);

    cout<<NOD(N)<<endl;
    cout<<NOD1(N);
    return 0;
}
