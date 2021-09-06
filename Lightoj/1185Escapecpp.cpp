/*########  IN THE NAME OF ALLAH   ##########*/

#pragma GCC diagnostic ignored "-Wunused-variable"
#pragma GCC diagnostic ignored "-Wunused-parameter" 
#include<bits/stdc++.h>
using namespace std;
#pragma GCC diagnostic ignored "-Wunused-but-set-variable" 
#pragma GCC diagnostic ignored "-Wformat"
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
#define pc(x,y)  printf("Case %lld: %lld\n",x,y)
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
ll heta_asa[100005],kade_nia_asa[100005];
vector<ll>graph[100005];
void init(ll N)
{
	for(ll i=1;i<=N;i++)
	{
		heta_asa[i]=0;
		kade_nia_asa[i]=0;
		graph[i].clear();
	}
}

ll bfs(ll s)
{
	queue<ll>Q;
	Q.push(s);
	ll ans=0;
	while(!Q.empty())
	{
		ll u=Q.front();
		Q.pop();
		for(ll i=0;i<graph[u].size();i++)
		{
			ll v=graph[u][i];
			if(heta_asa[v]==0 && (u==1 || kade_nia_asa[u]==1))
			{
				Q.push(v);
				heta_asa[v]=1;
			}
			
			if(heta_asa[u]==1 && kade_nia_asa[v]==0)
			{
				ans++;
				kade_nia_asa[v]=1;
				Q.push(v);
			}
		}
	}
	
	return ans;
}
int main()
{
   ll T,N,E,u,Q,v,n,i,j,k,sum=0,ck=0,x,y,cs=0;
 
     string S,S1;
 
     double d1,d2,d3;
     scanf("%lld",&T);
     while(T--)
     {
     	scanf("%lld%lld",&N,&E);
     	init(N);
     	for(i=1;i<=E;i++)
     	{
     		scanf("%lld%lld",&u,&v);
     		graph[u].pb(v);
     		graph[v].pb(u);
     	}
     	
     	ll ans=bfs(1);
     	printf("Case %lld: %lld\n",++cs,ans);
     	
     }
   
   

   
   /************ALEYA YOUSUF ************/
 
 
 /************ALLAH IS ALMIGHTY ************/
return 0;
 
}