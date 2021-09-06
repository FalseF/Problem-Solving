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


vector <int> G[20000];

vector <int> Paths[20000];

int V=0;

int Mark[20000],path[2000];

bool BFS(int S,int D)
{
    queue<int> Q; Q.push(S);
    int visited[20000]={0};
    visited[S]=1;

    while(!Q.empty())
    {
        int U=Q.front(); Q.pop();

        for(int i=0;i<G[U].size();i++)
        {
            int V=G[U][i];

            if(Mark[V]==1) continue;

            if(visited[V]==0)
            {
                visited[V]=1;
                Q.push(V);
                path[V]=U;
                if(V==D)
                {
                    Mark[U]=1;
                    return true;
                }
            }
        }
    }

    return false;
}

void savepath(int S,int T)
{
    if(S==T)
    {
        Paths[V].pb(S);
        return;
    }
    savepath(path[S],T);
    Paths[V].pb(S);
}

int main()
{

    freopen("input.txt","r",stdin);

    FastIO();

    int N,E;

    cin>>N>>E;

    int X,Y;

    for(int i=1;i<=E;i++)
    {
        cin>>X>>Y;
        G[X].pb(Y);
        G[Y].pb(X);
    }

    int source,dest;

    cin>>source>>dest;

    for(int i=1;i<N;i++)
    {
        bool X= BFS(source,dest);
        if(X==true)
        {
            V++;
            savepath(dest,source);
        }
    }

    for(int i=1;i<=V;i++)
    {
        cout<<i<<" --> ";
        for(int j=0;j<Paths[i].size();j++)
        {
            cout<<Paths[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
