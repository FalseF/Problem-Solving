
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
ll ar[100000],ar1[100005];
int main()
{
   ll T,N,E,u,Q,v,i,j,k,sum=0,ck=0,x,y,cs=0;

   string S,S1;

   double d1,d2,d3;
   sf1(T);
   while(T--)
   {
       sf1(N);
       for(i=1;i<=N;i++)
       {
           sf2(ar[i],ar1[i]);

       }
       vector<ll>ans;
       for(i=1;i<=N;i++)
       {
           for(j=i+1;j<=N;j++)
           {
               ll x1=(ar[i]-ar[j])*(ar[i]-ar[j]);
               ll x2=(ar1[i]-ar1[j])*(ar1[i]-ar1[j]);
               ans.push_back(x1+x2);
           }
       }

       sort(ans.begin(),ans.end());
       ll sz=distance(ans.begin(), unique(ans.begin(), ans.end()));
       cs++;
       printf("Case %lld: %lld\n",cs,sz+1);


   }



 /************ALEYA YOUSUF ************/


 /************ALLAH IS ALMIGHTY ************/
return 0;

}
