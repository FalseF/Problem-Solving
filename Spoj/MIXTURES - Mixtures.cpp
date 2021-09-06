
      /*########  IN THE NAME OF ALLAH   ##########*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 999999999999999999
#define nl cout<<endl
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
#define pc(x)  printf("Case %lld:",x)
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

//ll A[300005],B[300005],C[300005],visited[300005],level[300005];

char CH[1000][1000],ch;

vector<ll>V;

vector<ll>G;
ll visited[102][102],ar[1000005],dp[102][102];
ll sum(ll b, ll e)
{
    ll s=0;
    for(ll i=b;i<=e;i++)
    {
        s+=ar[i];
        s%=100;
    }
    return s;
}
ll fun(ll b,ll e)
{
    if(b>=e) return 0;
    if(visited[b][e]==1) return dp[b][e];
    ll ans=9999999999;
    for(ll mid=b;mid<e;mid++)
    {
        ll left=fun(b,mid);
        ll right=fun(mid+1,e);
        ll ck=left+right + sum(b,mid)*sum(mid+1,e);
        ans=min(ans,ck);

        //cout<<ans<<endl;
    }



    visited[b][e]=1;
    dp[b][e]=ans;
    return dp[b][e];
}

int main()
{
   ll T,N,E,u,v,i,j,k,sum=0,ck=0,x,y;

   string S,S1;

   double d1,d2,d3;
   while(scanf("%lld",&N)!=EOF)
   {
       for(i=1;i<=N;i++)
       {
           for(j=1;j<=N;j++) {dp[i][j]=-1;visited[i][j]=0;}
       }
       for(i=1;i<=N;i++) sf1(ar[i]);
       ll ans=fun(1,N);
       pf1(ans);
   }



 /************ALEYA YOUSUF ************/


 /************ALLAH IS ALMIGHTY ************/
return 0;

}
