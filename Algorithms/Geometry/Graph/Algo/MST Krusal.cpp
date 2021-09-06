#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back()
void FastIO() {ios_base:: sync_with_stdio(false); cin.tie(0); cout.precision(20);}
ll max(ll x,ll y) {if(x>y) return x; else return y;}
ll min(ll x,ll y) {if(x<y) return x; else return y;}
ll pow(ll Base,ll Power) { ll S=1; for(ll i=1;i<=Power;i++) S=S*Base; return S;}
ll ar[100005];
ll visited[10002];
ll Parent[10002];
int fx4[]={1,-1,0,0}; int fy4[]={0,0,1,-1};

struct St{
    ll U,V,W;
    St (ll a,ll b,ll c)
    {
        U=a;
        V=b;
        W=c;
    }

};
vector<St>Graph;
bool fun(St a, St b){return a.W<b.W;}
void parent(ll N)
{
    for(ll i=1;i<=N;i++)
    {
        Parent[i]=i;
    }

}
ll Find(ll N)
{
    if(Parent[N]==N) return N;
    else return Parent[N]=Find(Parent[N]);
}

ll MST(ll E)
{
    sort(Graph.begin(),Graph.end(),fun);
    ll S=0;
    for(ll i=0;i<E;i++)
    {
        ll u=Graph[i].U;
        ll v=Graph[i].V;
        ll C=Graph[i].W;
        ll px=Find(u);
        ll py=Find(v);
        if(px!=py)
        {
            S+=C;
            Parent[px]=py;
        }


    }
    return S;
}



int main()
{
    FastIO();
    ll ck=0,n,m,a,b,c=0,s=0,v,u,w,N,E;

    cin>>N>>E;
    parent(N);
    for(ll i=1;i<=E;i++)
    {
        cin>>u>>v>>w;
        Graph.push_back(St(u,v,w));
    }
    ll R=MST(E);
    cout<<R<<endl;






return 0;
}
