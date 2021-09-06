
      /*########  IN THE NAME OF ALLAH   ##########*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sf1(x)  scanf("%lld",&x)
#define sf2(x,y)  scanf("%lld %lld",&x,&y)
#define sf3(x,y,z)  scanf("%lld %lld %lld",&x,&y,&z)
#define pf1(x)  printf("%lld\n",x)
bool pck[10000000+100]={0};
ll primes[10000004];
ll pnm;
void sieve()
{
      ll ck=1;
       primes[ck]=2;
       for(ll i=3; i*i<=5000001; i+=2)
        {
            if(!pck[i])
            {
                for(ll j=i*i; j<=5000001; j+=i*2)
                {
                    pck[j]=1;
                }
            }
        }

        for(ll i=3;i<=5000001;i+=2)
        {
            if(!pck[i])
            {
                ck++;
                primes[ck]=i;
            }
        }
    pnm=ck;
}

int main()
{
    sieve();
   ll T,N,E,u,Q,v,i,j;
   ll ck=0;

   while(scanf("%lld",&N) && N)
   {
       ll ans=1ll;
       ll ans1=0ll;
       for(i=1;i<=pnm && primes[i]<=N;i++)
       {
           ll p=primes[i];
           ll temp=p;
           ck=0ll;
           while(N/p)
           {
               ll d=N/p;
               ll r=N%p+1ll;//sabne joto gulo ache
               ck+=r*d+((d*(d-1ll))/2ll)*p;//sabne plush pichone joto golo divisor ache
               p*=temp;
           }
           ck++;
           //ans1+=ck; ekta factorial er divisor ber kora
           ans=((ans% 100000007 )*(ck% 100000007 )) %100000007 ;
       }
       printf("%lld\n",ans);
   }



 /************ALEYA YOUSUF ************/


 /************ALLAH IS ALMIGHTY ************/
return 0;

}
