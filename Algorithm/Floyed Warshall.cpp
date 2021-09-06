#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll min(ll a, ll b)
{
    if(a<b)
        return a;
    return b;
}
ll N;
ll graph[1000][1000];
ll dist[1000][1000];

void FW()
{
    for(ll k=1;k<=N;k++)
    {
        for(ll i=1;i<=N;i++)
        {
            for(ll j=1;j<=N;j++)
            {
                if(i==j) continue;

                graph[i][j]=min(graph[i][j],graph[i][k]+graph[k][j]);
            }
        }
    }
}


//void FW()
//{
//    for(ll i=1;i<=N;i++)
//    {
//        for(ll j=1;j<=N;j++)
//        {
//            for(ll k=1;k<=N;k++)
//            {
//                if(i==j) continue;
//
//                graph[i][j]=min(graph[i][j],graph[i][k]+graph[k][j]);
//            }
//        }
//    }
//}

int main()
{

    freopen("1.txt","r",stdin);

    for(ll i=0;i<1000;i++)
    {
        for(ll j=0;j<1000;j++)
        {
            if(i==j) graph[i][j]=0;

            else graph[i][j]=INT_MAX;
        }
    }

    ll E;

    cin>>N>>E;

    ll u,v,w;

    for(ll i=0;i<E;i++)
    {
        cin>>u>>v>>w;
        graph[u][v]=w;
        //graph[v][u]=w;
    }

    FW();
    //FW();

    ll S,D;
    for(ll i=1;i<=N;i++)
    {
        for(ll j=1;j<=N;j++)
        {
            cout<<i<<" to "<<j<<" "<<graph[i][j]<<endl;
        }
    }

}
