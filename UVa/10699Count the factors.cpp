
      /*########  IN THE NAME OF ALLAH   ##########*/

#include<bits/stdc++.h>
using namespace std;
#define ll int
#define MAX 999999999999999999
#define nl printf("\n")
#define  r0 return 0
#define  r1 return 1
#define sf1(x)  scanf("%lld",&x)
#define sf2(x,y)  scanf("%lld %lld",&x,&y)
#define sf3(x,y,z)  scanf("%lld %lld %lld",&x,&y,&z)
#define pf1(x)  printf("%lld\n",x)
#define pf2(x,y)  printf("%lld %lld\n",x,y)
#define WRITE(f) freopen(f,"w",stdout)
#define pi 2.0*acos(0.0)
#define sp printf(" ")
bool pck[1000+100]={0};
ll primes[1004];
void sieve()
{
      ll ck=1;
       primes[ck]=2;
       for(ll i=3; i*i<=1003; i+=2)
        {
            if(!pck[i])
            {
                for(ll j=i*i; j<=1003; j+=i*2)
                {
                    pck[j]=1;
                }
            }
        }

        for(ll i=3;i<=1003;i+=2)
        {
            if(!pck[i])
            {
                ck++;
                primes[ck]=i;
            }
        }
}
ll NOD(ll N)
{
    ll ans=0;
    for(ll i=1;primes[i]*primes[i]<=N;i++)
    {
        if(N%primes[i]) continue;
        ans++;
        while(N%primes[i]==0)
        {
            N/=primes[i];
        }
    }
    if(N!=1) ans++;
    return ans;
}

int main()
{
    //WRITE("1.txt");
    sieve();
   ll T,N,E,u,Q,v,i,j,k,sum=0,x,y,cs=0;

   string S,S1;

   double d1,d2,d3;
  while(cin>>N)
  {
      if(N==0) return 0;
  ll ans=NOD(N);
  cout<<N<<" : "<<ans<<endl;
  }



 /************ALEYA YOUSUF ************/


 /************ALLAH IS ALMIGHTY ************/
return 0;

}
