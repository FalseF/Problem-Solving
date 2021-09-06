
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
ll ar[500005];
ll dp[203][12][22];
ll M,E,N,Cnt;
ll fun(ll id, ll cnt, ll sum)
{
    if(cnt==Cnt)
    {
        if(sum==0) return 1;
        else return 0;
    }
    if(id>=N) return 0;
    if(dp[id][cnt][sum]!=-1) return dp[id][cnt][sum];
    ll x=0,y=0;
    ll temp=ar[id]+sum;
    temp%=M;
    if(temp<0) temp+=M;
    x=fun(id+1,cnt+1,temp);
    y=fun(id+1,cnt,sum%M);
   dp[id][cnt][sum]=x+y;
   return dp[id][cnt][sum];
}


int main()
{
   ll T,u,Q,v,i,j,k,sum=0,ck=0,x,y,cs=0;

   string S,S1;

   double d1,d2,d3;
   while(cin>>N>>E)
   {
       if(N==0 && E==0) r0;
       for(i=0;i<N;i++) cin>>ar[i];
       cs++;
       cout<<"SET "<<cs<<":"<<endl;
       for(i=0;i<E;i++)
       {
           cin>>M>>Cnt;
           memset(dp,-1,sizeof(dp));
           cout<<"Query "<<i+1<<": "<<fun(0,0,0)<<endl;

       }
   }



 /************ALEYA YOUSUF ************/


 /************ALLAH IS ALMIGHTY ************/
return 0;

}
