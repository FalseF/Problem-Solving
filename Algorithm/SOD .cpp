#include <bits/stdc++.h>
using namespace std;
#define MAX 10000000
typedef long long ll;
bool A[MAX+100]={0};
ll primes[10000004];
void sieve()
{
      ll ck=1;
       primes[ck]=2;
       for(ll i=3; i*i<=MAX; i+=2)
        {
            if(!A[i])
            {
                for(ll j=i*i; j<=MAX; j+=i*2)
                {
                    A[j]=1;
                }
            }
        }

        for(ll i=3;i<=MAX;i+=2)
        {
            if(!A[i])
            {
                ck++;
                primes[ck]=i;
            }
        }
}



ll pfactor[MAX];
ll power[MAX];
ll pfactor_size;
ll a[100000];

void prime_factor(ll N)
{
    ll Count=0,C=0;
    for(ll i=1;i<=MAX && primes[i]*primes[i]<=N;i++)
    {
        if(N%primes[i]==0)
        {
            pfactor[Count]=primes[i];
            Count++;
            a[C++]=primes[i];
        }
        while(N%primes[i]==0)
        {
            power[Count-1]++;
            N=N/primes[i];
        }

    }
    if(N!=1)
    {
        pfactor[Count]=N;
        power[Count]=1;
        Count++;
    }
    pfactor_size=Count;
}

ll SOD(ll N)
{
    ll s=1;
    double sum;
    for(ll i=0;i<pfactor_size;i++)
    {
        sum=0;
        for(ll j=0;j<=power[i];j++)
        {
            sum=sum+pow((double)pfactor[i],(double)j);
        }
        ///cout<<sum<<endl;
        s=s*(ll)sum;
    }
    return s;
}


int main()
{
    sieve();
    ll N;
    cin>>N;
    prime_factor(N);
    for(ll i=0;i<pfactor_size;i++)
        cout<<a[i]<<" ";
    cout<<SOD(N)<<endl;

}

/*
#include <bits/stdc++.h>
using namespace std;
#define MAX 10000000
typedef long long ll;
bool A[MAX+100]={0};
ll primes[10000004];
void sieve()
{
      ll ck=1;
       primes[ck]=2;
       for(ll i=3; i*i<=MAX; i+=2)
        {
            if(!A[i])
            {
                for(ll j=i*i; j<=MAX; j+=i*2)
                {
                    A[j]=1;
                }
            }
        }

        for(ll i=3;i<=MAX;i+=2)
        {
            if(!A[i])
            {
                ck++;
                primes[ck]=i;
            }
        }
}

ll SOD(ll N)
{
    ll Count=0,C=0;
    ll ans=1;
    for(ll i=1;i<=MAX && primes[i]*primes[i]<=N;i++)
    {
        ll n=primes[i];
        if(N%primes[i]) continue;
        while(N%primes[i]==0)
        {
            n*=primes[i];
            N/=primes[i];

        }
        n--;
        n/=(primes[i]-1);
        ans*=n;
    }
    if(N!=1)
    {
        ll ck1=(N*N-1)/(N-1);
        ans*=ck1;
    }
   return ans;
}

int main()
{
    sieve();
    ll N,T,cs=0;
    cin>>T;
    while(T--)
    {
        cin>>N;
        ll ans=SOD(N);
        cout<<"Case "<<++cs<<": "<<ans<<endl;
    }
}
*/
