#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
ll max(ll x,ll y) {if(x>y) return x; else return y;}
ll min(ll x,ll y) {if(x<y) return x; else return y;}
int main()
{
    //freopen("2.txt","r",stdin);
    ll n,m,a,b,ck=0,s=0;
    string S,S1,S3,S4,S5,R;
    while(cin>>S3){
            ck=0;
    for(ll i=0;i<S3.length();i++)
    {
        if(S3[i]==','){ ck=1; continue;}
        if(ck==1)
        {
            S1+=S3[i];
        }
        else S+=S3[i];
    }
    ll l1=S.length()-1;
    ll l2=S1.length()-1;
//    ll f1=S[0]-'0',d1=S[l1]-'0',d2=S1[l2]-'0',f2=S1[0]-'0';
//    if(f1<d1){reverse(S.begin(),S.end());}
//    if(f2<d2){reverse(S1.begin(),S1.end());}
   // cout<<S<<endl<<S1<<endl;
    ll mn=min(l1,l2);
    if(l1<l2)
    {
        for(ll i=l1+1;i<=l2;i++)
        {
            S[i]='0';
        }
    }
    else if(l2<l1)
    {
        for(ll i=l2+1;i<=l1;i++)
        {
            S1[i]='0';
        }
    }
    ll cary=0;
    for(ll i=0;i<=max(l1,l2);i++)
    {
        ll d1=S[i]-48;
        ll d2=S1[i]-48;
        ll r=(d1+d2+cary)%10;
        if(i==0 && r==0) {cary=1;continue;}
         R+=r+48;
        cary=(d1+d2)/10;
    }
    if(cary) R+=cary+48;
    cout<<R<<endl;
    S.clear();
    S1.clear();
    R.clear();
    cary=0;
    }

return 0;
}

