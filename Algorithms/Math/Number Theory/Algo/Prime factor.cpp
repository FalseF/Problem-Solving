
      /*########  IN THE NAME OF ALLHA   ##########*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 10000000
#define nl cout<<endl
ll primefactor[100002];
ll power[100005];
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
ll value;
ll Primefactor(ll N)
{
   ll Count=0;

   ll mx=0;

   for(ll i=1;i<=MAX && primes[i]*primes[i]<=N;i++)
   {
      Count=0;

      while(N%primes[i]==0)
      {
         Count++;

         N=N/primes[i];
      }
      if(Count>=mx)
      {
          mx=Count;
          value=primes[i];
      }
   }

   if(N!=1)
   {
      primefactor[Count]=N;

      power[Count]++;
      Count++;
      if(mx==0) mx=1;

   }

    return mx;

}

int main()
{
   ll T,N,E,u,v,i,j,k,C=0,sum=0,ck=0,x,y;
   string S,S1;
   double d1,d2,d3;

   sieve();

   cin>>T;
   while(T--)
   {
       cin>>N;

   ll Count=Primefactor(N);
   if(Count<=1)
   {
       cout<<1<<endl;
       cout<<N<<endl;
       continue;
   }
   cout<<Count<<endl;
   for(ll i=1;i<=Count-1;i++)
   {
       cout<<value<<" ";
   }

   ll ck1=pow(value,Count-1);
   ll ck2=N/ck1;
   cout<<ck2<<endl;
   }

       /************ALEYA YOUSUF ************/
   return 0;
}

