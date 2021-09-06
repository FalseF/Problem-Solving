#include <bits/stdc++.h>
using namespace std;
const int  maxn = 10000000;
bool A[maxn+100]={0};
vector<int>primes;
void sieve()
{
       primes.push_back(2);
       for(int i=3; i*i<=maxn; i+=2)
        {
            if(!A[i])
            {
                for(int j=i*i; j<=maxn; j+=i*2)
                {
                    A[j]=1;
                  
                }
            }
        }

        for(int i=3;i<=maxn;i+=2)
        {
            if(!A[i])
            {
                primes.push_back(i);
            }
        }
}
int main()
{
	sieve();
	cout<<primes.size()<<endl;
}

