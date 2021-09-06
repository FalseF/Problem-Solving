#include<bits/stdc++.h>
#pragma GCC diagnostic ignored "-Wunused-variable"
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
using namespace std;
#define MAX 100006
#define ll long long
#define pb push_back
#define mem(a,v) memset(a,v,sizeof(a))

ll n, m, all, cnt = 1;
vector<int> g[MAX], nxt, csz;
vector<ll> tree, mx;
ll val[MAX], A[MAX]; 
ll Size[MAX], p[MAX], chain[MAX];
ll base[MAX], top[MAX], depth[MAX];
// chain array stores the chain number of a node v 

struct SegmentTree{
    
    void init(int n){
        tree.clear(); tree.resize(4 * n,0);
        mx.clear(); mx.resize(4 * n, 0);
    }
     //** Segment TREE PART STARTED**//
    void build(int node, int tb, int te){
	    if(tb > te) return;
		if(tb == te){
			tree[node]  = A[tb];//value goes here
			return;
		}
		int mid=(tb + te) >> 1; 
		int left = (node * 2);
		int right = node * 2 + 1;
		build(left, tb, mid);
		build(right, mid + 1, te);
		tree[node] = max(tree[left], tree[right]);
	}
	// point update
	void update(int node, int tb, int te,int idx, int newval){
        if(te < idx || idx < tb)return; 
        if(tb == te){
            tree[node] = newval;
            return;
        }
        int left, right, mid;
        left = (node << 1);
        right = left + 1;
        mid = (tb + te) >> 1;
        update(left, tb, mid, idx, newval);
        update(right, mid + 1, te, idx, newval);
        tree[node] = max(tree[left],tree[right]);
    }
    // range update
	// Range query
	int query(int node, int tb, int te, int qb, int qe){
        if(tb > te) return -INT_MAX;
        if(qb > te || qe < tb)return -INT_MAX;
        if(qb <= tb && te <= qe){
            return tree[node];
        }
        int left, right, mid;
        left = (node << 1);
        right = left + 1;
        mid = (tb + te) >> 1;
        int L = query(left, tb, mid, qb, qe);
        int R = query(right, mid + 1, te, qb, qe);
        return max(L,R);
    }
    //** Segment TREE PART ENDED**//
} st;
struct HLD{
    int n;
    void init(int _n){
        n = _n;
        for(int i = 0; i <= n; i++)g[i].clear();
        nxt.clear(); nxt.resize(n + 1,  -1);
        csz.clear(); csz.resize(n + 1, 0); cnt = 1; all = 0;
    }
    
    //** HLD PART STARTED**///
    void dfs(int source, int pr = 0){
        p[source] = pr;
        Size[source] = 1;
        for(auto to: g[source]){
            if(to == pr)continue;
            depth[to] = depth[source] + 1;
            dfs(to, source);
            Size[source] += Size[to];
            if(nxt[source] == -1 || Size[to] > Size[nxt[source]]){
              nxt[source] = to;
            }
        }
    }
    //**STILL HLD PART**///
    void hld(int v, int pr = -1){
        chain[v] = cnt - 1;
        base[v] = all++;
        if(!csz[cnt - 1]){
            top[cnt - 1] = v;
        }
        ++csz[cnt - 1];
        if(nxt[v] != -1){
            hld(nxt[v], v);
        }
        for(auto to: g[v]){
            if(to == pr || to == nxt[v])continue;
            ++cnt;
            hld(to, v);
         }
    }    
    //**STILL HLD PART**///
    ll go(int a, int b){
        ll res = 0;
        while(chain[a] != chain[b]){
            if(depth[top[chain[a]]] < depth[top[chain[b]]]) swap(a, b);
            int start = top[chain[a]];
            if(base[a] == base[start] + csz[chain[a]] - 1) 
                res = max(res,(ll) mx[chain[a]]);
            else
                res = max(res,(ll) st.query(1, 0, n - 1, base[start], base[a]));
            a = p[start];
        }
        if(depth[a] > depth[b]) swap(a, b);
        res = max(res,(ll) st.query(1, 0, n - 1, base[a], base[b]));
        return res;
    }
    
    void modify(int a, int b){
        st.update(1, 0, n - 1, base[a], b);
        int start = base[top[chain[a]]];
        int end = start + csz[chain[a]] - 1;
        mx[chain[a]] = st.query(1, 0, n - 1, start, end);
    } 
    // ***//* HLD PART ENDED **//*****//
    // Remember graph is 0based and stree is 1 based
    void solve(){
        int a, b;
        for(int i = 1; i < n; i++){
            scanf("%d %d", &a, &b);
            a--; b--;
            g[a].pb(b);
            g[b].pb(a);
        }
        dfs(0);
        hld(0);
        scanf("%d", &m); int type;
        for(int i = 1; i <= m; i++){
            scanf("%d",&type);
            if(type == 1){
                scanf("%d %d", &a, &b);
                a--; b--;
                go(a, b);
            }
            else{
                scanf("%d %d", &a, &b);
                a--;
                modify(a, b);
            }
        }
    }
   
}hl;

int main(){
    scanf("%d", &n); int a, b;
    hl.init(n);
    st.init(n);
    hl.solve();
    
    return 0;
}