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

struct edge{
    int U,V,W;
    edge(int a,int b,int c)
    {
        U=a; V=b; W=c;
    }
};

vector <edge> Edges;

bool sohag(edge a,edge b)
{
    return a.W<b.W;
}

int Parent[200005];

void INIT(int N)
{
    for(int i=1;i<=N;i++) Parent[i]=i;
}

int Find(int r)
{
    if(r==Parent[r]) return r;
    else return Parent[r]=Find(Parent[r]);
}

int ans;

void Kruskal(int E)
{
    sort(Edges.begin(),Edges.end(),faizul);

    //for(int i=0;i<E;i++) cout<<Edges[i].U<<" "<<Edges[i].V<<" "<<Edges[i].W<<endl;

    for(int i=0;i<E;i++)
    {
        int X=Edges[i].U; int Y=Edges[i].V; int Cost=Edges[i].W;

        int PX=Find(X); int PY=Find(Y);

        if(PX!=PY)
        {
            ans+=Cost;
            Parent[PX]=PY;
        }

    }

}

int main()
{

    freopen("input.txt","r",stdin);
    FastIO();

    int X,Y,W,N,E;

    cin>>N>>E;

    INIT(N);

    for(int i=1;i<=E;i++)
    {
        cin>>X>>Y>>W;

        Edges.pb(edge(X,Y,W));
    }

    Kruskal(E);

    cout<<ans<<endl;

    return 0;
}
