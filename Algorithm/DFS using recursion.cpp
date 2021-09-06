#include <bits/stdc++.h>
using namespace std;

vector <int> graph[1000];
int visited[1000];
void DFS(int source)
{
    visited[source]=1;
    int u=source;
    for(int i=0;i<graph[u].size();i++)
    {
        int v=graph[u][i];
        if(visited[v]==0)
        {
            cout<<"visited "<<v<<" parent "<<u<<endl;
            DFS(v);
        }
    }
}

int main()
{
    //freopen("input.txt","r",stdin);

    int node,edge,x,y;
    cin>>node>>edge;
    for(int i=1;i<=edge;i++)
    {
        cin>>x>>y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }
    DFS(1);
    return 0;
}
