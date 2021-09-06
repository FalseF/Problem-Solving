#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
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
vector<St>mst2;
bool fun(St a, St b){return a.W<b.W;}
void parent(ll N)
{
    for(ll i=0;i<N;i++)
    {
        Parent[i]=i;
    }

}
ll Find(ll N)
{
    if(Parent[N]==N) return N;
    else return Parent[N]=Find(Parent[N]);
}
ll ck=0;
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
            mst2.push_back(St(u,v,C));
        }


    }
    return S;
}
ll componet;
ll MST1(ll E, ll x,ll y)
{
    ll S=0;
    for(ll i=0;i<E;i++)
    {
        ll u=Graph[i].U;
        ll v=Graph[i].V;
        ll C=Graph[i].W;
        ll px=Find(u);
        ll py=Find(v);
        if(u==x && v==y) continue;
        if(px!=py)
        {
            S+=C;
            Parent[px]=py;
            componet--;
        }


    }
    return S;
}



int main()
{
  ll ck=0,n,m,a,b,c=0,s=0,v,u,w,N,E;
    ll T;
    cin>>T;
    while(T){
            cin>>N>>E;
    T--;
              parent(N);
            for(ll i=1;i<=E;i++)
            {
                cin>>u>>v>>w;

                Graph.push_back(St(u,v,w));
            }
            ll R=MST(E);
            ll mn=1000000000;
            componet=N;
            for(ll i=0;i<mst2.size();i++)
            {
                memset(Parent,0,sizeof(Parent));
                parent(N);
                ll x=mst2[i].U;
                ll y=mst2[i].V;
                ll R2=MST1(E,x,y);
                if(componet==1){
                mn=min(R2,mn);}
                componet=N;
            }
            memset(Parent,0,sizeof(Parent));

            cout<<R<<" "<<mn<<endl;
            Graph.clear();
            mst2.clear();

}
return 0;
}
