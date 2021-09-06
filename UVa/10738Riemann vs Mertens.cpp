
      /*########  IN THE NAME OF ALLAH   ##########*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define WRITE(f) freopen(f,"w",stdout)
bool pck[1000000+100]={0};
ll ck,primes[1000004],prime_ck[1000005];
void sieve()
{
      ck=1;
       primes[ck]=2;
       prime_ck[2]=1;
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
                prime_ck[i]=1;
                ck++;
                primes[ck]=i;
            }
        }
}
map<ll,pair<ll,ll> >ans;
ll fun(ll N)
{
    ll fk=0;
    for(ll i=1;primes[i]*primes[i]<=N;i++)
    {
        ll cnt=0;
        if(N%primes[i]) continue;
        while(N%primes[i]==0)
        {
            N/=primes[i];
            cnt++;
            fk++;
        }

        if(cnt>1) return 0;
    }
    if(N!=1)
    {
        fk++;
    }
    if(fk%2==0) return 1;
    return 100;
}
int main()
{
    sieve();
   ll T,N,E,u,Q,v,i,j,k,sum=0,x,y,cs=0;

   string S,S1;
   double d1,d2,d3;

   ans[1]={1,1};
   ans[2]={-1,0};
   for(i=3;i<=1000000;i++)
   {
       ll n1=ans[i-1].second;
       if(prime_ck[i]==1)
       {

           ans[i]={-1,n1-1};
           //continue;
       }
           else{
               ll num=fun(i);
               if(num==1)
               {
                   ans[i]={1,n1+1};
               }
               else if(num==0){
                ans[i]={0,n1};
               }
               else
               {
                   ans[i]={-1,n1-1};
               }
       }
   }

   while(cin>>N)
   {
       if(N==0) return 0;
       ll n1=ans[N].first;
       ll n2=ans[N].second;
       printf("%8lld%8lld%8lld\n",N,n1,n2);
   }




 /************ALEYA YOUSUF ************/


 /************ALLAH IS ALMIGHTY ************/
return 0;

}
