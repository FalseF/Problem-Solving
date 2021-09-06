#include <bits/stdc++.h>
using namespace std;

vector <int> A[1000];
vector <int> :: iterator it;

void BFS(int source)
{
    bool visited[100]={0};

    queue <int> Q;
    Q.push(source);
    visited[source]=true;
    while(!Q.empty())
    {
        int u=Q.front();
        Q.pop();
        for(int i=0;i<A[u].size();i++)
        {
            int v=A[u][i];
            if(visited[v]==0)
            {
                visited[v]=1;
                Q.push(v);
                cout<<"visited "<<v<<endl;
            }
        }

    }
}

int main()
{
    int nodes,edges,x,y;
    cin>>nodes>>edges;

    for(int i=1;i<=edges;i++)
    {
        cin>>x>>y;
        A[x].push_back(y);
        A[y].push_back(x);
    }
    BFS(1);




}
