#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
ll max(ll x,ll y) {if(x>y) return x; else return y;}
ll min(ll x,ll y) {if(x<y) return x; else return y;}
ll pow(ll Base,ll Power) { ll S=1; for(ll i=1;i<=Power;i++) S=S*Base; return S;}
ll ar[100005];
vector<ll>V;
ll visited[1];
int fx4[]={1,-1,0,0}; int fy4[]={0,0,1,-1};
int main()
{

    ll ck=0,n,m,a,b=0,c=0,s=0;
    cin>>n>>m;

    for(ll i=0;i<n;i++)
    {
       cin>>a;
       b+=a;
       V.pb(a);
    }
    if(n==1) {cout<<"0";return 0;}
    sort(V.begin(),V.end());
    ll mx=V[n-1];
    for(ll i=0;i<n;i++)
    {
        if(V[i]>c) c++;
    }
    ll SS=mx+n-c;
    cout<<b-SS<<endl;





return 0;
}

