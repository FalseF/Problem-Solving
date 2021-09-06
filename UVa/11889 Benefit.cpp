
      /*########  IN THE NAME OF ALLAH   ##########*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 999999999999999999
#define nl printf("\n")
#define  r0 return 0
#define  r1 return 1
#define sf1(x)  scanf("%lld",&x)
#define sf2(x,y)  scanf("%lld %lld",&x,&y)
#define sf3(x,y,z)  scanf("%lld %lld %lld",&x,&y,&z)
#define pf1(x)  printf("%lld\n",x)
bool pck[10000000+100]={0};
ll primes[10000004];
ll pnum;
void sieve()
{
      ll ck=1;
       primes[ck]=2;
       for(ll i=3; i*i<=1000000; i+=2)
        {
            if(!pck[i])
            {
                for(ll j=i*i; j<=1000000; j+=i*2)
                {
                    pck[j]=1;
                }
            }
        }

        for(ll i=3;i<=1000000;i+=2)
        {
            if(!pck[i])
            {
                ck++;
                primes[ck]=i;
            }
        }
        pnum=ck;
}

ll NOD(ll E, ll N)
{
    ll ans=1;
    for(ll i=1;i<=pnum && primes[i]*primes[i]<=N;i++)
    {
        ll n1=1,n2=1;
        if(N%primes[i]) continue;
        while(N%primes[i]==0)
        {
            N/=primes[i];
            n1*=primes[i];
        }

        while(E%primes[i]==0)
        {
            E/=primes[i];
            n2*=primes[i];
        }

        if(n1>n2) ans*=n1;
    }
    if(N!=1 && E==1) ans*=N;

return ans;
}

int main()
{
   ll T,N,E,u,Q,v,i,j,k,sum=0,ck=0,x,y,cs=0;

   string S,S1;
   sieve();
   double d1,d2,d3;
  sf1(T);
  while(T--)
  {
      sf2(N,E);
      if(E%N) printf("NO SOLUTION\n");
      else {
        printf("%lld\n",NOD(N,E));
      }
  }


 /************ALEYA YOUSUF ************/


 /************ALLAH IS ALMIGHTY ************/
return 0;

}
