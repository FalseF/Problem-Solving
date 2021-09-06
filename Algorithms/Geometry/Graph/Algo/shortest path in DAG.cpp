#include <bits/stdc++.h>
using namespace std;

int N,M,X,Y,S;

map<int, vector<int> > G;

map<int,int> Mark;

stack<int> st;

map<int,int> Dist;

void DFS(int U)
{
    Mark[U]=1;

    for(int i=0;i<G[U].size();i++)
    {
        int V=G[U][i];

        if(!Mark[V])
        {
            Mark[V]=1;
            DFS(V);
        }
    }
    st.push(U);
}

int main()
{
    cin>>N>>M;

    for(int i=1;i<=N;i++) Dist[i]=INT_MAX;

    for(int i=1;i<=M;i++)
    {
        cin>>X>>Y;
        G[X].push_back(Y);
    }

    cin>>S;

    DFS(S);

    while(!st.empty())
    {
        int U=st.top(); st.pop();

        for(int i=0;i<G[U].size();i++)
        {
            int V=G[U][i];

            Dist[V]=min(Dist[V],Dist[U]+1);
        }
    }

   for(int i=1;i<=N;i++) cout<<Dist[i]<<" ";
}
