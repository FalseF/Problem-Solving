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
    ll T;
    string S,S1,S2,S4,S5;
    S="programming";
    S1="coding";

    cin>>T;
    for(ll i=0;i<T;i++)
    {
        cin>>S2;
        sort(S.begin(),S.end());
        sort(S1.begin(),S1.end());
        sort(S2.begin(),S2.end());
        for(ll i=0;i<S2.length();i++)
        {
            if(S[c]==S2[i])
            {
                c++;
            }
            if(S1[s]==S2[i])
            {
                s++;
            }

        }
        if(c==11 || s==6) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
        c=0;
        s=0;

    }





return 0;
}

