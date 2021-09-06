#include <bits/stdc++.h>
using namespace std;

#define MAX 1000

bool A[MAX];

int prime[MAX];

int length;

void sieve()
{
    int k=0;

    prime[k]=2;
    for(int i=2;i<=MAX;i+=2)
    {
        A[i]=1;
        //cout<<i<<" "<<A[i]<<endl;
    }
    k=1;

    for(int i=3;i<=MAX;i+=2)
    {
        if(A[i]==0)
        {
            prime[k++]=i;
            for(int j=i*2;j<=MAX;j+=i)
            {
                A[j]=1;
            }
        }
    }
    length=k;
}
int pdivisor[MAX];
int power[MAX];
int len;

void Prime_factor(int N)
{
    int Count=0;
    for(int i=0;i<length && prime[i]*prime[i]<=N;i++)
    {
//        if(N/prime[i]==0)
//            break;

        if(N%prime[i]==0)
        {
            pdivisor[Count]=prime[i];
            Count++;
        }
        while(N%prime[i]==0)
        {
            power[Count-1]++;
            N=N/prime[i];
        }
    }
    if(N!=1)
    {
        pdivisor[Count]=N;
        power[Count]=1;
        Count++;
    }
    len=Count;
}



int main()
{
    sieve();
    Prime_factor(100);
    for(int i=0;i<len;i++)
    {
        cout<<pdivisor[i]<<" "<<power[i]<<endl;
    }
}
