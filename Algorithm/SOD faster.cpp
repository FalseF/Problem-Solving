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
            pfactor[Count]=primes[i];
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
        pfactor[Count]=N;
        power[Count]=1;
        Count++;
    }
    pfactor_size=Count;
}

int SOD(int N)
{
    int s=1;
    double sum=1;
    for(int i=0;i<pfactor_size;i++)
    {
        sum=sum*((pow((double)pfactor[i],(double)power[i]+1)-1)/(pfactor[i]-1));
    }
    return (int)sum;
}


int main()
{
    sieve();
    int N;
    cin>>N;
    prime_factor(N);
    for(int i=0;i<pfactor_size;i++)
        cout<<pfactor[i]<<" "<<power[i]<<endl;
    cout<<SOD(N)<<endl;

}
