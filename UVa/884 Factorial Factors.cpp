

      /*########  IN THE NAME OF ALLHA   ##########*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 1000000
#define nl cout<<endl
bool A[MAX+100]={0};
ll primes[10000004];
ll ans[1000005];
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

ll Primefactor(ll N)
{
   ll Count=0;

   for(ll i=1; primes[i]*primes[i]<=N;i++)
   {
      while(N%primes[i]==0)
      {
         Count++;

         N=N/primes[i];
      }
   }

   if(N!=1)
   {
      Count++;
   }

   return Count;

}

int main()
{
   ll T,N,E,u,v,i,j,k,C=0,sum=0,ck=0,x,y;
   string S,S1;
   double d1,d2,d3;

   sieve();
   for(i=2;i<=1000000;i++)
   {
       ans[i]=ans[i-1]+Primefactor(i);
   }

   while(cin>>N){
        cout<<ans[N]<<endl;
   }
       /************ALEYA YOUSUF ************/
   return 0;
}

