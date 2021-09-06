
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
ll fact[2000005];
ll mod=1000000007;
void fun()
{
    fact[0]=1;
    for(ll i=1;i<=2000000;i++)
    {
        fact[i]=(fact[i-1]*i)%mod;
    }
}


ll bigmode(ll b, ll p, ll m)
{
    if(p==0) return 1;
    else if(p%2==0)
    {
        ll r=bigmode(b,p/2,m);
        return ((r%m)*(r%m))%m;
    }
    else
    {
        ll r=bigmode(b,p-1,m);
        return ((r%m)*(b%m))%m;
    }
}







int main()
{
   ll T,N,E,u,r,Q,v,i,j,k,sum=0,ck=0,x,y,cs=0;

   string S,S1;

   double d1,d2,d3;
   fun();
   cin>>T;
   while(T--)
   {
       cin>>N>>r;
       ll ans1=fact[N+r-1];
       ll ans2=bigmode(fact[N]*fact[r-1],mod-2,mod);
       ll ans=(ans1*ans2)%mod;
       cs++;
       printf("Case %lld: %lld\n",cs,ans);
   }



 /************ALEYA YOUSUF ************/


 /************ALLAH IS ALMIGHTY ************/
return 0;

}
