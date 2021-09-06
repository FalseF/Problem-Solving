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
const int mx=100005;
int mark[mx];
int level1[mx],level2[mx],visited[mx],Node;
vector<int>graph[mx];
void inti()
{
	for(int i=1;i<=Node;i++)
	{
		mark[i]=0;
		level1[i]=0;
		level2[i]=0;
		graph[i].clear();
		visited[i]=0;
	}
}
int bfs(int s)
{
	level1[s]=0;
	visited[s]=1;
	queue<int>Q;
	Q.push(s);
	while(!Q.empty())
	{
		int u=Q.front();
		Q.pop();
		for(int v:graph[u])
		{
			if(visited[v]==0)
			{
				level1[v]=level1[u]+1;
				visited[v]=1;
				Q.push(v);
			}
		}
	}
	
	int dis=0,ans=s;
	for(int i=1;i<=Node;i++)
	{
		if(mark[i] && level1[i]>dis)
		{
			dis=level1[i];
			ans=i;
			
		}
	}
	
	return ans;
}
int main()
{
   int T,N,E,u,Q,v,n,i,j,k,sum=0,ck=0,x,y,cs=0;
 
     string S,S1;
 
     double d1,d2,d3;
     scanf("%d",&T);
     while(T--)
     {
     	cs++;
     	scanf("%d%d%d",&Node,&Q,&k);
     	inti();
     	for(i=1;i<Node;i++)
     	{
     		scanf("%d%d",&u,&v);
     		graph[u].pb(v);
     		graph[v].pb(u);
     	}
     	
     	for(i=1;i<=Q;i++)
     	{
     		scanf("%d",&u);
     		mark[u]=1;
     		ck=u;
     	}

     	int mx_node=bfs(ck);
     	
     	memset(level1,0,sizeof(level1));
     	
     	memset(visited,0,sizeof(visited));
     	
     	int other_mx=bfs(mx_node);
     	
     	queue<int>q;
     	
     	q.push(other_mx);

     	memset(visited,0,sizeof(visited));
     	visited[other_mx]=1;
     	while(!q.empty())
     	{
     		u=q.front();
     		q.pop();
     		for(int n:graph[u])
     		{
     			if(visited[n]==0)
     			{
     				visited[n]=1;
     				level2[n]=level2[u]+1;
     				q.push(n);
     			}
     		}
     	}
     	
     	int ans=0;
     	for(i=1;i<=Node;i++)
     	{
     		if(level1[i]<=k && level2[i]<=k)
     		{
     			ans++;
     		}
     	}
     	
     	printf("Case %d: %d\n",cs,ans);
     	
     }

   
   /************ALEYA YOUSUF ************/
 
 
 /************ALLAH IS ALMIGHTY ************/
return 0;
 
}