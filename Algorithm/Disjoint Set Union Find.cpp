#include <bits/stdc++.h>
using namespace std;

int parent[1001];

void initialize()
{
    for(int i=1;i<=1000;i++) parent[i]=i;
}

int boss(int r)
{
    if(parent[r]==r) return r;
    //else return boss(parent[r]);
    parent[r]=boss(parent[r]);
    return parent[r];
}

void unionfind(int a,int b)
{
    int u=boss(a); cout<<"u "<<u<<endl;
    int v=boss(b); cout<<"v "<<v<<endl;

    if(u==v) cout<<"they are already friends"<<endl;

    else parent[u]=v;
}

int main()
{
    initialize();

    int E; cin>>E;
    int u,v;
    for(int i=0;i<E;i++)
    {
        cin>>u>>v; parent[v]=u;
    }

    unionfind(1,3);
}
