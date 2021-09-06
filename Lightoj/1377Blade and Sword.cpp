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

int visited[202][202][3],level[202][202][3];
char grid[202][202];
vector<pair<int,int> >teleport;
int R,C;
int bfs(int s1, int s2, int d1, int 2)
{
	
}
int main()
{
   int T,N,E,u,Q,v,n,i,j,k,sum=0,ck=0,x,y,cs=0;
 
     scanf("%d");
     while(T--)
     {
     	cs++;
     	scanf("%d%d",&R,&C);
     	for(i=0;i<R;i++)
     	{
     		for(j=0;j<C;j++)
     		{
     			cin>>grid[i][j];
     			if(grid[i][j]=='*') telepord.push_back(make_pair(i,j));
     			if(grid[i][j]=='P')
     			{
     				s1=i;
     				s2=j;
     			}
     			
     			if(grid[i][j]=='D')
     			{
     				d1=i;
     				d2=j;
     			}
     		}
     	}
     	
     	int ans=bfs(s1,s2,d1,d2);
     	cs++;
     	printf("Case %d: ",cs);
     	if(ans==0)
     	{
     		printf("impossible\n");
     	}
     	else{
     		printf("%d\n",ans);
     	}
     }
   
   

   
   /************ALEYA YOUSUF ************/
 
 
 /************ALLAH IS ALMIGHTY ************/
return 0;
 
}