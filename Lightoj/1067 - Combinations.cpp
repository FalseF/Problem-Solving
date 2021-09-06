
      /*########  IN THE NAME OF ALLAH   ##########*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
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

ll bigmode(ll B, ll P)
{
 if (P==1) return B;else if(P%2==0){ll R=bigmode(B,P/2);return (R*R)%1000003;}else {ll R=bigmode(B,P-1);return (R*B)%1000003;}
}

ll M[1000010];

int main()
{
   ll T,N,E,u,v,i,j,k,C=0,sum=0,ck=0,x,y;

   string S,S1;

   double d1,d2,d3;

   M[1]=1;

   M[0]=1;

   for(i=1;i<=1000000;i++)
   {
       M[i]=(i*M[i-1])%1000003;

   }

  sf1(T);

   for(i=1;i<=T;i++)
   {
     sf2(u,v);

       ll r=(M[u-v]*M[v])%1000003;

       ll B=bigmode(r,1000001);

       ll ans=(M[u]*B)%1000003;

       pc(i);cout<<" "<<ans<<endl;

   }



 /************ALEYA YOUSUF ************/


 /************ALLAH IS ALMIGHTY ************/
return 0;

}
