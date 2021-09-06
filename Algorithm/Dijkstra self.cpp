#include <bits/stdc++.h>
using namespace std;
#define MAX 10000
struct edge
{
    int V;
    int W;
    edge(int a,int b)
    {
        V=a;
        W=b;
    }
};

vector <edge> graph[MAX];

int dist[MAX];

void dijkstra(int source)
{
    for(int i=0;i<MAX;i++) dist[i]=INT_MAX;

    dist[source]=0;

    queue<int> Q;
    Q.push(source);

    while(!Q.empty())
    {
        int parent=Q.front();

        Q.pop();

        for(int i=0;i<graph[parent].size();i++)
        {
            int child=graph[parent][i].V;

            if(dist[parent] + graph[parent][i].W < dist[child])
            {
                dist[child]=dist[parent] + graph[parent][i].W;
                Q.push(child);
                cout<<"visited "<<child<< " distance "<<dist[child]<<endl;
            }
        }
    }
}

int main()
{
    int E;
    cin>>E;
    int u,v,w;
    for(int i=1;i<=E;i++)
    {
        cin>>u>>v>>w;
        graph[u].push_back(edge(v,w));
        graph[v].push_back(edge(u,w));
    }
    dijkstra(1);
}
