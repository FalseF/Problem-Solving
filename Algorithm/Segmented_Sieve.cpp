
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
vector <ll> primes;
void sieve(ll N)
{
    bool num[N+3];

    primes.clear();

    primes.push_back(2);

    for(ll i=2;i<=N;i+=2)
        num[i]=1;
    for(ll i=3;i<=N;i+=2)
    {
        if(num[i]==0)
        {

                primes.push_back(i);

            for(ll j=i*2 ;j<=N;j+=i)
                num[j]=1;
        }
    }

}

void Segmented_sieve(ll low, ll high)
{
    ll limit=floor(sqrt(high))+1;

    sieve(limit);

    ll l=primes.size();

    ll n=high-low+1;


    bool ans[n+2];

    memset(ans,false,sizeof(ans));

    for(ll i=0;i<l;i++)
    {
        ll lolimt=floor(low/primes[i])*primes[i];

        if(lolimt<low)
        {
            lolimt+=primes[i];
        }
        if(lolimt==primes[i]) lolimt+=primes[i];

        for(ll j=lolimt;j<=high;j+=primes[i])
        {
            ans[j-low]=true;
        }

    }

    ll cnt=0;

    for(ll i=low;i<=high;i++)
    {
        if(!ans[i-low]) {cout<<i<<endl;cnt++;}
    }

    if(low==1) cnt--;

    cout<<"All Prime num "<<cnt<<endl;
}
int main()
{
    ll n,m,k,l,h;

    cin>>l>>h;

    Segmented_sieve(l,h);

}
