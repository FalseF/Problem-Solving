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
int main()
{

    double ab,ac,bc,de,area,d,s=0,a;
    ll T;
    scanf("%lld",&T);
    for(ll i=1;i<=T;i++)
    {
        cin>>ab>>ac>>bc>>area;
        d=sqrt(area);
        s=d/sqrt(area+1);
        a=s*ab;
        printf("Case %lld: %lf\n",i,a);

    }





return 0;
}

