
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
#define pc(x)  printf("Case %lld: ",x)
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

ll A[300005],B[300005],C[300005],visited[300005],level[300005];

char CH[1000][1000],ch;

vector<ll>V;

vector<ll>G;
ll ar[4000][10],N;
ll dp[100][10];
ll fun(ll i, ll ck)
{
     ll p1=0,p2=0;
    if(i>=N) return 0;
    if(dp[i][ck]!=-1) return dp[i][ck];
    if(ck==0)
    {
        p1=ar[i][1]+fun(i+1,1);
        p2=ar[i][2]+fun(i+1,2);
    }
     else if(ck==1)
    {
        p1=ar[i][0]+fun(i+1,0);
        p2=ar[i][2]+fun(i+1,2);
    }
     else if(ck==2)
    {
        p1=ar[i][0]+fun(i+1,0);
        p2=ar[i][1]+fun(i+1,1);
    }

    dp[i][ck]= min(p1,p2);
    return dp[i][ck];
}

int main()
{
   ll T,E,u,v,i,j,k,sum=0,ck=0,x,y;

   string S,S1;

   double d1,d2,d3;
   sf1(T);
   while(T--)
   {

       ck++;
       sf1(N);
       for(i=0;i<N;i++)
       {
           for(j=0;j<3;j++)
            sf1(ar[i][j]);
       }
       ll ans=99999999999999;

       for(i=0;i<3;i++)
       {
           memset(dp,-1,sizeof(dp));
           ll tem=ar[0][i]+fun(1,i);
           cout<<tem<<endl;
           ans=min(ans,tem);
       }

       pc(ck);
       pf1(ans);
   }



 /************ALEYA YOUSUF ************/


 /************ALLAH IS ALMIGHTY ************/
return 0;

}
