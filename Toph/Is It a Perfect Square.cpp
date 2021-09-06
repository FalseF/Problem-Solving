
      /*########  IN THE NAME OF ALLHA   ##########*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 104
#define nl cout<<endl
ll primefactor[102];
ll power[105];
bool A[MAX+100]={0};
ll primes[104];
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
      if(N%primes[i]==0)
      {
         Count++;
      }

      while(N%primes[i]==0)
      {
         power[Count-1]++;

         N=N/primes[i];
      }
   }

   if(N!=1)
   {
      power[Count]++;

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

   cin>>T;
   while(T--)
   {

      cin>>N;
      ll ar[N+5];
      memset(power,0,sizeof(power));
      ck=0;

      for(i=1;i<=N;i++)
      {
          cin>>ar[i];
      }
      for(i=1;i<=N;i++)
      {
        ll f=Primefactor(ar[i]);
        ck=max(ck,f);
      }
      ll nul=0;
      for(i=0;i<ck;i++)
      {
          if(power[i]%2) {cout<<"NO"<<endl;nul=1;break;}
      }


      if(nul==0) cout<<"YES"<<endl;

   }
       /************ALEYA YOUSUF ************/
   return 0;
}

