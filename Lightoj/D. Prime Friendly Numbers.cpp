#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back();
void FastIO() {ios_base:: sync_with_stdio(false); cin.tie(0); cout.precision(20);}
ll max(ll x,ll y) {if(x>y) return x; else return y;}
ll min(ll x,ll y) {if(x<y) return x; else return y;}
ll pow(ll Base,ll Power) { ll S=1; for(ll i=1;i<=Power;i++) S=S*Base; return S;}
ll ar[100005];
vector<ll>V;
ll visited[100002];
ll level[100002];
int fx4[]={1,-1,0,0}; int fy4[]={0,0,1,-1};
ll Digit(ll D)
{
    ll r,s=0;
    while(D!=0)
    {
        r=D%10;
        D=D/10;
        if(r==1 || r==4|| r==6 || r==8 || r==9){return -1;}

    }
    return 1;
}
ll C=0;
ll CK(ll D)
{
    ll S=1;
    ll R=D;
    while(D!=0)
    {
        D=D/10;
        S=S*10;
        C++;
    }
    S=S/10;
    return R/S;
}
int main()
{
    FastIO();
    ll T,N,M,R,N1,c=0;
    scanf("%lld",&T);
    for(ll i=1;i<=T;i++)
    {
        scanf("%lld",&N1);
        if(N1>=7 && N1<23){printf("Case %lld: 7\n",i);continue;}
        else if(N1<=6 && N1>=5){printf("Case %lld: 5\n",i);continue;}
        else if(N1<=4 && N1>=3){printf("Case %lld: 3\n",i);continue;}
        else if(N1==2){printf("Case %lld: 2\n",i);continue;}
        C=0;
        M=N1-1;
        R=CK(M);
        if(R==1)
        {
            N=7;
            for(ll j=1;j<=C-2;j++)
            {
                N=N*10+7;
            }

        }
        else if(R==8 || R==9|| R==7)
        {
            N=7;
            for(ll j=1;j<=C-1;j++)
            {
                N=N*10+7;
            }

        }
        else if(R==5 || R==6)
        {
            N=5;
            for(ll j=1;j<=C-1;j++)
            {
                N=N*10+7;
            }

        }
        else if(R==4 || R==3)
        {
            N=3;
            for(ll j=1;j<=C-1;j++)
            {
                N=N*10+7;
            }

        }
        else if(R==2)
        {
            N=2;
            for(ll j=1;j<=C-1;j++)
            {
                N=N*10+7;
            }

        }
        ll M1=N;
        while(1)
        {

            if(M1%2!=0 && M1%3!=0 && M1%5!=0 && M1%7!=0)
            {
                ll R1=Digit(M1);
                if(R1==1 && M1<=N1){printf("Case %lld: %lld\n",i,M1);break;}
                else if(R1==1 && M1>N1){M1=M1-4;continue;}

            }
            M1=M1-2;

        }


    }



return 0;
}

