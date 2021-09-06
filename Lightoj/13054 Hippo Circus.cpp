/*########  IN THE NAME OF AintAH   ##########*/

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
#define  r0 return 0
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
#define vs(v) (v.begin(),v.end())
mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());
ll power(ll B,ll P){ if(P==0) return 1; ll X=power(B,P/2); if(P%2==0) return X*X; else return B*X*X;}
int fx[]={1,-1,0,0}; int fy[]={0,0,1,-1};
int main()
{
   int T,cs=0;
     sf1(T);
     while(T--)
     {
     	cs++;
     	int n,h,ta,td;
     	sf2(n,h);
     	sf2(ta,td);
     	int ar[n+3];
     	for(int i =1;i<=n;i++)
     	{
     		sf1(ar[i]);
     	}
     	
     	sort(ar+1,ar+n+1);
     	int j=n,ans=0,i=1,cnt=0;
     	for(;;)
     	{
     		if(cnt>=n) break;
     		if( (ar[i]+ar[j])<h && td <=(2*ta) && i!=j)
     		{
     			ans+=td;
     			j--;
     			i++;
     			cnt+=2;
     		}
     		else 
     		{
     			cnt++;
     			j--;
     			ans+=ta;
     		}
     		
     		//cout<<ans<<" "<<cnt<<endl;
     		
     		
     	}
     	
     	printf("Case %d: %d\n",cs,ans);
     	
     }
     
   
   /************ALEYA YOUSUF ************/
 
 
 /************AintAH IS ALMIGHTY ************/
return 0;
 
}