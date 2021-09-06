#include <bits/stdc++.h>
using namespace std;


#define MAX 100
vector<int> primes;
int prime[10000];
int A[MAX+100];
void sieve()
{
    primes.push_back(2);
    prime[2]=1;

    for(int i=2;i<=MAX;i+=2) A[i]=1;

    for(int i=3;i<=MAX;i+=2)
    {
        if(A[i]==0)
        {
            primes.push_back(i);
            prime[i]=1;
            for(int j=i*i;j<=MAX;j+= i*2) A[j]=1;
        }

    }
}

int main()
{
    sieve();
    for(int i=0;i<primes.size();i++) cout<<primes[i]<<endl;
}
