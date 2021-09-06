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
int parent[1002];
void init(int N)
{
	for(int i=0;i<=N;i++)
	{
		parent[i]=i;
	}
}

int Find(int r)
{
	if(r==parent[r]) return r;
	else return parent[r]=Find(parent[r]);
}

int main()
{
   int T,N,E,u,Q,v,n,i,j,k,sum=0,ck=0,x,y,cs=0;
 
     string S,S1;
 
     double d1,d2,d3;
     scanf("%d",&T);
     while(T--)
     {
     	scanf("%d%d",&N,&E);
     	init(N);
        int ar[N+5];
        for(i=1;i<=N;i++)
        {
        	scanf("%d",&ar[i]);
        }
        
        while(E--)
        {
        	scanf("%d%d",&u,&v);
        	int px=Find(u);
        	int py=Find(v);
        	if(px!=py)
        	{
        		parent[py]=px;
        	}
        }
        vector<int>node[1005];
        vector<int>component_parent;
        set<int>ans;
        int mark[1005]={0};
        ck=0; 
        for(i=1;i<=N;i++)
        {
        	int px=Find(i);
        	node[px].push_back(i);
        	if(mark[px]==0) {component_parent.push_back(px);mark[px]=1;}
        }
        
        for(i=0;i<component_parent.size();i++)
        {
        	u=component_parent[i];
        	sum=0;
        	int cnt=0;
        	for(j=0;j<node[u].size();j++)
        	{
        		sum+=ar[node[u][j]];
        		cnt++;
        	}
        	if(sum%cnt)
        	{
        		printf("Case %d: No\n",++cs);
        		ck=1;
        		break;
        	}
        	
        	ans.insert(sum/cnt);
        }
        
       if(ck==0 && ans.size()==1)
       {
       	 printf("Case %d: Yes\n",++cs);
       }
       else if(ck==0){
       	 printf("Case %d: No\n",++cs);
       }
     }   

   /************ALEYA YOUSUF ************/
 
 
 /************ALLAH IS ALMIGHTY ************/
return 0;
 
}