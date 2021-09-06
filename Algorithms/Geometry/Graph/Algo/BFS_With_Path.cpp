#include<bits/stdc++.h>
using namespace std;
vector <int> G[1000];
int visited[300003];
int level[20000];
int path[10000];
void BFS(int source,int d)
{
    visited[source]=1;
    queue<int>Q;
    level[source]=0;
    Q.push(source);
    while(!Q.empty())
    {
        int u=Q.front();
        Q.pop();
        for(int i=0;i<G[u].size();i++)
        {
            int v=G[u][i];
            if(visited[v]==0)
            {
                visited[v]=1;
                path[v]=u;
               // cout<<path[v]<<endl;
                level[v]=level[u]+1;
                if(visited[d]==1) break;
                Q.push(v);
            }
        }
    }

}
void PrintPath(int d,int s){
    if(s==d){printf("%d",s); return;}
    PrintPath(path[d],s);
    printf(" %d",d);
}
int main()
{
    int N,E,u,v;
    cin>>N>>E;
    for(int i=1;i<=E;i++)
    {
        cin>>u>>v;
        G[u].push_back(v);
        G[v].push_back(u);
    }
    BFS(1,N);

   PrintPath(N,1);
    //cout<<"shortest path " <<level[dis]<<endl;
    // dist level[dist]
}
