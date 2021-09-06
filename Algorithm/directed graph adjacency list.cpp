#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define MAX 100000
int main()
{
    freopen("input.txt","r",stdin);
    int nodes,edges,x,y;
    cin>>nodes>>edges;
    vector <int> V[1000];
    vector <int> :: iterator it;

    int indegree[edges],outdegree[edges];
    memset(indegree,0,sizeof(indegree));
    memset(outdegree,0,sizeof(outdegree));

    for(int i=1;i<=edges;i++)
    {
        cin>>x>>y;
        V[x].push_back(y);
        indegree[y]++;
        outdegree[x]++;
    }
    for(int i=1;i<=nodes;i++)
    {
        cout<<i<<" -> ";
        for(it=V[i].begin();it!=V[i].end();it++)
            cout<<*it<<" ";
        cout<<endl;

    }
    for(int i=1;i<=nodes;i++)
    {
        cout<<"indegree of "<<i<<" is "<<indegree[i]<<endl<<endl;
        cout<<"outdegree of "<<i<<" is "<<outdegree[i]<<endl<<endl;
    }
    return 0;
}
