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

   double x1,x2,r1,y1,y2,r2,A,B,C,D;
   double R,a,b,c,s1,s2,d,e,f;
   ll T;
   cin>>T;
    for(ll i=1;i<=T;i++)
    {
        cin>>x1>>y1>>r1>>x2>>y2>>r2;
        A=(x1-x2);
        B=(y1-y2);
        R=sqrt(A*A+B*B);
        d=r2/R;
        a=(2*asin(d)-2*d);
        e=r1/R;
        b=(2*asin(e)-2*e);
        s1=(r1*r1*a)/2;
        s2=(r2*r2*b)/2;
        c=s1+s2;
       cout<<c<<endl;
    }





return 0;
}

