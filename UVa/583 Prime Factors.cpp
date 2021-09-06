



      /*########  IN THE NAME OF ALLHA   ##########*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define WRITE(f) freopen(f,"w",stdout)
#define nl cout<<endl
#define MAX 1000000
ll primefactor[MAX+1];
ll power[MAX+1];
bool A[MAX+100]={0};
ll primes[MAX+1];
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
   for(ll i=1;primes[i]*primes[i]<=N;i++)
   {
      if(N%primes[i]==0)
      {
         primefactor[Count]=primes[i];
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
      primefactor[Count]=N;

      power[Count]++;

      Count++;

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
       ll n1=N;
       if(N<0) n1=N*-1;
       ll Count=Primefactor(n1);
     cout<<N<<" = ";
     ll n3=0;
     if(N<0) cout<<"-1 x ";
    for(i=0;i<Count;i++)
       {
          ll ck=power[i];
          power[i]=0;
          ll n2=primefactor[i];
          primefactor[i]=0;
          for(j=1;j<=ck;j++)
          {
              if(n3>0) cout<<" x "<<n2;
              else cout<<n2;
              n3++;
          }
       }
       cout<<endl;
   }

       /************ALEYA YOUSUF ************/
   return 0;
}

