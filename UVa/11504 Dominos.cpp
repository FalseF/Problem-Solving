#include<bits/stdc++.h>
using namespace std;
map<int,vector<int> >G;

int visited[100004];

int A[100002];

int c=0;

void dfs(int s)
{

      visited[s]=1;

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

    set<int>S;
    set<int>:: iterator it;

    cin>>t;
    while(t--){

        cin>>N>>a;

        memset(visited,0,sizeof(visited));

        c=0;

        G.clear();

        int u,v;

        for(int i=0;i<a;i++)
        {
            cin>>u>>v;
            S.insert(u);
            S.insert(v);

            A[i]=u;

           G[u].push_back(v);
        }

        int ans=N-S.size();

        for(int i=0;i<a;i++)
        {

            if(visited[A[i]]==0)
            {
                c++;
               dfs(A[i]);
            }

         }
         int R=ans+c;

         S.clear();



        cout<<R<<endl;




    }
}






