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

vector <int> graph[20000];

int indegree[20000];

vector <int> sorted;

void topologicalsort(int N)
{
    queue<int> Q;

    for(int i=1;i<=N;i++)
    {
        if(indegree[i]==0) Q.push(i);
    }

    while(!Q.empty())
    {
        int U=Q.front(); Q.pop();

        sorted.pb(U);

        for(int i=0;i<graph[U].size();i++)
        {
            int V=graph[U][i];

            if(indegree[V]>0) indegree[V]--;

            if(indegree[V]==0) Q.push(V);
        }

    }

}

int main()
{
    FastIO();

    int N,M;

    cin>>N>>M;

    int X,Y;

    for(int i=1;i<=M;i++)
    {
        cin>>X>>Y;
        graph[X].pb(Y);
        indegree[Y]++;
    }

    topologicalsort(N);

    for(int i=0;i<N;i++) cout<<sorted[i]<<" "; cout<<endl;

    return 0;
}
