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

vector <int> D[100000];

void Divisors(int N)
{
    for(int i=1;i<=N;i++)
    {
        for(int j=i;j<=N;j+=i)
            D[j].pb(i);
    }
}

int main()
{
    FastIO();

    int N;

    cin>>N;

    Divisors(N);

    for(int i=1;i<=N;i++)
    {
        cout<<i<<" --> ";
        for(int j=0;j<D[i].size();j++) cout<<D[i][j]<<" "; cout<<endl;
    }

    return 0;
}
