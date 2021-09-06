#include <bits/stdc++.h>
using namespace std;
#define MAX 20000000
typedef long long ll;
bool A[MAX+10]={0};
vector<pair<ll,ll>>primes;
void sieve()
{
      ll ck=0;
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
                ll ck1=i+2;
                if(!A[ck1]) {primes.push_back(make_pair(i,i+2));}
            }
        }
}

int main()
{
    sieve();
    int N;
    while(cin>>N)
    {
        cout<<"("<<primes[N-1].first<<", "<<primes[N-1].second<<")"<<endl;
    }
   // for(int i=0;i<10;i++) cout<<primes[i].first<<" "<<primes[i].second<<endl;
}
