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

    double a,b,c,d,e,f,g,s,h,r;
    ll T;
    cin>>T;
    for(ll i=1;i<=T;i++)
    {
        cin>>a>>b>>c>>d;
        //my code
//        e=2*(a-c);
//        f=d*d-(a-c)*(a-c)-b*b;
//        g=(f*-1)/e;
//        h=sqrt((b*b-g*g));
//        r=.5*(c+a)*h;
//        printf("Case %lld: %lf\n",i,r);
    s=((a-c)+b+d)/2;
    f=sqrt(s*(s-(a-c))*(s-b)*(s-d));
    h=(2*f)/(a-c);
    r=.5*(c+a)*h;
    printf("Case %lld: %lf\n",i,r);

    }





return 0;
}

