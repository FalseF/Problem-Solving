// Problem: Light Switching
// Contest: SPOJ - Classical
// URL: https://www.spoj.com/problems/LITE/
// Memory Limit: 1536 MB
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
#define uint unsigned long long
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
	
	int value;
	int lazy;
};
edge tree[node];
void update(int n, int b, int e, int l, int r)
{
	if(tree[n].lazy)
	{
		tree[n].value = (e-b+1) - tree[n].value;
		if(b!=e)
		{
			tree[2*n].lazy = ! tree[2*n].lazy;
			tree[2*n+1].lazy = ! tree[2*n+1].lazy;
		}
		tree[n].lazy=0;
	}
	if(l>e || r<b) return ;
	if(b>=l && e<=r) 
	{
		tree[n].value= (e-b+1) - tree[n].value;
		
		if(b!=e)
		{
			tree[2*n].lazy = ! tree[2*n].lazy;
			tree[2*n+1].lazy = ! tree[2*n+1].lazy;
		}
		
		return ;
	}
	
	int mid = (e+b) / 2;
	update(n*2,b,mid,l,r);
	update(n*2+1,mid+1,e,l,r);
	tree[n].value = tree[n*2].value + tree[2*n+1].value;
}

int query(int n, int b, int e , int l, int r)
{
	if(tree[n].lazy)
	{
		tree[n].value = (e-b+1) - tree[n].value;
		if(b!=e)
		{
			tree[2*n].lazy = ! tree[2*n].lazy;
			tree[2*n+1].lazy = ! tree[2*n+1].lazy;
		}
		tree[n].lazy=0;
	}
	
	if(l>e || r<b) return 0;
	
	if(b>=l && e<=r)
	{
		return tree[n].value;
	}
	
	int mid = (b+e)/2;
	int x = query(n*2,b,mid,l,r);
	int y = query(n*2+1,mid+1,e,l,r);
	return x+y;
}

int main() 
{
       int T,cs=0;
     	int n,e;
     	scanf("%d%d",&n,&e);
     	while(e--)
     	{
     	
	     	int ck,l,r,v;
	     	scanf("%d%d%d",&ck,&l,&r);
	     	if(ck==1)
	     	{
	     		int ans = query(1,1,n,l,r);
	     		printf("%d\n",ans);
	     	}
	     	else {
	     	update(1,1,n,l,r);
	     	}
     	}
     	
   
   /************ALEYA YOUSUF ************/
 
 /************AinttAH IS ALMIGHTY ************/
return 0;
 
}