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
vector<ll>V,G;
ll dp[101][101][1001],taka,N;
ll numberof_coin[1001],value[1001];
set<ll>st;
ll fun(ll i, ll takeni, ll make)
{
    ll p1=0,p2=0;
    if(make>=1 && make<=taka)
    {
        st.insert(make);
    }
    if(i>N || make>taka) return 0;
    if(dp[i][takeni][make]!=-1) return dp[i][takeni][make];
    if(takeni>0)
    {
        p1=fun(i,takeni-1,make+value[i]);

    }
    p2=fun(i+1,numberof_coin[i+1],make);
    dp[i][takeni][make]=p1+p2;
    return dp[i][takeni][make];
}
int main()
{
   ll T,E,u,Q,v,i,j,k,sum=0,ck=0,x,y,cs=0;

   string S,S1;

   double d1,d2,d3;
   cin>>T;
   while(T--)
   {
       cs++;
       cin>>N>>E;
       taka=E;
       st.clear();
       memset(dp,-1,sizeof(dp));
       for(i=1;i<=N;i++)
       {
           cin>>value[i];
       }
       for(i=1;i<=N;i++)
       {
           cin>>numberof_coin[i];
       }

       ll ans=fun(1,numberof_coin[1],0);
       cout<<"Case "<<cs<<": "<<st.size()<<endl;
   }



 /************ALEYA YOUSUF ************/


 /************ALLAH IS ALMIGHTY ************/
return 0;

}
