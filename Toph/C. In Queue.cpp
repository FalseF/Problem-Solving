
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
#define pc(x,y)  printf("Case %lld: %lld\n",x,y)
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
bool fun(pair<ll,ll> a, pair<ll,ll> b)
{
    if(a.first==b.first) return a.second<b.second;
    else return a.first>b.first;
}

int main()
{
   ll T,N,E,u,Q,v,n,i,j,k,sum=0,ck=0,x,y,cs=0;

   string S,S1;

   double d1,d2,d3;
   sf1(T);
   while(T--)
   {
       sf2(N,E);
       vector<pair<ll,ll> >vc;
       vector<ll>ans;
       for(i=1;i<=N;i++)
       {
           sf1(u);
           if(u>=E)
           {
               ans.pb(i);continue;
           }
           vc.pb(mp(u,i));
       }
       if(ans.size()>0)
       {
           for(i=0;i<ans.size();i++)
           {
               printf("%lld ",ans[i]);
           }
       }
       sort(vc.begin(),vc.end(),fun);

       //if(vc.size()>0) printf("%lld",vc[0].second);
       for(i=0;i<vc.size();i++)
       {
           printf("%lld ",vc[i].second);
       }
       nl;
   }



 /************ALEYA YOUSUF ************/


 /************ALLAH IS ALMIGHTY ************/
return 0;

}
