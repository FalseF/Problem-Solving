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
vector<int>graph[200005];
int visited[200005],cnt;
void bfs(int s)
{
	   cnt++;
	   visited[s]=1;
		for(int i=0;i<graph[u].size();i++)
		{
			int v=graph[u][i];
			if(visited[v]==0)
			{
				bfs(v);
				
			}
		}
		
		visited[s]=0;
	}
	

}
int main()
{
   int T,N,E,u,Q,v,n,i,j,k,sum=0,ck=0,x,y,cs=0;
 
     string S,S1;
 
     double d1,d2,d3;
     scanf("%d",&T);
     while(T--)
     {
     	scanf("%d",&N);
     	
     	for(i=1;i<=N;i++)
     	{
     		graph[i].clear();
     		visited[i]=0;
     	}
     	for(i=1;i<=N;i++)
     	{
     		scanf("%d%d",&u,&v);
     		 graph[u].pb(v);
     		 graph[v].pb(u);
     	}
     	
     	int ans=1,mx=0;
     	for(i=1;i<=N;i++)
     	{
     		if(visited[i]==0)
     		{
     			ck=bfs(i);
     		}
     		
     		if(ck>mx)
     		{
     			mx=ck;
     			ans=i;
     		}
     	}
     	
     	printf("Case %d: %d\n",++cs,ans);
     	
     	
     }
   
   

   
   /************ALEYA YOUSUF ************/
 
 
 /************ALLAH IS ALMIGHTY ************/
return 0;
 
}