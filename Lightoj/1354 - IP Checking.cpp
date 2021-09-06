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

    ll ck=0,n,m,a,b,T,c=0,s=0;
    ll n1,n2,n3,n4,n5,n6,n7,n8;
    string S,S1;
    scanf("%lld",&T);
    for(ll i=1;i<=T;i++)
    {
       cin>>S>>S1;
       for(ll k=0;k<S.length();k++)
       {
           if(S[k]=='.')
           {c++;
            if(c==1) {n1=s;s=0;}
           else if(c==2) {n2=s;s=0;}
           else if(c==3) {n3=s;s=0;}
           continue;}
           s=s*10+S[k]-'0';

       }
       n4=s;
       s=0;
       c=0;
       b=1;
       for(ll k=S1.length()-1;k>=0;k--)
       {
            if(S1[k]=='.')
           {c++;
            if(c==1) {n5=s;s=0;}
           else if(c==2) {n6=s;s=0;}
           else if(c==3) {n7=s;s=0;}
           b=1;
           continue;}

           a=S1[k]-'0';
           s+=a*b;
           b=b*2;
       }
       n8=s;
//       cout<<n1<<" "<<n2<<" "<<n3<<" "<<n4<<endl;
//       cout<<n5<<" "<<n6<<" "<<n7<<" "<<n8<<endl;
       if((n1==n8) && (n2==n7) && (n3==n6) && (n4==n5)){printf("Case %lld: Yes\n",i);}
       else {printf("Case %lld: No\n",i);}
       c=0;s=0;b=1;
    }





return 0;
}

