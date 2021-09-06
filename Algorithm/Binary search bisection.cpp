#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define INF 100000000000000000
#define pb push_back
#define mp make_pair
///cin.ignore();
void FastIO() {ios_base:: sync_with_stdio(false); cin.tie(0); cout.precision(20);}
ll max(ll a,ll b) {if(a>b) return a; else return b;}
ll min(ll a,ll b) {if(a<b) return a; else return b;}
ll pow(ll B,ll P) { ll S=1; for(ll i=1;i<=P;i++) S=S*B; return S;}
int fx4[]={1,-1,0,0}; int fy4[]={0,0,1,-1};

double mysqrt(double N)
{
    double L=0.0;
    double H=N;
    double M;

    while(H-L>.0001)
    {
        M=(H+L)/2.0;

        if(M*M==N) return M;

        if(M*M>N)
            H=M;
        else if(M*M<N) L=M;
    }
    return M;
}

int main()
{
    FastIO();

    double X;

    while(cin>>X)
    {
        double N=mysqrt(X);
        printf("%.3f\n",N);
    }

    return 0;
}
