bool pck[10000000+100]={0};
ll primes[10000004],ck;
void sieve()
{
       ck=1;
       primes[ck]=2;
       for(ll i=3; i*i<=10000000; i+=2)
        {
            if(!pck[i])
            {
                for(ll j=i*i; j<=10000000; j+=i*2)
                {
                    pck[j]=1;
                }
            }
        }

        for(ll i=3;i<=10000000;i+=2)
        {
            if(!pck[i])
            {
                ck++;
                primes[ck]=i;
            }
        }
}