#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

vector <ll> primes;

#define MAX 10000010

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


ll fun(ll source)
{
    ll Count=1;

    while(source%2==0) source/=2; //cout<<source<<endl;

    for(ll i=0; i<primes.size() && primes[i]*primes[i] <= source; i++)
    {
        ll cnt=0; //cout<<primes[i]<<endl;

        if(source%primes[i]) continue;

        while(source%primes[i]==0)
        {
            cnt++;
            source=source/primes[i];
        }
        Count*=(cnt+1);

    }
    //cout<<source<<endl;

    if(source!=1)
    {
        Count*=2;
    }

    return Count;
}

#define WRITE(f) freopen(f,"w",stdout);
int main()

{
    //WRITE("output.txt");

    sieve();

   ll t,n;

   cin>>t;

   for(ll i=1;i<=t;i++)
   {
       cin>>n;

       printf("Case %lld: %lld\n",i,fun(n)-1);
   }

    return 0;
}

