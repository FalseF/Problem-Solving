// Problem: Horrible Queries
// Contest: SPOJ - Classical
// URL: https://www.spoj.com/problems/HORRIBLE/
// Memory Limit: 1536 MB
// Time Limit: 2329 ms
// 
// Powered by CP Editor (https://cpeditor.org)

/*########  IN THE NAME OF ALLAH   ##########*/

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
const int node = 5e5+5;

struct edge{
	
	ll value;
	ll lazy;
};
edge tree[node];
void update(int n, int b, int e, int l, int r , ll v)
{
	if(l>e || r<b) return ;
	if(b>=l && e<=r) 
	{
		tree[n].value+= (e-b+1) * v;
		tree[n].lazy+=v;
		return ;
	}
	
	int mid = (e+b) / 2;
	update(n*2,b,mid,l,r,v);
	update(n*2+1,mid+1,e,l,r,v);
	tree[n].value = tree[n*2].value + tree[2*n+1].value + tree[n].lazy * (e-b+1);
}

ll query(int n, int b, int e , int l, int r ,ll cary)
{
	if(l>e || r<b) return 0;
	if(b>=l && e<=r)
	{
		return tree[n].value + cary * (e-b+1);
	}
	ll sum = cary + tree[n].lazy;
	int mid = (b+e)/2;
	ll x = query(n*2,b,mid,l,r,sum);
	ll y = query(n*2+1,mid+1,e,l,r,sum);
	return x+y;
}
int main()
{
   int T,cs=0;
     sf1(T);
     while(T--)
     {
     	memset(tree,0,sizeof(tree));
     	
     	int n,e;
     	scanf("%d%d",&n,&e);
     	while(e--)
     	{
     	
	     	int ck,l,r,v;
	     	scanf("%d%d%d",&ck,&l,&r);
	     	if(ck==1)
	     	{
	     		ll ans = query(1,1,n,l,r,0);
	     		printf("%lld\n",ans);
	     	}
	     	else {
	     	  scanf("%d",&v);	
	     	update(1,1,n,l,r,v);
	     	}
     	}
     	
     }
     
   
   /************ALEYA YOUSUF ************/
 
 /************ALLtAH IS ALMIGHTY ************/
return 0;
 
}