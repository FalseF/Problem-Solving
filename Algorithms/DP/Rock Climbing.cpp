
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
ll ar[1000][1000];
ll dp[1000][1000],r, c;

ll fun(ll i, ll j)
{
    if(i>=0 && j<c && i<r && j>=0)
    {
        if(dp[i][j]!=-1) return dp[i][j];
        ll ans=-MAX;
        ans=max(ans,(fun(i+1,j)+ar[i][j]));
        ans=max(ans,(fun(i+1,j-1)+ar[i][j]));
        ans=max(ans,(fun(i+1,j+1)+ar[i][j]));
        return dp[i][j]=ans;
    }
    else return 0;
}

int main()
{
   ll T,N,E,u,v,i,j,k,sum=0,ck=0,x,y;

   string S,S1;

   double d1,d2,d3;

   sf2(r,c);
   for(i=0;i<r;i++)
   {
       for(j=0;j<c;j++) sf1(ar[i][j]);
   }
   memset(dp,-1,sizeof(dp));
   ll ans=fun(0,0);
  printf("%lld\n",ans);




 /************ALEYA YOUSUF ************/


 /************ALLAH IS ALMIGHTY ************/
return 0;

}
