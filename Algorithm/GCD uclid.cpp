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

int gcd(int a,int b)
{
    if(a%b==0) return b;
    return gcd(b,a%b);
}

int main()
{
    FastIO();

    int A,B;

    while(cin>>A>>B)
    {
        cout<<gcd(A,B)<<endl;
    }

    return 0;
}
