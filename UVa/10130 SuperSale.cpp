
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

ll ar1[1005],ar2[1005],N,parbe;
ll ans[1002][50];
ll knapsack(ll i, ll w)
{
    ll p1=0,p2=0;
    if(i>=N) return 0;
    if(ans[i][w]!=-1) return ans[i][w];
    if(w+ar2[i]<=parbe)
    {
         p1=ar1[i]+knapsack(i+1,w+ar2[i]);
    }
    p2=knapsack(i+1,w);
    ans[i][w]=max(p1,p2);
    return ans[i][w];
}


int main()
{
    WRITE("1.txt");
   ll T,E,u,v,i,j,k,sum=0,ck=0,x,y;

   string S,S1;

   double d1,d2,d3;

   sf1(T);
   while(T--)
   {
       sf1(N);
       for(i=0;i<N;i++)
       {
           sf2(ar1[i],ar2[i]);
       }
       sf1(E);
       ll result=0;
       //memset(ans,-1,sizeof(ans));
       while(E--)
       {
           sf1(u);
           memset(ans,-1,sizeof(ans));
           parbe=u;
           result+=knapsack(0,0);
           //cout<<result<<endl;
       }
       pf1(result);
   }
 /************ALEYA YOUSUF ************/


 /************ALLAH IS ALMIGHTY ************/
return 0;

}
