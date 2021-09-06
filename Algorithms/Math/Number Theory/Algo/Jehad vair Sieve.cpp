boo A[MAX+100];
vector<ll>primes;
void sieve()
{
   primes.pb(2);

   for(ll i=2;i<=MAX;i=i+2)
   {
      A[i]=1;
   }

   for(ll i=3;i<=MAX;i=i+2)
   {

      if(A[i]==0)
      {
         primes.pb(i);

         for(ll j=i*2;j<=MAX;j=j+i)
         {
            A[j]=1;
         }
      }
   }
}

