#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
vector <ll> primes;
#define MAXP 10000

bool num[MAXP+100];

void sieve()
{

    primes.push_back(2);

    for(ll i=2;i<=MAXP;i+=2)
        num[i]=1;
    for(ll i=3;i<=MAXP;i+=2)
    {
        if(num[i]==0)
        {

                primes.push_back(i);

            for(ll j=i*2 ;j<=MAXP;j+=i)
                num[j]=1;
        }
    }

}



int main()
{
    sieve();
    ll T,N;
    cin>>T;
    while(T--)
    {
        cin>>N;
        ll ans=lower_bound(primes.begin(),primes.end(),N)-primes.begin();
        cout<<primes[ans-1]<<" ";
        for(ll i=ans;i<=100;i++)
        {
            if(primes[i]>N){cout<<primes[i]<<endl;break;}
        }
    }

//    for(int i=0;i<primes.size();i++)
//    {
//        cout<<primes[i]<<",";
//    }



}

