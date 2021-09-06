#include<bits/stdc++.h>

using namespace std;

struct edge{

int U,V;

edge(int a,int b)
{
    U=a;V=b;
}

};

vector<edge>G;

bool fun(edge a, edge b)
{
    return a.U>b.U;
}

int main()
{
    int a,b,n;
    for(int i=1;i<=5;i++)
    {
        cin>>a>>b;

        G.push_back(edge(a,b));
    }
    sort(G.begin(),G.end(),fun);
    for(int i=0;i<5;i++)
    {
        int u=G[i].U;
        int v=G[i].V;

        cout<<u<<" "<<v<<endl;
    }
}
