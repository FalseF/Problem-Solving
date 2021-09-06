#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cout<<"Enter nodes number:  ";
    cin>>n;
    cout<<"Enter Edges: ";
    cin>>m;

    int matrix[100][100];
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=m;j++)
        {
            matrix[i][j]=0;
        }
    }
    int x,y;
    for(int i=1;i<=m;i++)
    {
            cin>>x>>y;
            matrix[x][y]=1;
            matrix[y][x]=1;
    }
    int A[100];
    vector <int> B[100];
    vector <int> :: iterator it;

    vector <int> Count;
    vector <int> :: iterator it1;
    for(int i=1;i<=n;i++)
    {
        int C=0;
        for(int j=1;j<=n;j++)
        {
            if(matrix[i][j]==1)
            {
                C++;
                B[i].push_back(j);
                A[i]++;
            }
        }
        //cout<<C<<endl;
        Count.push_back(C);
    }
    for(int i=1;i<=n;i++){
        //cout<<"Connection "<<i<<" numbers of Connection "<<A[i]<<endl;
        cout<<endl<<"Connection "<<i<<" -> ";
        for(it=B[i].begin();it!=B[i].end();it++)
            cout<<*it<<" ";
        cout<<endl;

        cout<<"Degree "<<Count[i-1]<<endl;
    }


}
