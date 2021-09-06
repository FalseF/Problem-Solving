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
    string S,S1;
    ll v=0,cn=0;
    cin>>T;
    for(ll i=0;i<T;i++)
    {
        cin>>S;

       for(ll i=0;i<S.length();i++)
       {
           if(S[i]=='i' || S[i]=='a' || S[i]=='e' || S[i]=='o' || S[i]=='u') continue;
           else v++;

       }

        for(ll i=0;i<S.length();i++)
       {
           //ll D=S[i]-48;
           //cout<<D<<endl;
         if(S[i]<='Z' && S[i]>='A' ) cn++;
         else if(S[i]=='i' || S[i]=='a' || S[i]=='e' || S[i]=='o' || S[i]=='u') cn++;
           else if(S[i]>='a' && S[i]<='z') continue;
           else cn++;
       }
       //cout<<v<<endl<<cn<<endl;
       ll R=min(cn,v);
       v=0;
       cn=0;
       cout<<R<<endl;
    }





return 0;
}

