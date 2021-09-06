
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
ll ar[100];
ll dp[(1<<16)+3][20];
ll M,base,L;
ll fun(ll mask, ll remr)
{
    if(mask==((1<<L)-1))
    {
        if(remr==0) return 1;
        else return 0;
    }
    if(dp[mask][remr]!=-1) return dp[mask][remr];
    ll cnt=0;
    for(ll i=0;i<L;i++)
    {
        if((mask&(1<<i))==0)
        {
            ll rem=(remr*base)+ar[i];
            cnt+=fun(mask|(1<<i),rem%M);
        }
    }
    return dp[mask][remr]=cnt;

}

int main()
{
   ll T,N,E,u,Q,v,i,j,k,sum=0,ck=0,x,y,cs=0;

   string S,S1;

   double d1,d2,d3;
   cin>>T;
   while(T--)
   {
       cin>>base>>M;
       cin>>S;
       cs++;
       for(i=0;i<S.length();i++)
       {
           if(S[i]>='A' && S[i]<='Z')
           {
               ar[i]=S[i]-'A'+10;
           }
           else ar[i]=S[i]-'0';
       }

       memset(dp,-1,sizeof(dp));
       L=S.length();
       ll ans=fun(0,0);
       cout<<"Case "<<cs<<": "<<ans<<endl;

   }



 /************ALEYA YOUSUF ************/


 /************ALLAH IS ALMIGHTY ************/
return 0;

}
