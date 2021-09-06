#include <bits/stdc++.h>
using namespace std;

vector <int> graph[1000];

void BFS(int source)
{
    bool visited[1000]={0};
    queue <int> Q;
    Q.push(source);
    visited[source]=1;
    while(!Q.empty())
    {
        int u=Q.front();
        Q.pop();
        for(int i=0;i<graph[u].size();i++)
        {
            int v=graph[u][i];
            if(visited[v]==0)
            {
                Q.push(v);
                visited[v]=1;
                cout<<"visited "<<v<<endl;
            }
        }
    }
}

int main()
{
    int source,node,edge,x,y;
    cout<<"nodes ";
    cin>>node;
    cout<<"edges ";
    cin>>edge;
    for(int i=0;i<edge;i++)
    {
        cin>>x>>y;
        graph[x].push_back(y);
    }
    cout<<"Source ";
    cin>>source;
    BFS(source);
    for(int i=0;i<node ;i++)
    {
        graph[i].clear();
    }
    return 0;
}
