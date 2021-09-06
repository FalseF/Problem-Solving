#include<bits/stdc++.h>
using namespace std;
#define WRITE(f) freopen(f,"w",stdout)
vector<int>G[350];
int parent[350];
void bfs(int s, int d)
{
    if(s==d) {printf("%d",s);return;}
    for(int i=0;i<305;i++) parent[i]=-1;
    queue<int>Q;
    Q.push(s);
    while(!Q.empty())
    {
        int u=Q.front();
        Q.pop();
        for(int i=0;i<G[u].size();i++)

        {
            int v=G[u][i];
            if(parent[v]==-1)
            {
                parent[v]=u;
                Q.push(v);
            }
        }
    }

    if(parent[d]==-1) {
        printf("connection impossible\n");
    }
    else{

        int n=d;
        stack<int>ans;
        while(n!=s)
        {
            ans.push(n);
            n=parent[n];

        }

        printf("%d",s);
        while(!ans.empty())
        {
            int u=ans.top();
            ans.pop();
            printf(" %d\n",u);
        }
        printf("\n");
    }


}

int main()
{
    //WRITE("1.txt");

    printf er jagay sob cin cout hobe na hpy tle hobe

    int t;
    char ch;
    while(scanf("%d",&t))
    {
        for(int i=0;i<305;i++) G[i].clear();
        for(int i=1;i<=t;i++)
        {
            string s;
            int u;
            scanf("%d",&u);
            getline(cin,s);
            stringstream ss(s);
            int v;
            while(ss >> ch >> v)
            {
                G[u].push_back(v);
            }

        }

        int e;
        printf("-----\n");
        scanf("%d",&e);
        while(e--)
        {
            int s,d;
            scanf("%d%d",&s,&d);
            bfs(s,d);
        }
    }
}




