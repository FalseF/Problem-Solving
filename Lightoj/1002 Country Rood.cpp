#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back()
void FastIO() {ios_base:: sync_with_stdio(false); cin.tie(0); cout.precision(20);}
ll max(ll x,ll y) {if(x>y) return x; else return y;}
ll min(ll x,ll y) {if(x<y) return x; else return y;}
ll pow(ll Base,ll Power) { ll S=1; for(ll i=1;i<=Power;i++) S=S*Base; return S;}
ll ar[100005];
struct sohag{

    ll V,U,W;
    sohag(ll a, ll b, ll c)
    {
        V=b;
        U=a;
        W=c;
    }
};
struct sohag2{
    ll cost,son;
    sohag2(ll y,ll x)
    {
        cost=x;
        son=y;
    }
};
vector<sohag>edge;
vector<sohag2>G[10000];
bool fun(sohag a,sohag b)
{
    return a.W<b.W;
}
ll visited[100002];
ll result[100002];
ll P[100002];
void Parent(ll N)
{
    for(ll i=0;i<N;i++)
    {
        P[i]=i;
    }
}
ll Found(ll r)
{
    if(P[r]==r) return r;
    else return P[r]=Found(P[r]);
}
ll D;
void Kruskal(ll E)
{
    sort(edge.begin(),edge.end(),fun);
    for(ll i=0;i<E;i++)
    {
        ll U1=edge[i].U;
        ll V1=edge[i].V;
        ll Cost=edge[i].W;
        ll px=Found(U1);
        ll py=Found(V1);
        if(px!=py)
        {
            P[px]=py;
            G[U1].push_back(sohag2(V1,Cost));
            G[V1].push_back(sohag2(U1,Cost));
        }
    }

}
ll ans[100001];
void bfs(ll src,ll pre)
{
            for(ll i=0;i<G[src].size();i++)
            {
                ll P1=G[src][i].son;
                ll C=G[src][i].cost;
                if(pre!=P1) {

                    ans[P1]=max(ans[src],C);

                    //cout<<C<<endl;
                    bfs(P1,src);}


            }
}
int main()
{
    FastIO();
    //freopen("2.txt","w",stdout);
    ll n,m,s=0;
    ll T,N,M,E,u,v,w;
    scanf("%lld",&T);
    for(ll i=1;i<=T;i++)
    {
        scanf("%lld%lld",&N,&E);
        for(ll j=0;j<E;j++)
        {
            scanf("%lld%lld%lld",&u,&v,&w);
            edge.push_back(sohag(u,v,w));
        }
        scanf("%lld",&D);
           memset(ans,-1,sizeof(ans));
        Parent(N);
        Kruskal(E);
        bfs(D,D);
       ll mx=0;
        printf("Case %lld:\n",i);
        for(ll k=0;k<N;k++)
        {
            if(k==D) {printf("0\n");continue;}
            if(ans[k]==-1) {printf("Impossible\n");}
            else printf("%lld\n",ans[k]);

        }
           edge.clear();
          for(ll k=0;k<N;k++) G[k].clear();

    }

return 0;
}

