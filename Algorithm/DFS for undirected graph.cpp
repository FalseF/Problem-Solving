#include <bits/stdc++.h>
using namespace std;

vector <int> graph[1000];

void DFS(int source)
{
    int visited[1000]={0};

    stack <int> S;

    visited[source]=1;

    S.push(source);
    int v;
    bool check=false;

    while(!S.empty())
    {
        int u=S.top();
        //S.pop();
        //cout<<"parent "<<u<<endl;
        check=false;
        for(int i=0;i<graph[u].size();i++)
        {
            v=graph[u][i];
            //cout<<"v "<<v<<endl;
            if(visited[v]==0)
            {
                cout<<"visited "<<v<<endl;
                check=true;
                visited[v]=1;
                S.push(v);
                break;
            }

            //if(visited[v]!=0)
                //check=false;

            if(visited[v]!=0 && check==false)
            {
                visited[v]=2;
                S.pop();
            }
        }


    }
}

int main()
{
    freopen("input.txt","r",stdin);

    int node,edge,x,y;
    cin>>node>>edge;
    for(int i=1;i<=edge;i++)
    {
        cin>>x>>y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }
    int source;
    cin>>source;
    DFS(source);
    return 0;
}
