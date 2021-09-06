#include <bits/stdc++.h>
using namespace std;

vector <int> graph[10000];
int cost[1000][1000];
int Dstance[10000];

void dijkstra(int source)
{
    for(int i=0;i<10000;i++) Dstance[i]=INT_MAX;

    Dstance[source]=0;
    queue<int> Q;
    Q.push(source);

    while(!Q.empty())
    {
        int u=Q.front();
        Q.pop();

        for(int i=0;i<graph[u].size();i++)
        {
            int v=graph[u][i];
            if(Dstance[u]+cost[u][v] < Dstance[v])
            {
                Dstance[v]=Dstance[u]+cost[u][v];
                Q.push(v);
                cout<<"visited "<<v<<" distance "<<Dstance[v]<<endl;
            }
        }
    }
}

int main()
{
    int node,edge,u,v,w;

    cin>>node>>edge;
    for(int i=0;i<edge;i++)
    {
        cin>>u>>v>>w;
        graph[u].push_back(v);
        graph[v].push_back(u);
        cost[u][v]=w;
        cost[v][u]=w;
    }
    int source;
    cin>>source;
    dijkstra(source);
}
