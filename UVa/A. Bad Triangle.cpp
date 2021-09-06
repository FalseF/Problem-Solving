
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
ll max(ll a,ll b) {if(a>b) return a; else return b;} ll min(ll a,ll b) {if(a<b) return a; else return b;}
ll power(ll B,ll P){ if(P==0) return 1; ll X=power(B,P/2); if(P%2==0) return X*X; else return B*X*X;}


int main()
{
   ll T,N,E,u,Q,v,i,j,k,sum=0,ck=0,x,y,cs=0;

   string S,S1;

   double d1,d2,d3;
   ll R,G,B;
   vector<ll>vc1,vc2,vc3;
   cin>>R>>G>>B;
   for(i=1;i<=R;i++)
   {
       cin>>u;
       vc1.pb(u);
   }
   for(i=1;i<=G;i++)
   {
       cin>>u;
       vc2.pb(u);
   }
   for(i=1;i<=B;i++)
   {
       cin>>u;
       vc3.pb(u);
   }
   sort(vc1.begin(),vc1.end());
   reverse(vc1.begin(),vc1.end());
   sort(vc2.begin(),vc2.end());
   reverse(vc2.begin(),vc2.end());
   sort(vc3.begin(),vc3.end());
   reverse(vc3.begin(),vc3.end());
   ll ck1=0,ck2=0,ck3=0;
   ll l1=vc1.size();
   ll l2=vc2.size();
   ll l3=vc3.size();
   for(i=1;i<=10;i++) {vc1.pb(0);vc2.pb(0);vc3.pb(0);}
   ll ans=0;
   while(1)
   {
       ll n1=vc1[ck1];
       ll n2=vc2[ck2];
       ll n3=vc3[ck3];
       if(n1>=n3 && n2>=n3 && ck1<l1 && ck2<l2)
       {
           ans+=(n1*n2);
           ck1++;
           ck2++;
           //cout<<"1"<<endl;
       }
       else if(n2>=n1 && n3>=n1 && ck2<l2 && ck3<l3)
       {
           ans+=(n3*n2);
           ck3++;
           ck2++;
           // cout<<"2"<<endl;
       }
       else if(n3>=n2&& n1>=n2 && ck1<l1 && ck3<l3)
       {
           ans+=(n1*n3);
           ck3++;
           ck1++;
            ///cout<<"3"<<endl;
       }
       else break;

   }
   cout<<ans<<endl;



 /************ALEYA YOUSUF ************/


 /************ALLAH IS ALMIGHTY ************/
return 0;

}
