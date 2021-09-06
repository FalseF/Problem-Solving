
      /*########  IN THE NAME OF ALLAH   ##########*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 999999999999999999
#define nl printf("\n")
#define  r0 return 0
#define  r1 return 1
#define sf1(x)  scanf("%lld",&x)
#define sf2(x,y)  scanf("%lld %lld",&x,&y)
#define sf3(x,y,z)  scanf("%lld %lld %lld",&x,&y,&z)
#define pf1(x)  printf("%lld\n",x)
#define pf2(x,y)  printf("%lld %lld\n",x,y)
#define pf3(x,y,z)  printf("%lld %lld %lld\n",x,y,z)
#define yes  printf("YES\n")
#define no  printf("NO\n")
#define pc(x,y)  printf("Case %lld: %lld\n",x,y)
#define pb push_back
#define mp make_pair
#define pa pair<ll,ll>
#define mem(a,b) memset(a,b,sizeof(a))
#define MIN  -99999999999999999
#define READ(f) freopen(f,"r",stdin)
#define WRITE(f) freopen(f,"w",stdout)
#define pi 2.0*acos(0.0)
#define sp printf(" ")
#define vs(v) (v.begin(),v.end())
ll max(ll a,ll b) {if(a>b) return a; else return b;} ll min(ll a,ll b) {if(a<b) return a; else return b;}
ll power(ll B,ll P){ if(P==0) return 1; ll X=power(B,P/2); if(P%2==0) return X*X; else return B*X*X;}
ll fx[]={1,-1,0,0}; ll fy[]={0,0,1,-1};

ll A[3000005],B[3000005],visited[3000005],level[3000005];
char CH[1000][1000];
vector<ll>V,G;
bool pck[10000000+100]={0};
ll primes[10000004],ck;
ll prime_ck[10000004];
void sieve()
{
       ck=1;
       primes[ck]=2;
       prime_ck[2]=1;
       for(ll i=3; i*i<=1000000; i+=2)
        {
            if(!pck[i])
            {
                for(ll j=i*i; j<=1000000; j+=i*2)
                {
                    pck[j]=1;
                }
            }
        }

        for(ll i=3;i<=1000000;i+=2)
        {
            if(!pck[i])
            {
                prime_ck[i]=1;
                ck++;
                primes[ck]=i;
            }
        }
}

ll fun(ll N)
{
    if(prime_ck[N]==1) return 0;
    for(ll i=1;i<=ck && primes[i]*primes[i]<=N;i++)
    {
        if(N%primes[i]==0)
        {
            ll ck1=N/primes[i];
            if(prime_ck[ck1]==1) return 1;
        }
    }
    return 0;

}
int main()
{
    sieve();
   ll T,N,E,u,Q,v,n,i,j,k,sum=0,x,y,cs=0;
    while(cin>>N){
        ll ar[N+5];
        for(i=1;i<=N;i++) cin>>ar[i];
        ll ans=0;
        for(i=1;i<=N;i++)
        {
            ans+=fun(ar[i]);
        }

        cout<<ans<<endl;
    }

 /************ALEYA YOUSUF ************/


 /************ALLAH IS ALMIGHTY ************/
return 0;

}
