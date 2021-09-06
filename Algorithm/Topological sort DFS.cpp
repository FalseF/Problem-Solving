#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

vector <int> graph[20000];

int D[10000],F[10000],visited[1000];

int Time=0;

stack <int> stck;

void DFS(int U)
{
    Time++;

    visited[U]=1;

    D[U]=Time;
    for(int i=0;i<graph[U].size();i++)
    {
        int V=graph[U][i];

        if(visited[V]==0) DFS(V);
    }
    stck.push(U);
    Time++;
    F[U]=Time;
}

int main()
{


    int N,M;

    cin>>N>>M;

    int X,Y;

    for(int i=1;i<=M;i++)
    {
        cin>>X>>Y;
        graph[X].push_back(Y);

        graph[Y].push_back(X);
    }

    DFS(1);

    for(int i=1;i<=N;i++) cout<<"node "<<i<<" Discovery Time "<<D[i]<<" Finishing Time "<<F[i]<<endl;

    cout<<"Topsort is  ";
    while(!stck.empty())
    {
        ll u=stck.top();

        stck.pop();

        cout<<u<<" ";
    }

    return 0;
}
