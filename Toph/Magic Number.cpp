
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<ll>primes;
#define MAXP 10000000
ll A[10000007];
void sieve()
{
   primes.push_back(2);
   for(ll i=2;i<=MAXP;i=i+2)
   {
      A[i]=1;
   }

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
    ll t,cs=0,i,j;
    double k;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lf",&k);
         ll p=sqrt(k);
        if(A[p]==0 && p*p==k) printf("YES.\n");
        else printf("NO.\n");

    }
}
