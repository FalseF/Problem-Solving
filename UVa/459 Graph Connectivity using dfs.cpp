#include<bits/stdc++.h>

using namespace std;

int visited[10000];

vector<int>G[10000];

void dfs(int s)
{
    visited[s]=1;

    for(int i=0;i<G[s].size();i++)
    {
        int v=G[s][i];
        if(visited[v]==0)
        {
            visited[v]=1;
            dfs(v);
        }
    }
}


int  main()

{
    int t,u,v;

    char ch,S[100];

    scanf("%d",&t);
    getchar();
    getchar();

    for(int i=1;i<=t;i++)
    {
        scanf("%c",&ch);
        getchar();

        int n=ch-'A'+1;

        int ans=0;

        while(gets(S))
        {
            if(S[0]=='\0') break;

            u=S[0]-'A'+1;

            v=S[1]-'A'+1;

            G[u].push_back(v);

            G[v].push_back(u);
        }

        for(int j=1;j<=n;j++)
        {
            if(visited[j]==0)
            {
                ans++;
                dfs(j);

            }
        }

        if(i!=1) printf("\n");

        printf("%d\n",ans);

        memset(visited,0,sizeof(visited));

        for(int k=1;k<=n;k++) G[k].clear();


    }
}
