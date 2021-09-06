#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll arr[500005];
vector<ll>tree[4000005];
ll t=0,dt[500005],ft[500005],visited[500005];
vector<ll>G[500005];
stack<ll>st;
ll node[500005],Index[500005],value[500005];
void initialize(ll node, ll b, ll e)
{
    if(b==e)
    {
        tree[node].push_back(arr[value[b]]);
        return;
    }
    ll left=node*2;
    ll right=node*2+1;
    ll mid=(b+e)/2;
    initialize(left,b,mid);
    initialize(right,mid+1,e);
    //tree[node]=merge(tree[left],tree[right]);
    merge(tree[left].begin(),tree[left].end(),tree[right].begin(),tree[right].end(),back_inserter(tree[node]));

}

ll query(ll node, ll b, ll e, ll i, ll j, ll k)
{
    if(b>j || i>e) return 0;
    if(i<=b && j>=e)
    {
        ll l1=lower_bound(tree[node].begin(),tree[node].end(),k)-tree[node].begin();
        return l1;
    }
    ll left=node*2;
    ll right=node*2+1;
    ll mid=(b+e)/2;
    ll p1=query(left,b,mid,i,j,k);
    ll p2=query(right,mid+1,e,i,j,k);
    return p1+p2;
}
void dfs(ll s)
{
    t++;
    dt[s]=t;
    visited[s]=1;
    for(ll i=0;i<G[s].size();i++)
    {
        ll v=G[s][i];
        if(visited[v]==0)
            dfs(v);
    }
    t++;
    ft[s]=t;
    st.push(s);
}

int main()
{
    ll N,Q,u,v,l,r;
    scanf("%lld%lld",&N,&Q);
    G[1].push_back(1);
    for(ll i=2;i<=N;i++)
    {
        scanf("%lld",&u);
        G[u].push_back(i);
        G[i].push_back(u);
    }

    dfs(1);
    ll ck=0;
    while(!st.empty())
    {
        ck++;
        ll tp=st.top();
        st.pop();
        node[tp]=(ft[tp]-dt[tp])/2+1;
        Index[tp]=ck;
        value[ck]=tp;
    }

    //for(int i=1;i<=N;i++) cout<<node[i]<<" ";

    for(ll i=1;i<=N;i++)
    {
        scanf("%lld",&arr[i]);
    }

    initialize(1,1,N);

    while(Q--)
    {
        scanf("%lld%lld",&u,&v);
        l=Index[u];
        r=l+node[u]-1;
        ll ans=query(1,1,N,l,r,v);
        printf("%lld\n",node[u]-ans);
    }


}
