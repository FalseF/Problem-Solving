
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

ll A[300005];
ll N,E;
ll check(ll v)
{
    cout<<v<<endl;
    ll pre=A[1];
    ll cnt=1;
    for(ll i=2;i<=N;i++)
    {
        if((A[i]-pre)>=v)
        {
            pre=A[i];
            cnt++;
        }
        if(cnt==E) return 1;
    }
    return 0;
}
ll fun()
{
    ll l=0,mx=-1,r=A[N];
    while(l<r)
    {
        ll mid=(l+r)/2;
        if(check(mid)==1)
        {
            mx=max(mx,mid);
            l=mid+1;
        }
        else r=mid;
    }
    return mx;
}
int main()
{
   ll T,u,Q,v,i,j,k,sum=0,ck=0,x,y,cs=0;

   string S,S1;

   double d1,d2,d3;
   sf1(T);
   while(T--)
   {
       sf2(N,E);
       for(i=1;i<=N;i++)
        sf1(A[i]);
       sort(A+1,A+N+1);
        ck=fun();
        pf1(ck);

   }



 /************ALEYA YOUSUF ************/


 /************ALLAH IS ALMIGHTY ************/
return 0;

}
