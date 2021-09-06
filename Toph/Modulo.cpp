// Problem: C. Planar Reflections
// Contest: Codeforces - CodeCraft-21 and Codeforces Round #711 (Div. 2)
// URL: https://codeforces.com/contest/1498/problem/C
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

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
ll ans[100005];
 priority_queue<pair<ll,int> >pq;
int main()
{
   int T,N,E,Q,v,n,i,j,k,sum=0,ck=0,x,y,cs=0;
 
     string S,S1;
 
     double d1,d2,d3;
     
     sf1(T);
     while(T--)
     {
     	cs++;
     	sf1(N);
     	for(i=1;i<=N;i++)
     	{
     		scanf("%lld",&ans[i]);
     		pq.push(make_pair(ans[i],i));
     	}
     	ll u;
     	sf1(Q);
     	while(Q--)
     	{
     		scanf("%lld",&u);
     		while(pq.top().first>=u)
     		{
     			ll f1=pq.top().first%u;
     			int f2=pq.top().second;
     			pq.pop();
     			pq.push(make_pair(f1,f2));
     		}
     	}
     	
     		while(!pq.empty())
     	{
     			ll f1=pq.top().first%u;
     			int f2=pq.top().second;
     			pq.pop();
     			ans[f2]=f1;
     	}
     	
     	printf("Case %d:\n%lld",cs,ans[1]);
     	for(i=2;i<=N;i++)
     	{
     		printf(" %lld",ans[i]);
     	}
     	
     	printf("\n");
     	
   }
   /************ALEYA YOUSUF ************/
 
 
 /************AintAH IS ALMIGHTY ************/
return 0;
 
}