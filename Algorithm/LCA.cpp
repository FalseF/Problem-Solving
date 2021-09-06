#include <bits/stdc++.h>
using namespace std;
int parent[1000];
int main()
{
    int m;
    cin>>m;
    int u,v;
    for(int i=0;i<m;i++)
    {
        cin>>u>>v;
        parent[v]=u;
    }
}
