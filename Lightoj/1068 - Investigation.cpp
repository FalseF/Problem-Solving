
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
ll k,len,l2;
string S;
ll dp[20][100][100][3];
ll fun(ll id, ll num, ll digit, ll temp)
{
    cout<<id<<" "<<num<<" "<<digit<<" "<<temp<<endl;
    if(len==id)
    {
        if(num%k==0 && digit%k==0) return 1;
        else return 0;
    }
    if(dp[id][num][digit][temp]!=-1) return dp[id][num][digit][temp];
    ll cnt=0;
    ll ch=S[id]-'0';
    for(ll i=0;i<10;i++)
    {
        if(temp==1 && i>ch) break;
        cnt+=fun(id+1,(num*10+i),(digit+i),i<ch?0:temp);
    }
    return dp[id][num][digit][temp]=cnt;

}
int main()
{
   ll T,N,E,u,Q,v,i,j,sum=0,ck=0,x,y,cs=0;

   cin>>T;
   while(T--)
   {
       cin>>u>>v>>k;
       memset(dp,-1,sizeof(dp));
       u--;
       S=to_string(u);
       len=S.length();
       //cout<<S<<endl;
       ll last=fun(0,0,0,1);
       S.clear();

//        S=to_string(v);
//       len=S.length();
//       //cout<<S<<endl;
//       memset(dp,-1,sizeof(dp));
//       ll first=fun(0,0,0,1);
//
//       ll ans=first-last;
ll ans=0;

       cout<<"Case "<<++cs<<": "<<ans<<endl;

   }



 /************ALEYA YOUSUF ************/


 /************ALLAH IS ALMIGHTY ************/
return 0;

}
