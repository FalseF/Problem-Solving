#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back()
void FastIO() {ios_base:: sync_with_stdio(false); cin.tie(0); cout.precision(20);}
ll max(ll x,ll y) {if(x>y) return x; else return y;}
ll min(ll x,ll y) {if(x<y) return x; else return y;}
ll pow(ll Base,ll Power) { ll S=1; for(ll i=1;i<=Power;i++) S=S*Base; return S;}
ll Parent1[100005];
ll Parent2[100005];
struct sohag{
   ll V1,U,W;
    sohag(ll a,ll b, ll c)
    {
        U=a;V1=b;W=c;
    }

};
vector<sohag>V;
bool fun(sohag a, sohag b)
{
    return a.W<b.W;
}
bool fun1(sohag a, sohag b)
{
    return a.W>b.W;
}
void parent1(ll N)
{
    for(ll i=0;i<=N;i++)
    {
        Parent1[i]=i;
    }

}
void parent2(ll N)
{
    for(ll i=0;i<=N;i++)
    {
        Parent2[i]=i;
    }

}
ll Find1(ll N)
{
    if(Parent1[N]==N) return N;
    else return Parent1[N]=Find1(Parent1[N]);
}
ll Find2(ll N)
{
    if(Parent2[N]==N) return N;
    else return Parent2[N]=Find2(Parent2[N]);
}

ll MST(ll E)
{
    sort(V.begin(),V.end(),fun);
    ll S=0;
    for(ll i=0;i<E;i++)
    {
        ll u=V[i].U;
        ll v=V[i].V1;
        ll C=V[i].W;
        ll px=Find1(u);
        ll py=Find1(v);
        if(px!=py)
        {
            S+=C;
            Parent1[px]=py;
        }


    }
    return S;
}
ll MST1(ll E)
{
    sort(V.begin(),V.end(),fun1);
    ll S=0;
    for(ll i=0;i<E;i++)
    {
        ll u=V[i].U;
        ll v=V[i].V1;
        ll C=V[i].W;
        ll px=Find2(u);
        ll py=Find2(v);
        if(px!=py)
        {
            S+=C;
            Parent2[px]=py;
        }


    }
    return S;
}
int main()
{
    FastIO();
    ll ck=0,n,m,a,b,c=0,s=0,T,v,u,w;
    scanf("%lld",&T);
    for(ll i=1;i<=T;i++)
    {
       scanf("%lld",&n);
        while(scanf("%lld%lld%lld",&u,&v,&w))
        {
           if(u==0 && v==0 && w==0) break;
            else  V.push_back(sohag(u,v,w));
            //cout<<u<<" "<<v<<" "<<w<<endl;

        }
        ll Size=V.size();
        parent2(Size);
        ll R1=MST1(Size);
        parent1(Size);
        ll R=MST(Size);
        ll S=R1+R;
        if(S%2==0)
        printf("Case %lld: %lld\n",i,S/2);
        else printf("Case %lld: %lld/2\n",i,S);
        V.clear();
        memset(Parent1,0,sizeof(Parent1));
        memset(Parent2,0,sizeof(Parent2));
    }

return 0;
}














