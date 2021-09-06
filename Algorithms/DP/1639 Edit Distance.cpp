// Problem: Edit Distance
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/1639
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
string s1,s2;
int dp[5002][5002];
int l1,l2;
int fun(int pos1, int pos2)
{
	 if(pos1>=l1) return 0;
	 if(pos2>=l2) return 0;
	 if(dp[pos1][pos2]!=0) return dp[pos1][pos2];
	 int res1 = INT_MAX;
	 int res2 = INT_MAX;
	 int res3 = INT_MAX;
	 int res4 = INT_MAX;
	 
	 if(s1[pos1]==s2[pos2]) 
	 {
	 	 res1 = fun(pos1+1,pos2+1);
	 }
	 else
	 {
	 	res2 = fun(pos1+1,pos2+1) + 1;//replace
	 	res3 = fun(pos1,pos2+1) + 1;
	 	res4 = fun(pos1+1,pos2) +1;
	 	
	 	
	 }
	 
	 dp[pos1][pos2] = min(res4, min(res1, min(res2,res3)) );
	 return dp[pos1][pos2];
}
int main()
{
   cin>>s1>>s2;
    l1=s1.length();
    l2=s2.length();
   int ans = fun(0,0);
   cout<<ans<<endl;
     
   
   /************ALEYA YOUSUF ************/
 
 /************ALLtAH IS ALMIGHTY ************/
return 0;
 
}