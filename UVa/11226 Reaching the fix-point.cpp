
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
#define pc(x)  printf("Case %lld :",x)
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
#define MAXP 1000000
vector <int> primes;
bool A[MAXP+100];
void sieve()
{
    primes.push_back(2);

    for(int i=2;i<=MAXP;i+=2)
        A[i]=1;
        A[2]=0;

    for(int i=3;i<=MAXP;i+=2)
    {
        if(A[i]==0)
        {
            primes.push_back(i);
            for(int j=i*2 ;j<=MAXP;j+=i)
                A[j]=1;
        }
    }

}
ll divisor[1000000];
ll SOD(ll N)
{
    ll sum=0;
    for(ll i=0;i<primes.size()&& primes[i]*primes[i]<=N;i++)
    {
        if(N%primes[i]) continue;
        while(N%primes[i]==0)
        {
            sum+=primes[i];
            N/=primes[i];
            if(N==0 || N==1) break;
        }
    }
    if(N!=1) sum+=N;
    return sum;
}
ll fuck[1000000];
int main()
{
    WRITE("1.txt");
    sieve();
   ll T,N,E,u,Q,v,i,j,k,sum=0,ck=0,x,y,cs=0;

   string S,S1;

   double d1,d2,d3;
    for(i=2;i<=500000;i++)
    {
        divisor[i]=SOD(i);
    }
    sf1(T);
    while(T--)
    {
        cs++;
        sf2(N,E);
        if(N>E) swap(N,E);
        ll ans=0;
        ck=0;
        for(i=N;i<=E;i++)
        {
            ck=1;
            ll ck1=divisor[i];
            if(divisor[i]==i){ ans=max(ans,1);continue;}
            while(ck1)
            {
                u=divisor[ck1];
                ck++;
                if(ck1==u) break;
                ck1=u;
            }
            //cout<<divisor[i]<<" "<<ck<<endl;
            ans=max(ans,ck);

        }
        printf("Case #%lld:\n%lld\n",cs,ans);

        //cout<<ans<<endl;
    }
 /************ALEYA YOUSUF ************/


 /************ALLAH IS ALMIGHTY ************/
return 0;

}
