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

    double a,b,c,d,e,f,v,g;
    ll t,A,B,aa;
    cin>>t;
    for(ll i=0;i<t;i++)
    {
        cin>>aa;
        a=aa;
        v=a*a;
        c=4*a;
        d=v-c;
        e=sqrt(d)+a;
        f=e/2;

        g=a-f;
         //cout<<"f= "<<f<<" g ="<<g<<endl;

        double D=f+g;
        double E=f*g;
        //cout<<a<<endl;
        double Aa=a-D;
        double Ab=a-E;


        //cout<<D<<" "<<E<<endl;

        if((Aa<.000000001) && (Ab<.0000000001))
        {
            cout<<"Y ";
            printf("%.9f %.9f\n",f,g);
        }
        else cout<<"N"<<endl;

    }





return 0;
}

