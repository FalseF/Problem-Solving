#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
ll max(ll x,ll y) {if(x>y) return x; else return y;}
ll min(ll x,ll y) {if(x<y) return x; else return y;}
ll pow(ll Base,ll Power) { ll S=1; for(ll i=1;i<=Power;i++) S=S*Base; return S;}
ll ar[100005];
vector<ll>V;
ll visited[100002];
ll level[100002];
int fx4[]={1,-1,0,0}; int fy4[]={0,0,1,-1};
ll Parent[100001],ans[100001];
struct Struct{
    ll U,V,W;
    Struct(ll a,ll b, ll c)
    {
        U=a;
        V=b;
        W=c;
    }

};
vector<Struct>G;
struct Edge{
    ll Cost,NODE;
    Edge(ll a, ll b)
    {
        Cost=b;
        NODE=a;
    }

};
vector<Edge>sohag[100001];
bool fun(Struct a,Struct b)
{
    return a.W<b.W;
}
void Inial(ll N)
{
    for(ll i=1;i<=N;i++) Parent[i]=i;
}
ll Find(ll r)
{
    if(Parent[r]==r) return r;
    else {return Parent[r]=Find(Parent[r]);}
}
void MST(ll E)
{
    sort(G.begin(),G.end(),fun);
    for(ll i=0;i<E;i++)
    {
        ll u=G[i].U;
        ll v=G[i].V;
        ll C=G[i].W;
        ll px=Find(u);
        ll py=Find(v);
        if(px!=py)
        {
            Parent[px]=py;
            sohag[u].push_back(Edge(v,C));
            sohag[v].push_back(Edge(u,C));
        }
    }
}
void dfs(ll src)
{
    for(ll i=0; i<sohag[src].size();i++)
    {
        ll v=sohag[src][i].NODE;
        ll COST=sohag[src][i].Cost;
        if(visited[v]==0)
        {
            visited[v]=1;
            ans[v]=max(ans[src],COST);
            dfs(v);
        }
    }
}
int main()
{

    ll ck=0,n,m,a,b,c=0,s=0;
    ll node,edge,wet,query,u,v,x,y;
    while(cin>>node>>edge>>query){
            if(node==0 && edge==0 && query==0) return 0;
            if(c>0) cout<<endl;
            c++;
            Inial(node);
    for(ll i=0;i<edge;i++)
    {
        cin>>u>>v>>wet;
        G.push_back(Struct(u,v,wet));

    }
    MST(edge);
    for(ll i=0;i<query;i++)
    {
        cin>>x>>y;
        if(i==0){ cout<<"Case #"<<c<<endl;}
        dfs(x);
    if(ans[y]==0) cout<<"no path"<<endl;
    else cout<<ans[y]<<endl;
        memset(ans,0,sizeof(ans));
        memset(visited,0,sizeof(visited));
    }
    for(ll i=0;i<node;i++) sohag[i].clear();
    memset(Parent,0,sizeof(Parent));
    G.clear();


}
return 0;
}

