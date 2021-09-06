/*########  IN THE NAME OF AintAH   ##########*/

#pragma GCC diagnostic ignored "-Wunused-variable"
#pragma GCC diagnostic ignored "-Wunused-parameter" 
#include<bits/stdc++.h>
using namespace std;
#pragma GCC diagnostic ignored "-Wunused-but-set-variable" 
#pragma GCC diagnostic ignored "-Wformat"
#define ll long long
#define INF 999999999999999999
#define nl printf("\n")
#define  r0 return 0
#define  r1 return 1
#define sf1(x)  scanf("%d",&x)
#define sf2(x,y)  scanf("%d %d",&x,&y)
#define sf3(x,y,z)  scanf("%d %d %d",&x,&y,&z)
#define pf1(x)  printf("%d\n",x)
#define pf2(x,y)  printf("%d %d\n",x,y)
#define pf3(x,y,z)  printf("%d %d %d\n",x,y,z)
#define yes  printf("YES\n")
#define no  printf("NO\n")
#define pc(x,y)  printf("Case %d: %d\n",x,y)
#define pcn(x,y)  printf("Case %d:\n",x)
#define pb push_back
#define mp make_pair
#define pa pair<int,int>
#define mem(a,b) memset(a,b,sizeof(a))
#define MIN  -99999999999999999
#define READ(f) freopen(f,"r",stdin)
#define WRITE(f) freopen(f,"w",stdout)
#define pi 2.0*acos(0.0)
#define vs(v) (v.begin(),v.end())
int power(int B,int P){ if(P==0) return 1; int X=power(B,P/2); if(P%2==0) return X*X; else return B*X*X;}
int fx[]={1,-1,0,0}; int fy[]={0,0,1,-1};
const ll MOD = 1e9+7;
int main()
{
    ll n;
    cin>>n;  
     ll sq=sqrt(n);
    ll ans=0;
     for(ll i=1;i<=sq;i++)
     {
     	ll j=n/i;
     	ll ck1=j;
     	ll x=j+1;
     	if(j%2==0) j/=2;
     	else x/=2;
     	x%=MOD;
     	j%=MOD;
     	ck1%=MOD;
     	ll ck=(j*x)%MOD;
     	ll ck2=(ck1-sq)%MOD;
     	ck2=(ck2*i)%MOD;
     	ans=(ans%MOD+ck+ck2)%MOD;
     	
     } 
     cout<<ans<<endl;
   
   /************ALEYA YOUSUF ************/

 /************AintAH IS ALMIGHTY ************/
return 0;
 
}