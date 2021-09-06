
#pragma GCC diagnostic ignored "-Wunused-variable"
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable" 
#pragma GCC diagnostic ignored "-Wformat"
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef long long ll;
typedef unsigned long long ull;
#define INF 9223372036854775806
#define pb push_back
#define mp make_pair
#define MOD 1000000007
#define PI 2*acos(0.0)
#define EPS 1e-9
#define maxn 100005
template<class T> using oset=tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
//order_of_key,find_by_order
ll max(ll a,ll b) {if(a>b) return a; else return b;} ll min(ll a,ll b) {if(a<b) return a; else return b;}

vector<int> g[maxn];
int val[maxn],in[maxn],out[maxn];
void init(){
	for(int i=1;i<maxn-1;i++){
		g[i].clear();
		val[i]=0;
		in[i]=out[i]=INT_MIN;
	}
}

void dfs(int u,int par){
	
	for(int v:g[u]){
		if(v==par) continue;
		dfs(v,u);
		in[u]=max(in[u],in[v]+1);
	}
}

void dfs2(int u,int par){
	
	int mx1,mx2; mx1=mx2=INT_MIN;
	
	for(int v:g[u]){
		if(v==par) continue;
		if(in[v]>=mx1){
			mx2=mx1; mx1=in[v];
		}
		else if(in[v]>mx2){
			mx2=in[v];
		}
	}
	
	for(int v:g[u]){
		if(v==par) continue;
		int cur=mx1;
		if(in[v]==mx1) cur=mx2;
		
		out[v]=max(1+out[u],2+cur);
		
		dfs2(v,u);
	}
}

int main()
{
	int t,cs=1;
	scanf("%d",&t);
	while(t--){
		int n,m,k;
		scanf("%d %d %d",&n,&m,&k);
		init();
		int x,y;
		for(int i=1;i<n;i++){
			scanf("%d %d",&x,&y);
			g[x].pb(y);
			g[y].pb(x);
		}
		dfs(1,-1);
		dfs2(1,-1);
		for(int i=1;i<=n;i++)
		{
			cout<<i<<" "<<out[i]<<endl;
		}
		int cnt=0;
	}

    return 0;
}
