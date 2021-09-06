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
#define pii pair< ll,ll >
#define MIN  -99999999999999999
#define READ(f) freopen(f,"r",stdin)
#define WRITE(f) freopen(f,"w",stdout)
#define pi 2.0*acos(0.0)
#define vs(v) (v.begin(),v.end())
int power(int B,int P){ if(P==0) return 1; int X=power(B,P/2); if(P%2==0) return X*X; else return B*X*X;}
int fx[]={1,-1,0,0}; int fy[]={0,0,1,-1};
const int mx = 2e5+7;
vector<pii>graph[mx];
ll node_cnt[mx];
vector<ll>ans;
int main()
{
   ll T,N,E,u,v,n,i,j,k,sum=0,c,ck=0,x,y,cs=0;
 
     string S,S1;
 
     double d1,d2,d3;
     int node,edge;
     cin>>node>>edge>>k;
     for(i=1;i<=edge;i++)
     {
     	cin>>u>>v>>c;
     	graph[u].pb(mp(v,c));
     }
     
     priority_queue<pii,vector<pii>, greater<pii> >Q;
     ll source=1;
     ll des=node;
     Q.push(mp(0,source));
     while(!Q.empty())
     {
     	pii p=Q.top();
     	Q.pop();
     	node_cnt[p.second]++;
     	if(node_cnt[p.second]>k) continue;
     	
     	if(p.second==des)
     	{
     		ans.pb(p.first);
     	}
     	
     	if(node_cnt[p.second]==k && des==p.second)
     	{
     		break;
     	}
     	
     	for(auto it:graph[p.second])
     	{
     		if(node_cnt[it.first]<k)
     		{
     			Q.push(mp(p.first+it.second,it.first));
     		}
     	}
     	
     }
     
     for(auto it:ans)
     {
     	cout<<it<<" ";
     }
     cout<<endl;
   

   
   /************ALEYA YOUSUF ************/
 
 
 /************AintAH IS ALMIGHTY ************/
return 0;
 
}