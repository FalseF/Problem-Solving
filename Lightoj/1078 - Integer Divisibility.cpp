#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
ll max(ll x,ll y) {if(x>y) return x; else return y;}
ll min(ll x,ll y) {if(x<y) return x; else return y;}
ll pow(ll Base,ll Power) { ll S=1; for(ll i=1;i<=Power;i++) S=S*Base; return S;}
ll ar[100005];
vector<ll>V;
//ll visited[999999990];
ll level[100002];
int fx4[]={1,-1,0,0}; int fy4[]={0,0,1,-1};
int main()
{
   freopen("1.txt","w",stdout);
    ll ck=0,n,m,a,b,T,c=0,s=0;
    scanf("%lld",&T);
    for(ll i=1;i<=T;i++){
    scanf("%lld%lld",&n,&m);
    s=m;
    if(n==0){printf("Case %lld: 0\n",i);c=0;continue;}
    while(1)
    {
        c++;


            if(s%n==0){printf("Case %lld: %lld\n",i,c);c=0;break;}
        s=(s*10+m)%n;
    }
}





return 0;
}

