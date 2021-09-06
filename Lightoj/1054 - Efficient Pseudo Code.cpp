
      /*########  IN THE NAME OF ALLAH   ##########*/

#include<bits/stdc++.h>
using namespace std;

#define MAX 10000000
#define ll long long
#define sf1(x)  scanf("%lld",&x)
#define sf2(x,y)  scanf("%lld %lld",&x,&y)
#define WRITE(f) freopen(f,"w",stdout)


ll max(ll a,ll b) {if(a>b) return a; else return b;} ll min(ll a,ll b) {if(a<b) return a; else return b;}
ll power(ll B,ll P){ if(P==0) return 1; ll X=power(B,P/2); if(P%2==0) return X*X; else return B*X*X;}
ll Bigmode(ll B, ll P)
{
    if(P==0) return 1;

    if(P==1) return B;
    if(P%2==0)
    {
        ll R=Bigmode(B,P/2);

        return ((R%1000000007)*(R%1000000007))%1000000007;
    }
    else
    {
        ll R=Bigmode(B,P-1);

        return ((R%1000000007)*(B%1000000007))%1000000007;
    }
}
ll fx[]={1,-1,0,0}; ll fy[]={0,0,1,-1};

vector <ll> primes;

bool A[MAX+100];

void sieve()
{
    primes.push_back(2);

    for(ll i=2;i<=MAX;i+=2)
        A[i]=1;A[2]=0;

    for(ll i=3;i<=MAX;i+=2)
    {
        if(A[i]==0)
        {
            primes.push_back(i);
            for(ll j=i*2 ;j<=MAX;j+=i)
                A[j]=1;
        }
    }

}

ll prime_factor(ll N,ll P)
{
    ll Count=0,C=0,sum=1,ans=1;
    for(ll i=0;primes[i]*primes[i]<=N;i++)
    {
        Count=0;

        while(N%primes[i]==0)
        {
            Count++;
            N=N/primes[i];
        }

        if(Count!=0)
        {

            ll value=(Bigmode(primes[i],(P*Count)+1)-1);

            sum=((sum%1000000007)*(value)%1000000007)%1000000007;
            ll value2=(Bigmode(primes[i]-1,1000000005));

            sum=((sum%1000000007)*(value2%1000000007))%1000000007;


        }

    }
    if(N!=1)
    {
        ll v=(Bigmode(N,P+1)-1);

        sum=((sum%1000000007)*(v%1000000007))%1000000007;

        ll v2=(Bigmode(N-1,1000000005));

        sum=((sum%1000000007)*(v2%1000000007))%1000000007;
    }

    return sum;

}


int main()
{
   // WRITE("output.txt");
    sieve();

    ll T,N,u,v,ci,j,k;

    sf1(T);

    for(ll i=1;i<=T;i++)
    {
        sf2(u,v);

        if(u==1000000007){printf("Case %lld: 1\n",i);continue;}

        ll ans=prime_factor(u,v);

        printf("Case %lld: %lld\n",i,ans);


    }




}
