#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
ll max(ll x,ll y) {if(x>y) return x; else return y;}
ll min(ll x,ll y) {if(x<y) return x; else return y;}
ll pow(ll Base,ll Power) { ll S=1; for(ll i=1;i<=Power;i++) S=S*Base; return S;}
vector<ll>V;
ll visited[100002];
ll level[100002];
int fx4[]={1,-1,0,0}; int fy4[]={0,0,1,-1};
int main()
{

    ll ck=1,n,m,a,b,c=0,s=0;
    stack<ll>S;
    ll ar[]={1,1,2,6,24,120,720,5040,40320,362880,3628800,39916800,479001600,6227020800,87178291200,1307674368000,20922789888000,355687428096000,6402373705728000,121645100408832000,2432902008176640000};
    scanf("%lld",&n);
    for(ll i=1;i<=n;i++)
    {

        scanf("%lld",&a);
        ck=0;
        for(ll j=20;j>=0;j--)
        {
            if(ar[j]<=a)
            {
                a=a-ar[j];
                S.push(j);
            }
        }
        ck=0;
        if(a==0)
        {
            printf("Case %lld: ",i);
            while(S.size()!=0)
            {
                b=S.top();
                if(ck==0){printf("%lld!",b);}
                else printf("+%lld!",b);
                S.pop();
                ck=1;
            }
            printf("\n");
        }

        else {printf("Case %lld:",i);printf(" Impossible\n"); while(S.size()!=0){S.pop();}}

}





return 0;
}

