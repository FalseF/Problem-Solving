
      /*########  IN THE NAME OF ALLAH   ##########*/

#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
bool pck[100000000+100]={0};
ll primes[100000004];
ll ck=1;
void sieve()
{
       primes[ck]=2;
       for(ll i=3; i*i<=100000000; i+=2)
        {
            if(!pck[i])
            {
                for(ll j=i*i; j<=100000000; j+=i*2)
                {
                    pck[j]=1;
                }
            }
        }

        for(ll i=3;i<=100000000;i+=2)
        {
            if(!pck[i])
            {
                ck++;
                primes[ck]=i;
            }
        }
}


ll bigmode(ll b, ll p, ll m)
{
    if(p==0) return 1;
    else if(p%2==0)
    {
        ll r=bigmode(b,p/2,m);
        return ((r%m)*(r%m))%m;
    }
    else
    {
        ll r=bigmode(b,p-1,m);
        return ((r%m)*(b%m))%m;
    }
}
ll M=1000000007;
ll fun(ll N, ll p)
{
    ll ans=1;
    for(ll i=1;i<=ck && primes[i]*primes[i]<=N;i++)
    {
        if(N%primes[i]) continue;
        ll cnt=0,pw=1;
        while(N%primes[i]==0)
        {
            N/=primes[i];
            cnt++;
            pw+=bigmode(primes[i],cnt*p,M);
        }

        ans=((ans%M)*(pw%M))%M;
    }
    if(N!=1)
    {
        ll ck1=(1+bigmode(N,p,M))%M;
        ans=((ans%M)*(ck1%M))%M;
    }
    return ans%M;
}

int main()
{
   ll T,N,E,u,Q,v,i,j,k,sum=0,x,y,cs=0;
   sieve();

   string S,S1;

   double d1,d2,d3;
   cin>>T;
   while(T--)
   {
       cin>>N>>E;
       ll ans=fun(N,E);
       cout<<ans<<endl;
   }



 /************ALEYA YOUSUF ************/


 /************ALLAH IS ALMIGHTY ************/
return 0;

}
