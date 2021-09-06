

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

ll dp1[1000][1000];
ll dp2[50][50][60];
ll L,l1,l2;
string S,S1;
ll fun1(ll i, ll j)
{
    if(i>=l1) return 0;
    if(j>=l2) return 0;
    if(dp1[i][j]!=-1) return dp1[i][j];
    //cout<<i<<" "<<j<<endl;
    ll cnt=0;
    if(S[i]==S1[j])
    {
        cnt=1+fun1(i+1,j+1);
    }
    else
    {
        cnt=max(fun1(i,j+1),fun1(i+1,j));

    }
    return dp1[i][j]=cnt;
}

ll fun2(ll i, ll j, ll l)
{
    //cout<<i<<" "<<j<<" "<<l<<endl;
    if(i>=l1)
    {
        l+=l2-j;
        if(L==l) return 1;
        else return 0;
    }
    if(j>=l2)
    {
        l+=l1-i;
        if(l==L) return 1;
        else return 0;
    }
    if(dp2[i][j][l]!=-1) return dp2[i][j][l];
    ll cnt=0;
   //cout<<i<<" "<<j<<" "<<l<<endl;

    if(S[i]==S1[j])
    {
        cnt=fun2(i+1,j+1,l+1);
    }
    else
    {
        cnt+=fun2(i+1,j,l+1);
        cnt+=fun2(i,j+1,l+1);
    }
    return dp2[i][j][l]=cnt;
}

int main()
{
   ll T,N,E,u,Q,v,i,j,k,sum=0,ck=0,x,y,cs=0;

   double d1,d2,d3;
   cin>>T;
   while(T--)
   {
       cin>>S>>S1;
       memset(dp1,-1,sizeof(dp1));
       cs++;
       l1=S.length();
       l2=S1.length();
       ck=fun1(0,0);
       L=l1+l2-ck;
       memset(dp2,-1,sizeof(dp2));
       ll ans=fun2(0,0,0);
       cout<<"Case "<<cs<<": "<<L<<" "<<ans<<endl;
   }



 /************ALEYA YOUSUF ************/


 /************ALLAH IS ALMIGHTY ************/
return 0;

}
