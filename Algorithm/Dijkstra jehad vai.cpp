#include <bits/stdc++.h>
using namespace std;

struct edges
{
    int N;
    int W;
    edges(int a,int b)
    {
        N=a;
        W=b;
    }
};

vector <edges> graph[1000];

struct nodes
{
    int pos;
    int cost;
    nodes (int a,int b)
    {
        pos=a;
        cost=b;
    }
};

bool operator <(nodes A,nodes B)
{
    return A.cost>B.cost;
}

int dist[1000];

void dijkstra(int source)
{
    for(int i=0;i<1000;i++) dist[i]=INT_MAX;

    priority_queue <nodes> Q;
    Q.push(nodes(source,0));
    dist[source]=0;

    while(!Q.empty())
    {
        nodes u=Q.top();
        Q.pop();

        for(int i=0;i<graph[u.pos].size();i++)
        {
            edges v=graph[u.pos][i];

            if((u.cost+v.W) < dist[v.N])
            {
                dist[v.N]=(u.cost+v.W);

                Q.push(nodes(v.N,dist[v.N]));

                cout<<"Visited "<<v.N<<" distance "<<dist[v.N]<<endl;
            }
        }
    }
}

int main()
{
    int N,E,u,v,w;
    cin>>N>>E;
    for(int i=0;i<E;i++)
    {
        cin>>u>>v>>w;
        graph[u].push_back(edges(v,w));
        graph[v].push_back(edges(u,w));
    }
    cin>>v;

    dijkstra(v);
    for(int i=1;i<=N;i++) cout<<dist[i]<<endl;

    return 0;
}
