#include <bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("input.txt","r",stdin);

    vector <int> V[1000];
    vector <int> :: iterator it;
    int nodes,edges,x,y;
    cin>>nodes>>edges;
    for(int i=1;i<=edges;i++)
    {
        cin>>x>>y;
        V[x].push_back(y);
        V[y].push_back(x);
    }
    cout<<endl;
    for(int i=1;i<=nodes;i++)
    {
        cout<<i<<"-> ";
        for(it=V[i].begin();it!=V[i].end();it++)
            cout<<*it<< " ";
        cout<<endl;
    }
}
