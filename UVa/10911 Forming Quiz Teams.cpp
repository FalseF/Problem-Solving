
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
#define pc(x)  printf("Case %lld: ",x)
#define pb push_back
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

ll A[3000005],B[3000005],C[3000005],visited[3000005],level[3000005];
char CH[1000][1000];
vector<ll>V,G;
int on(int n, int poss) {return n=n|(1<<poss);}
int off(int n, int poss) {return n=n&~(1<<poss);}
bool check(int n, int poss) {return n=(bool)n&(1<<poss);}
ll ax[35],ay[35];
ll dp[20000];
float math(ll x1, ll y1, ll x2, ll y2)
{
    ll ck1=abs(x1-x2);
    ll ck2=abs(y1-y2);
    float ck=sqrt(ck1*ck1+ck2*ck2);
    //cout<<ck<<endl;
    return ck;
}
ll N;
float fun(ll state)
{
    if(dp[state]!=-1) return dp[state];

    float ans=99999999999999999.00;
    for(ll i=0;i<2*N;i++)
    {

        if(check(i,state))  continue;

        for(ll j=i+1;j<2*N;j++)
        {
            if(check(j,state)) continue;
            on(i,state);
            on(j,state);
            float ck=math(ax[i],ay[i],ax[j],ay[j]);
            float sum=fun(state)+ck;
            ans=min(ans,sum);
            off(j,state);
            off(i,state);
        }
        }
        dp[state]=ans;
        return dp[state];

}
int main()
{
   ll T,E,u,Q,v,i,j,k,sum=0,ck=0,x,y,cs=0;

   double d1,d2,d3;
   while(sf1(N))
   {
       if(N==0) r0;

    string S[N*2+2];
    for(i=0;i<2*N;i++)
    {
        cin>>S[i];
        //cout<<S[i]<<endl;
        sf2(ax[i],ay[i]);
    }

    memset(dp,-1,sizeof(dp));

    pc(++ck);
    printf("%.2f\n",fun(0));


   }

 /************ALEYA YOUSUF ************/


 /************ALLAH IS ALMIGHTY ************/
return 0;

}
