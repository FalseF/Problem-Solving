#include <bits/stdc++.h>
using namespace std;
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
vector <edge> graph[100000];

int dist[100000];

int path[10000];

void dijkstra(int source)
{
    for(int i=0;i<100000;i++) dist[i]=INT_MAX;

    queue <int> Q;

    dist[source]=0;

    Q.push(source);

    while(!Q.empty())
    {
        int parent=Q.front();

        Q.pop();

        for(int i=0;i<graph[parent].size();i++)
        {
            int child=graph[parent][i].V;

            if(dist[parent]+graph[parent][i].W < dist[child])
            {
                dist[child]=(dist[parent] + graph[parent][i].W);
                Q.push(child);
                path[child]=parent;
            }
        }
    }

}
void printPath(int s, int t)
{
    if(s==t){printf("%d",t); return;}
    printPath(path[s],t);
    printf(" %d",s);
}
int main()
{
    int testcase=1,N,u,v,w;
    int E;
    cin>>E;
    for(int i=1;i<=E;i++)
    {
        cin>>u>>v>>w;
        graph[u].push_back(edge(v,w));
        graph[v].push_back(edge(u,w));
    }
    int source,des;
    cin>>source>>des;
    dijkstra(source);
    cout<<dist[des]<<endl;
    printPath(des,source);

    //freopen("1.txt","r",stdin);
}
