#include<bits/stdc++.h>
// Readul Islam Sohag
using namespace std;

typedef long long ll;

ll cost[1004][1004];

ll path[1003][1003];

void  all_shortestpath(ll N)

{
    for(ll k=1;k<=N;k++)
    {
        for(ll i=1;i<=N;i++)
        {
            for(ll j=1;j<=N;j++)
            {

                //if(i==j) {path[i][j]=0;cost[i][j]=0;} continue;
                if(cost[i][k]+cost[k][j]<cost[i][j])

                {
                    cost[i][j]=cost[i][k]+cost[k][j];
                    path[i][j]=path[k][j];

                    //cout<<cost[i][j];
                }
            }
        }
    }
}
//void print_path_fun(ll s, ll d)
//{
//    if(path[s][d]==s) return;
//    print_path_fun(s,path[s][d]);
//    cout<<path[s][d]<<" ";
//}

//void print_path(ll N)
//{
//
//    for(ll i=1;i<=N;i++)
//    {
//
//        for(ll j=1;j<=N;j++)
//        {
//          if(path[i][j]!=-1 && i!=j)print_path_fun(i,j);
//        }
//        cout<<endl;
//    }
//}

void print_cost(int N)
{

    for(ll i=1;i<=N;i++)
    {

        for(ll j=1;j<=N;j++)
        {
            cout<<cost[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    ll E,u,v,N,c;

    cin>>N>>E;

    for(ll i=1;i<=100;i++)
    {
        for(ll j=1;j<=100;j++)
        {


           if(i!=j)
           {
               cost[i][j]=INT_MAX;
               path[i][j]=-1;
           }
        }
    }

    for(ll i=1;i<=E;i++)
    {
        cin>>u>>v>>c;

        path[u][v]=u;

        cost[u][v]=c;
    }

    all_shortestpath(N);

    print_cost(N);

   // print_path(N);

}
