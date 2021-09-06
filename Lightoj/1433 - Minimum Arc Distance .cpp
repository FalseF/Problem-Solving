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

    ll T;
    double ox,oy,ax,ay,bx,by,D,A,C,E,B,R,F,G,H;
    cin>>T;
    for(ll i=1;i<=T;i++)
    {
        cin>>ox>>oy>>ax>>ay>>bx>>by;
        A=sqrt((ox-ax)*(ox-ax)+(oy-ay)*(oy-ay));
        B=sqrt((ox-bx)*(ox-bx)+(oy-by)*(oy-by));
        C=sqrt((ax-bx)*(ax-bx)+(ay-by)*(ay-by));
        F=A*A+B*B-C*C;
        G=2*A*B;
        H=F/G;
        E=acos(H);
         R=E*A;
        printf("Case %lld: %lf\n",i,R);
    }





return 0;
}

