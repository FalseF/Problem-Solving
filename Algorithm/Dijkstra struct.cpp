#include <bits/stdc++.h>
using namespace std;
#define MAX INT_MAX
struct edge
{
    int A;
    int C;
    edge(int a,int b)
    {
        A=a;
        C=b;
    }
};

bool descending(int a,int b)
{
    return a>b;
}

vector <edge> graph[10000];
int dis[100000];

int dijkstra(int source)
{

    dis[source]=0;

    queue <int> Q;
    Q.push(source);

    while(!Q.empty())
    {
        int u=Q.front();
        Q.pop();
        for(int i=0;i<graph[u].size();i++)
        {
            int v=graph[u][i].A;

            if(dis[u]+graph[u][i].C <dis[v])
            {
                Q.push(v);
                dis[v]=dis[u]+graph[u][i].C;
            }

        }
    }

}


int main()
{
    for(int i=0;i<100000;i++) dis[i]=MAX;

    int node,edge,u,v,w;
    cin>>node>>edge;
    for(int i=0;i<edge;i++)
    {
        cin>>u>>v>>w;
        graph[u].push_back(edge(v,w));
        graph[v].push_back(edge(u,w));
    }

  
    dijkstra(0);

    for(int i=0;i<node;i++) cout<<dis[i]<<endl;


}
