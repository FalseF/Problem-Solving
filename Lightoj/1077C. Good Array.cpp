#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define INF 100000000000000000
#define pb push_back
#define mp make_pair
///cin.ignore();
ll max(ll a,ll b) {if(a>b) return a; else return b;} ll min(ll a,ll b) {if(a<b) return a; else return b;} ll pow(ll B,ll P) { ll S=1; for(ll i=1;i<=P;i++) S=S*B; return S;} ll fx4[]={1,-1,0,0}; ll fy4[]={0,0,1,-1};

ll A[200005];
ll S[200005];

int main()
{
///use always ll instead of int
//sieve();

ll T,N,M,X,Y,W;

vector< pair<int,int> > V;

cin>>N;

ll sum=0; ll MAX=0;

set<int> ss;

for(int i=1;i<=N;i++)
{
cin>>A[i]; sum+=A[i]; MAX=max(MAX,A[i]); ss.insert(A[i]);
V.pb(mp(A[i],i));
}

sort(V.begin(),V.end());

vector<int> I;

for(int i=0;i<N;i++) S[i+1]=S[i]+V[i].first;

for(int i=0;i<N;i++)
{
if(i==N-1)
{
X=S[N-1]-S[N-2];

//cout<<X<<" "<<S[N-2]<<endl;

if(S[N-2]==X) I.pb(V[i].second);
continue;
}

X=S[N-1]-V[i].first;

if(S[N]-S[N-1]==X) I.pb(V[i].second);
}

cout<<I.size()<<endl;

for(int i=0;i<I.size();i++) cout<<I[i]<<" "; cout<<endl;

return 0;
}
