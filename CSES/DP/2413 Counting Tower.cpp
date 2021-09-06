// Problem: Counting Towers
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/2413
// Memory Limit: 512 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

/*########  IN THE NAME OF ALLAH   ##########*/

#pragma GCC diagnostic ignored "-Wunused-variable"
#pragma GCC diagnostic ignored "-Wunused-parameter" 
#include<bits/stdc++.h>
using namespace std;
#pragma GCC diagnostic ignored "-Wunused-but-set-variable" 
#pragma GCC diagnostic ignored "-Wformat"
#define ll long long
#define ull unsigned long long
#define INF 999999999999999999
#define nl printf("\n")
#define sf1(x)  scanf("%d",&x)
#define sf2(x,y)  scanf("%d %d",&x,&y)
#define sf3(x,y,z)  scanf("%d %d %d",&x,&y,&z)
#define pf1(x)  printf("%d\n",x)
#define pf2(x,y)  printf("%d %d\n",x,y)
#define pf3(x,y,z)  printf("%d %d %d\n",x,y,z)
#define pc(x,y)  printf("Case %d: %d\n",x,y)
#define pcn(x)  printf("Case %d:\n",x)
#define pb push_back
#define mp make_pair
#define pa pair<int,int>
#define mem(a,b) memset(a,b,sizeof(a))
#define MIN  -99999999999999999
#define READ(f) freopen(f,"r",stdin)
#define WRITE(f) freopen(f,"w",stdout)
#define pi 2.0*acos(0.0)
#define pi2 acos(-1.0)
#define vs(v) (v.begin(),v.end())
mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());
ll power(ll B,ll P){ if(P==0) return 1; ll X=power(B,P/2); if(P%2==0) return X*X; else return B*X*X;}
int fx[]={1,-1,0,0}; int fy[]={0,0,1,-1};
const int mod = 1e9+7;
ll dp[1000006][3];
int main()
{
	int n,t,m;
	dp[1][1] = dp[1][2] =1;
	for(int i =2;i<=1000000;i++)
	{
		 dp[i][1] = ( ( dp[i-1][1] * 4) %mod + dp[i-1][2]) % mod;
		 
		 dp[i][2] = ( ( dp[i-1][2] * 2) %mod + dp[i-1][1]) % mod;
	}

	cin>>t;
	while(t--)
	{
		cin>>n;
		ll ans = (dp[n][1] + dp[n][2] ) %mod;
		cout<<ans<<endl;
	}
   
   /************ALEYA YOUSUF ************/
 
 /************ALLtAH IS ALMIGHTY ************/
return 0;
 
}