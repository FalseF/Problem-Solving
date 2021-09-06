
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
ll N,M;
ll ar[100005];
ll dp[10004][102];
ll fun(ll i, ll sum)
{
    if(i==N && sum==0)
    {
        return 1;
    }
    if(i>=N) return 0;
    if(dp[i][sum]!=-1) return dp[i][sum];
     ll ck=(sum+ar[i])%M;
     ll ck1=(sum-ar[i])%M;
     if(ck<0) ck+=M;
     if(ck1<0) ck1+=M;
     return dp[i][sum]=max(fun(i+1,ck),fun(i+1,ck1));
    //return dp[i][sum]=max((fun(i+1,(sum+ar[i]+ck*M)%M)) , (fun(i+1,(sum-ar[i]+ck*M)%M)));
}
int main()
{
   ll T,E,u,Q,v,i,j,k,sum=0,ck=0,x,y,cs=0;

   string S,S1;

   double d1,d2,d3;
    sf1(T);
    while(T--)
    {
        memset(dp,-1,sizeof(dp));
        sf2(N,M);
        for(i=0;i<N;i++) sf1(ar[i]);
        if(fun(0,0)) printf("Divisible\n");
        else printf("Not divisible\n");
    }

 /************ALEYA YOUSUF ************/


 /************ALLAH IS ALMIGHTY ************/
return 0;

}
