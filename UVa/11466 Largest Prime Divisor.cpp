
      /*########  IN THE NAME OF ALLHA   ##########*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 10000000
#define nl cout<<endl
#define WRITE(f) freopen(f,"w",stdout)
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
ll ck;
ll Primefactor(ll N)
{
   ll Count=-1;
   ck=0;
   for(ll i=1;i<=MAX && primes[i]*primes[i]<=N;i++)
   {
      if(N%primes[i]) continue;
      while(N%primes[i]==0)
      {

         N=N/primes[i];
      }
      ck++;
      Count=max(Count,primes[i]);
   }

   if(N!=1)
   {
       ck++;
      Count=max(Count,N);

   }
   return Count;

}

int main()
{
    WRITE("1.txt");
   ll T,N,E,u,v,i,j,k,C=0,sum=0,x,y;
   string S,S1;
   double d1,d2,d3;

   sieve();
  while(cin>>N)
  {
      if(N==0) return 0;
      if(N<0) N*=-1;
      ll ans=Primefactor(N);
      if(ck>1) cout<<ans<<endl;
      else cout<<"-1"<<endl;
  }


       /************ALEYA YOUSUF ************/
   return 0;
}

