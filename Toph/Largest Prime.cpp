
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<ll>primes;
#define MAXP 10000005
ll A[10000007];
void sieve()
{
   primes.push_back(2);
   for(ll i=2;i<=MAXP;i=i+2)
   {
      A[i]=1;
   }
   A[1]=1;
   A[2]=0;
   for(ll i=3;i<=MAXP;i=i+2)
   {
       if(A[i]==0)
      {
         primes.push_back(i);
         for(ll j=i*2;j<=MAXP;j=j+i)
         {
            A[j]=1;
         }
      }
   }
}
int main()
{
    sieve();
    ll N,u,l,r;
    scanf("%lld",&N);
    while(N--)
    {
        scanf("%lld%lld",&l,&r);
        if(A[r]==0){ printf("%lld\n",r); continue;}
        ll n1=upper_bound(primes.begin(),primes.end(),r)-primes.begin();
        ll n2=upper_bound(primes.begin(),primes.end(),l)-primes.begin();
        cout<<n1<<" "<<n2<<endl;
        if(n2>n1) printf("-1\n");
        if(primes[n1]<=r) {printf("%lld\n",primes[n1]);continue;}
        else
        {

            if(primes[n1-1]<=r && primes[n1-1]>=l) printf("%lld\n",primes[n1-1]);

            else if(primes[n2]>=l && primes[n2]<=r) printf("%lld\n",primes[n2]);

            else printf("-1\n");
        }

    }

}




