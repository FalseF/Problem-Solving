#include<bits/stdc++.h>
using namespace std;

map<int, vector<int> >G;

int visited[1000];

int c=0;

void bfs(int s)
{
    c=0;

    queue<int>Q;

    memset(visited,0,sizeof(visited));

    Q.push(s);

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

                c++;

                Q.push(v);
            }
        }
    }
}

void printans(int s,int N)
{
    bfs(s);

    int R=N-c;

    cout<<R;
    c=0;

    for(int i=1;i<=N;i++)
    {
       if(visited[i]==0) cout<<" "<<i;
    }

    cout<<endl;
}

int main()
{
    int N,a,b;

    while(cin>>N)
    {
        if(N==0)
        {
            return 0;
        }

        while(cin>>a)
        {
            if(a==0) break;

               while(cin>>b)
               {
                    if(b==0) break;

                G[a].push_back(b);
               }


        }
        int E,v;

        cin>>E;

        for(int i=0;i<E;i++)
        {
            cin>>v;

            printans(v,N);
        }
        G.clear();

    }
}




