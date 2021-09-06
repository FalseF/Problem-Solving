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
int parent[50005],ar[50005],N;
vector<int>graph[50005];
void bfs(int s, int d)
{
	parent[s]=s;
	queue<int>Q;
	Q.push(s);
	while(!Q.empty())
	{
		int u=Q.front();
		Q.pop();
		for(int i=0;i<graph[u].size();i++)
		{
			int v=graph[u][i];
			if(parent[v]==0)
			{	Q.push(v);
				parent[v]=u;
				if(v==ar[N]) return;
				
			}
		}
	}
}

void print(int s, int d)
{
	if(s==d)
	{
		printf("%d",s);
		return ;
	}
	else{
		print(s,parent[d]);
		printf(" %d",d);
	}
}
int main()
{
   int T,E,u,Q,v,n,i,j,k,sum=0,ck=0,x,y,cs=0;
 
     string S,S1;
 
     double d1,d2,d3;
     scanf("%d",&T);
     while(T--)
     {
     	cs++;
     	scanf("%d",&N);
     	for(i=1;i<=N;i++)
     	{
     		
     		scanf("%d",&ar[i]);
     		parent[i]=0;
     	}
     	for(i=1;i<N;i++)
     	{
     		graph[ar[i]].pb(ar[i+1]);
     		graph[ar[i+1]].pb(ar[i]);
     	}
     	
     	for(i=1;i<=N;i++)
     	{
     		sort(graph[ar[i]].begin(),graph[ar[i]].end());
     	}
     	
     	bfs(ar[1],ar[N]);
     	
     	printf("Case %d:\n",cs);
     	
     	print(ar[1],ar[N]);
     	
     	printf("\n");
     	
     	for(i=1;i<=N;i++)
     	{
     		graph[ar[i]].clear();
     		parent[ar[i]]=0;
     	}
     }
   
   

   
   /************ALEYA YOUSUF ************/
 
 
 /************ALLAH IS ALMIGHTY ************/
return 0;
 
}