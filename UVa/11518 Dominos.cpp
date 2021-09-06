#include<bits/stdc++.h>
using namespace std;
map<int,vector<int> >G;

int visited[10004];

int A[10002];

int c;

void dfs(int s)
{


    visited[s]=1;
       c++;

        for(int i=0;i<G[s].size();i++)
        {
            int v=G[s][i];

            if(visited[v]==0)
            {
               dfs(v);
            }
        }
    }



int main()
{
    int N,a,b,t;

    cin>>t;
    while(t--){

        cin>>N>>a>>b;

        memset(visited,0,sizeof(visited));
        c=0;

        G.clear();

        int u,v;

        for(int i=0;i<a;i++)
        {
            cin>>u>>v;

           G[u].push_back(v);
        }

        int x,R=0;
        for(int i=0;i<b;i++)
        {
            cin>>x;
            if(visited[x]==0)
            {
               dfs(x);
            }

         }

        cout<<c<<endl;




    }
}





