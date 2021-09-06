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

    ll ck=0,n,m,a,b,c=0,s=0;
    ll T,A,B,N;
    string S,S1,R;
    cin>>T;
    for(ll i=0;i<T;i++)
    {
        cin>>N;
        cin>>A>>B;
            while(N!=0)
            {
                ll d=N%2;
                S1+=d+48;
                N=N/2;
            }
            cout<<S1<<endl;
            ll deci=0;
            b=0;
            ll L=S1.length()-1;
        for(ll j=A-1;j<B;j++)
        {
            if(j>L) break;
            ll d=S1[j]-48;
            deci+=d*pow(2,b);
            b++;
        }
        cout<<deci<<endl;
        S1.clear();
    }





return 0;
}

