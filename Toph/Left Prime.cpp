
#include <bits/stdc++.h>
using namespace std;
#define MAX 10000007
typedef long long ll;
bool A[MAX+100]={0};
vector<ll>primes;
void sieve()
{
      ll ck=1;
       primes.push_back(2);
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
                primes.push_back(i);
            }
        }
}

int main()
{
    ll N,T;
    sieve();
    cin>>T;
    while(T--)
    {
        cin>>N;
        if(N==1) {cout<<"0"<<endl;continue;}
        ll ck=lower_bound(primes.begin(),primes.end(),N)-primes.begin();
        cout<<ck<<endl;
    }
}

