
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
ll fx[]={1,-1,0,0}; ll fy[]={0,0,1,-1};

ll ar[3000005],B[3000005],C[3000005],visited[3000005],level[3000005];
char CH[1000][1000];
vector<ll>V,G;
ll N;
bool fun(ll k)
{
    for(ll i=1;i<=N;i++)
    {
        if(ar[i]-ar[i-1]==k) k--;
        else if(ar[i]-ar[i-1]>k) {
            return false;
        }
    }
    return true;
}
ll solve()
{
    ll l=1,r=10000000,ans=0;
    while(l<=r)
    {
        ll mid=(l+r)/2;
        bool ck=fun(mid);
        if(ck)
        {
            ans=mid;
            r=mid-1;
        }
        else
        {
            l=mid+1;
        }
    }
    return ans;
}
int main()
{
    //WRITE("1.txt");
   ll T,E,u,Q,v,i,j,k,sum=0,ck=0,x,y,cs=0;
   string S,S1;

   double d1,d2,d3;

   cin>>T;
   while(T--)
   {
       cin>>N;
       ll cnt=0;
       ar[0]={0};
       for(i=1;i<=N;i++)
       {
           cin>>ar[i];
       }
       ll ans=solve();
       cs++;

       cout<<"Case "<<cs<<": "<<ans<<endl;

   }
 /************ALEYA YOUSUF ************/


 /************ALLAH IS ALMIGHTY ************/
return 0;

}
