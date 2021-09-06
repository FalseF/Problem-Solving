#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
vector <ll> primes;
#define MAX 100000

bool A[MAX+100];


ll c=1;

void sieve()
{

    primes.push_back(2);

    for(ll i=2;i<=MAX;i+=2)
        A[i]=1;
        A[2]=0;
    for(ll i=3;i<=MAX;i+=2)
    {
        if(A[i]==0)
        {
                c++;

                primes.push_back(i);

            for(ll j=i*2 ;j<=MAX;j+=i)
                A[j]=1;
        }
    }

}



int main()
{
    sieve();

    ll t,i,j,k;

    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>k;

        if(A[k]==0) cout<<"Yes"<<endl;else cout<<"No"<<endl;
    }



}

