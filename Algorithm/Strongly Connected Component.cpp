///***Bismillahir Rahmanir Rahim***
///***Md Faizul Haque***///
///***University of Barisal***///

#include <cstdio>
#include <algorithm>
#include <cmath>
#include <vector>
#include <queue>
#include <stack>
#include <map>
#include <sstream>
#include<fstream>
#include <iostream>
#include <string>
#include <memory.h>
#include <set>
#include <time.h>
#include <assert.h>
#include <stack>
#include <sstream>
#include <algorithm>

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

///******************************************************************************///

vector <int> graph[2000];
vector <int> graph_R[2000];

int visited[200000];

stack<int> topsort;

void DFS(int U)
{
    visited[U]=1;

    for(int i=0;i<graph[U].size();i++)
    {
        int V=graph[U][i];

        if(visited[V]==0)
        {
            //cout<<"Parent "<<U<<" child "<<V<<endl;
            visited[V]=1;
            DFS(V);
        }
    }
    topsort.push(U);
}

int visited1[20000];

vector <int> comp[10000];

void DFS2(int U,int mark)
{
    comp[mark].pb(U);

    visited1[U]=1;

    for(int i=0;i<graph_R[U].size();i++)
    {
        int V=graph_R[U][i];
        if(visited1[V]==0)
        {
            cout<<"Parent "<<U<<" child "<<V<<endl;
            visited1[V]=1;
            DFS2(V,mark);
        }
    }
}

int SCC(int N)
{
    for(int i=1;i<=N;i++)
    {
        if(visited[i]==0)
        {
            visited[i]=1;
            DFS(i);
        }
    }

    int mark=0;

    while(!topsort.empty())
    {
        int U=topsort.top();
        topsort.pop();
        //cout<<U<<endl;
        if(visited1[U]==0)
        {
            mark++;
            DFS2(U,mark);
        }
    }
    return mark;

}

int main()
{
    FastIO();

    freopen("input.txt","r",stdin);

    int N,M;

    cin>>N>>M;
    int X,Y;

    for(int i=1;i<=M;i++)
    {
        cin>>X>>Y;
        graph[X].pb(Y);
        graph_R[Y].pb(X);
    }

    int C=SCC(N);

    for(int i=1;i<=C;i++)
    {
        cout<<"scc "<<i<<" ";
        for(int j=0;j<comp[i].size();j++)
            cout<<comp[i][j]<<" ";
        cout<<endl;
    }

    return 0;
}
