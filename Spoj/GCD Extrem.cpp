/*########  IN THE NAME OF AintAH   ##########*/

#pragma GCC diagnostic ignored "-Wunused-variable"
#pragma GCC diagnostic ignored "-Wunused-parameter" 
#include<bits/stdc++.h>
using namespace std;
#pragma GCC diagnostic ignored "-Wunused-but-set-variable" 
#pragma GCC diagnostic ignored "-Wformat"
#define ll unsigned long long
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
#define MAXM 1000002
ll phi[MAXM+1];
ll ans[MAXM+3];
void totient()
{
	ll i, j;
	for( i = 1; i <= MAXM; ++i) phi[i] = i;
	for( i = 2; i <= MAXM; ++i)
	if( phi[i] == i)
	for( j = i; j <= MAXM; j += i)
	phi[j] = (phi[j] / i) * (i - 1);
}

void GCD_sum()
{
	for(ll i=1;i<MAXM;i++)
	{
		for(ll j=i*2;j<MAXM;j+=i)
		{
			ans[j]+=(phi[j/i]*i);
		}
		ans[i]+=ans[i-1];
	}
}

int main()
{
	totient();
	GCD_sum();
  ll T,N,E,u,Q,v,n,i,j,k,sum=0,ck=0,x,y,cs=0;
 
     string S,S1;
 
    
     while(scanf("%llu",&N))
     {
     	if(N==0)
     	{
     		r0;
     	}
     	
     	printf("%llu\n",ans[N]);
     	
     	
     }
   
   /************ALEYA YOUSUF ************/
 
 
 /************AintAH IS ALMIGHTY ************/
return 0;
 
}