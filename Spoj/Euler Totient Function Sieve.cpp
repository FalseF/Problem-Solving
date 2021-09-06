
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
vector<ll>prime_num;

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
    for(ll i=low;i<=high;i++)
    {
        if(!ans[i-low]) {prime_num.push_back(i);}
    }


    //cout<<"All Prime num "<<cnt<<endl;

}
ll phi(ll val)
{
    ll res=val;
    ll ck=prime_num.size();
    for(ll i=0;i<ck && prime_num[i]*prime_num[i]<=val;i++)
    {
        if (val % prime_num[i] == 0) {
            res /= prime_num[i];
            res *= prime_num[i] - 1;
            while (val % prime_num[i] == 0) val /= prime_num[i];
            }

        if (val > 1) {
            res /= val;
            res *= val - 1;
        }
    }
    return res;
}
int main()
{

    ll T,u,v;
    scanf("%lld%lld",&u,&v);
   Segmented_sieve(u,v);
    for(ll i=u;i<=v;i++)
    {
        printf("%lld\n",phi(i));
    }
    //cout<<phi[3]<<" "<<phi[100000]<<endl;

}
