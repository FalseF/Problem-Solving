#include <bits/stdc++.h>
using namespace std;
#define MAX 1000
vector <int> primes;

bool A[MAX+100];

void sieve()
{
    primes.push_back(2);

    for(int i=2;i<=MAX;i+=2)
        A[i]=1;

    for(int i=3;i<=MAX;i+=2)
    {
        if(A[i]==0)
        {
            primes.push_back(i);
            for(int j=i*2 ;j<=MAX;j+=i)
                A[j]=1;
        }
    }

}

int pfactor[MAX];
int power[MAX];
int pfactor_size;

void prime_factor(int N)
{
    int Count=0;
    for(int i=0;i<=MAX && primes[i]*primes[i]<=N;i++)
    {
        if(N%primes[i]==0)
        {
            pfactor[Count]=primes[i]; ///je prime dia vag kora jabe take array te save kore rakhbo.
            Count++;
        }
        while(N%primes[i]==0) ///oi prime diya koto bar vag kora jay toto power hobe.
        {
            power[Count-1]++;
            N=N/primes[i];
        }

    }
    if(N!=1)
    {
        pfactor[Count]=N;
        power[Count]=1;
        Count++;
    }
    pfactor_size=Count;
}



int main()
{
    sieve();
    int N;
    cin>>N;
    prime_factor(N);

}
