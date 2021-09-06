
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
ll ar[1000006];
int main()
{
   ll T,N,E,u,Q,v,i,j,k,sum=0,ck,x,y,cs=0;

   string S,S1;

   double d1,d2,d3;
   sf1(T);
   while(T--)
   {
       sf2(N,Q);
       cs++;
       ll ans=0;
       for(i=0;i<N;i++)
       {
           sf1(ar[i]);
           ans+=ar[i]*(N-i-1);
           ans-=ar[i]*i;
       }
       printf("Case %lld:\n",cs);
       while(Q--)
       {
           sf1(ck);
           if(ck==1)
           {
               pf1(ans);
           }
           else
           {
               sf2(u,v);
               ans+=(v*(N-u-1));
               ans-=(u*v);
               ans-=ar[u]*(N-u-1);
               ans+=(ar[u]*u);
               ar[u]=v;
           }

           //cout<<ans<<endl;
       }


   }



 /************ALEYA YOUSUF ************/


 /************ALLAH IS ALMIGHTY ************/
return 0;

}
