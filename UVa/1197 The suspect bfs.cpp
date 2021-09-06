#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
ll visited[50000];
vector<ll>graph[50000];
ll bfs(ll s)
{
    queue<ll>q;
    q.push(s);
    visited[s]=1;
    ll ans=1;
    while(!q.empty())
    {
        ll u=q.front();
        q.pop();
        for(ll i=0;i<graph[u].size();i++)
        {
            ll v=graph[u][i];
            if(visited[v]==0)
            {
                visited[v]=1;
                ans++;
                q.push(v);
            }
        }
    }
    return ans;
}
int  main()
{
    ll N,i,j,E;
    while(cin>>N>>E)
    {
        if(N==0 && E==0) return 0;
        //memset(visited,0,sizeof(visited));
        ll ar[N+4];
        ll u,ck;
        for(i=1;i<=E;i++)
        {
            ll k;
            cin>>u;
            for(j=1;j<=u;j++)
            {
                cin>>ar[j];
            }
            for(k=1;k<=u;k++)
            {
                for(ll m=1;m<=u;m++)
                {
                    if(m==k) continue;
                    graph[ar[k]].push_back(ar[m]);
                }
            }
        }
  ll ans=bfs(0);
  for(i=0;i<N;i++)
  {
      graph[i].clear();
      visited[i]=0;
  }
  cout<<ans<<endl;
    }


}

