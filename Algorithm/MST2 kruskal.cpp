#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define INF 10000000000000000
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

vector <edge> E;

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
    if(Parent[r]==r) return r;
    else return Parent[r]=Find(Parent[r]);
}

vector <edge> mst;

int Kruskal(int M)
{
    sort(E.begin(),E.end(),sohag);

    int ans=0;

    for(int i=0;i<M;i++)
    {
        int X=E[i].U; int Y=E[i].V; int Cost=E[i].W;

        int PX=Find(X); int PY=Find(Y);

        if(PX!=PY)
        {
            ans+=Cost;
            Parent[PX]=PY;
            mst.push_back(edge(X,Y,Cost));
        }
    }
    return ans;
}

int Comp;

int Kruskal2(int M,int X1,int Y1)
{
    int ans=0;

    for(int i=0;i<M;i++)
    {
        int X=E[i].U; int Y=E[i].V; int Cost=E[i].W;

        if(X==X1 && Y==Y1) continue;

        int PX=Find(X); int PY=Find(Y);

        if(PX!=PY)
        {
            Parent[PX]=PY;
            ans+=Cost;
        }
    }
    return ans;
}

int main()
{
    FastIO();

   // freopen("input.txt","r",stdin);

    int N,M,X,Y,W,T;
    cin>>T;

    cin>>N>>M;

    INIT(N);

    for(int i=0;i<M;i++)
    {
        cin>>X>>Y>>W;
        E.push_back(edge(X,Y,W));
    }

    int ans1=Kruskal(M);
    int ans2=INT_MAX;
    for(int i=0;i<mst.size();i++)
    {
        int X=mst[i].U; int Y=mst[i].V;
        INIT(N);
        int MIN=Kruskal2(M,X,Y);
            ans2=min(ans2,MIN);

    }

    cout<<ans1<<" "<<ans2<<endl;

    return 0;
}
