
      /*########  IN THE NAME OF ALLHA   ##########*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 999999999999999999
#define nl cout<<endl
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

ll fx[]={1,-1,0,0}; ll fy[]={0,0,1,-1};

ll A[300005],B[300005],C[300005],visited[300005],level[300005];

char CH[1000][1000],ch;

vector<ll>V;

vector<ll>G;

map<ll,ll>dp;

int main()
{

    WRITE("1.txt");
   ll T,N,E,u,v,i,j,a,b,c,d,f,e,k,C=0,sum=0,ck=0,x,y;

   string S,S1;

   double d1,d2,d3;

   ll n, caseno = 0, cases;

    scanf("%lld", &cases);

    while( cases-- ) {

            caseno++;

    scanf("%lld %lld %lld %lld %lld %lld %lld", &a, &b, &c, &d, &e, &f, &n);

    dp[0]=a;
    dp[1]=b;
    dp[2]=c;
    dp[3]=d;
    dp[4]=e;
    dp[5]=f;

    pc(caseno);

    for(i=6;i<=n;i++)
    {
        dp[i]=(dp[i-1]+dp[i-2]+dp[i-3]+dp[i-4]+dp[i-5]+dp[i-6])%10000007;
    }

    cout<<" "<<dp[n]%10000007<<endl;

    dp.clear();


    }

 /************ALEYA YOUSUF ************/


 /************ALLHA IS ALMIGHTY ************/
    return 0;
}
