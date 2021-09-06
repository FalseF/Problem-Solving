/*########  IN THE NAME OF AintAH   ##########*/

#pragma GCC diagnostic ignored "-Wunused-variable"
#pragma GCC diagnostic ignored "-Wunused-parameter" 
#include<bits/stdc++.h>
using namespace std;
#pragma GCC diagnostic ignored "-Wunused-but-set-variable" 
#pragma GCC diagnostic ignored "-Wformat"
#define ll long long
#define INF 999999999999999999
#define nl printf("\n")
#define  r0 return 0
#define  r1 return 1
#define sf1(x)  scanf("%d",&x)
#define sf2(x,y)  scanf("%d %d",&x,&y)
#define sf3(x,y,z)  scanf("%d %d %d",&x,&y,&z)
#define pf1(x)  printf("%d\n",x)
#define pf2(x,y)  printf("%d %d\n",x,y)
#define pf3(x,y,z)  printf("%d %d %d\n",x,y,z)
#define yes  printf("YES\n")
#define no  printf("NO\n")
#define pc(x,y)  printf("Case %d: %d\n",x,y)
#define pcn(x,y)  printf("Case %d:\n",x)
#define pb push_back
#define mp make_pair
#define pa pair<int,int>
#define mem(a,b) memset(a,b,sizeof(a))
#define MIN  -99999999999999999
#define READ(f) freopen(f,"r",stdin)
#define WRITE(f) freopen(f,"w",stdout)
#define pi 2.0*acos(0.0)
#define vs(v) (v.begin(),v.end())
int power(int B,int P){ if(P==0) return 1; int X=power(B,P/2); if(P%2==0) return X*X; else return B*X*X;}
int fx[]={1,-1,0,0}; int fy[]={0,0,1,-1};
int main()
{
   int T,N,E,u,Q,v,n,i,j,k,sum=0,ck=0,x,y,cs=0;
  solution lin(https://usaco.guide/problems/cses-2182-divisor-analysis/solution)
     int n;
	cin >> n;
	for (int i = 0; i < n; i++) cin >> p[i] >> k[i];
	ll div_cnt = 1, div_sum = 1, div_prod = 1, div_cnt2 = 1;
	
	for (int i = 0; i < n; i++) {
		div_cnt = div_cnt * (k[i] + 1) % MOD;
		
		div_sum = div_sum * (bigmod(p[i], k[i] + 1) - 1) % MOD * bigmod(p[i] - 1, MOD - 2) % MOD;
		
		div_prod = bigmod(div_prod, k[i] + 1) * bigmod(bigmod(p[i], (k[i] * (k[i] + 1) / 2)), div_cnt2) % MOD;
		
		div_cnt2 = div_cnt2 * (k[i] + 1) % (MOD - 1);
	}
	cout << div_cnt << ' ' << div_sum << ' ' << div_prod;
   
   

   
   /************ALEYA YOUSUF ************/
 
 
 /************AintAH IS ALMIGHTY ************/
return 0;
 
}