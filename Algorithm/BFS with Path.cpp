#include <bits/stdc++.h>
using namespace std;

vector <int> graph[1000];

int level[1000];
int path[1000];
void BFS(int source)
{
    bool visited[1000]={0};



    queue <int> Q;

    Q.push(source);

    visited[source]=true;


    level[source]=0;
    while(!Q.empty())
    {
        int u=Q.front();

        Q.pop();

        for(int i=0;i<graph[u].size();i++)
        {
            int v=graph[u][i];

            if(visited[v]==0)
            {
                path[v]=u;
                visited[v]=1;
                Q.push(v);
                level[v]=level[u]+1;
                //cout<<"Visited "<<v<<endl;
            }
        }
    }
}

int main()
{

    //freopen("1.txt","r",stdin);

    int source,node,edge,x,y;
    cout<<"Nodes ";
    cin>>node;
    cout<<"Edges ";
    cin>>edge;
    for(int i=0;i<edge;i++)
    {
        cin>>x>>y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }
    int destination;
    cout<<"Enter Source ";
    cin>>source;
    cout<<"destination ";
    cin>>destination;
    BFS(source);

    cout<<"distance from 1 to "<<destination<<" "<<level[destination]<<endl;

    for(int i=0;i<node;i++)
    {
        graph[i].clear();
    }

    for(int i=1;i<=node;i++)
        cout<<path[i]<<" ";

    return 0;
}
