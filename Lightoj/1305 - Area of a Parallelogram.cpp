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

    ll ck=0,n,m,a,T,b,c=0,s=0,A,B,C,D;
    ll ax,ay,bx,by,cx,cy,x,y,dx,dy;
    cin>>T;
    for(ll i=1;i<=T;i++)
    {
        cin>>ax>>ay>>bx>>by>>cx>>cy;
        dy=(cy-by)+ay;
        dx=(cx-bx)+ax;
        ll h=dx+(-1*ax);
        ll h1=dy+(-1*ay);
        b=ax+(-1*bx);
        ll b1=ay+(-1*by);
        ll R1=h*b1;
        ll R2=h1*b;
        ll R=(R1-R2);
        if(R<0) R=R*-1;
        printf("Case %lld: %lld %lld %lld\n",i,dx,dy,R);


    }





return 0;
}

