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

    ll ck=0,n,m,a,b,c,s=0;
    cin>>n;
    for(ll i=0;i<n;i++)
    {
       cin>>a>>b>>c;
       ck=c/2;
       s=ck;
       m=ck;
       if(c%2!=0) s++;
       ll r=a*s-m*b;
       cout<<r<<endl;
    }





return 0;
}

