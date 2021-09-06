#include <bits/stdc++.h>
using namespace std;

struct connection
{
    int U;
    int V;
    int W;
    connection(int a,int b,int c)
    {
        U=a; V=b; W=c;
    }
};

vector <connection> G;

int dist[10000];
int node;
int edge;

int bellmanford(int source)
{
    for(int i=0;i<10000;i++) dist[i]=INT_MAX;

    dist[source]=0;

    for(int i=0;i<node-1;i++)
    {
        for(int j=0;j<edge;j++)
        {
            int u=G[j].U;
            int v=G[j].V;
            int w=G[j].W;

           // cout<<"u= "<<u<<" v= "<<v<<endl;

            if(dist[u]+w <dist[v]) dist[v]=dist[u]+w;
            //cout<<u<<" "<<v<<" dist "<<dist[v]<<endl;
        }
    }

    for(int i=0;i<edge;i++)
    {
        int u=G[i].U;
        int v=G[i].V;
        int w=G[i].W;
        if(dist[u]+w < dist[v])
            break;
    }

}

int main()
{
    cin>>node>>edge;

    int u,v,w;

    for(int i=0;i<edge;i++)
    {
        cin>>u>>v>>w;
        G.push_back(connection(u,v,w));
    }
    bellmanford(1);

    for(int i=1;i<=node;i++) cout<<dist[i]<<endl;

}
