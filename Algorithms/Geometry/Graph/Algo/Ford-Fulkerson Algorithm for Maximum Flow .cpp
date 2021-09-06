#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll cost1[1000][1000];
vector<ll>G1[100000];
vector<ll>G2[100000];
ll visited[10000];
ll parent[10000];
bool bfs(ll s, ll t)
{
    memset(visited,0,sizeof(visited));
    parent[s]=-1;
    visited[s]=1;
    queue<ll>q;
    q.push(s);
    while(!q.empty())
    {
        ll u=q.front();
        q.pop();
        for(ll i=0;i<G1[u].size();i++)
        {
            ll v=G1[u][i];

            if(visited[v]==0 && cost1[u][v]>0)
            {
                visited[v]=1;
                parent[v]=u;
                q.push(v);
            }
        if(visited[t]==1) return true;
        }
    }
    return false;
}
ll ford_fulkerson(ll s, ll t)
{

    ll max_flow=0;

    while(bfs(s,t))
    {
        ll path_flow=9999999999;

        for(ll i=t;i!=s;i=parent[i])
        {
            ll u=parent[i];
            path_flow=min(path_flow,cost1[u][i]);


        }


           for(ll i=t;i!=s;i=parent[i])
        {
            ll u=parent[i];
            cost1[u][i]-=path_flow;
            cost1[i][u]+=path_flow;

            //cout<<u<<" "<<i<<" baki ache "<<cost1[u][i]<<"  ulta edge baki ache "<<cost1[i][u]<<" flow hoiche "<<path_flow<<endl;

        }

        max_flow+=path_flow;

    }

    return max_flow;
}

int main()
{
    ll N,E,u,v,w;
    cin>>N>>E;
    for(ll i=1;i<=E;i++)
    {
        cin>>u>>v>>w;
        G1[u].push_back(v);
        cost1[u][v]=w;

    }

    cout<<ford_fulkerson(0,5)<<endl;
}
