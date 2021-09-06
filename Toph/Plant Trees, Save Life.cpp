//
//#include<bits/stdc++.h>
//
//using namespace std;
//
//typedef long long ll;
//
//ll parent[100005],Rank[100005],nck[100005],ar[100005],mn[100005];
//
//void initialize()
//{
//    for(ll i=1;i<=100005;i++) {parent[i]=i;Rank[i]=1;}
//}
//
//ll Find(ll r)
//{
//    if(parent[r]==r) return r;
//
//    parent[r]=Find(parent[r]);
//
//    return parent[r];
//}
//ll component,ans=0;
//void Union(ll x, ll y)
//{
//    ll u=Find(x);
//
//    ll v=Find(y);
//
//    if(u!=v) {//cout<<"The are different Component so that the include in the same component";
//
//           ll d=min(ar[u],ar[v]);
//
//              component--;//first a sob gula alada component e chilo ar ekhon ekoi component e ene dichi tai comonent num ek ek kore komachi
//
//            if(Rank[v]>Rank[u]){Rank[v]+=Rank[u];parent[u]=v;ar[u]=d;} //zetar child beshi setar sathe new child add korchi abong mot child num add korchi
//
//            else {Rank[u]+=Rank[v];parent[v]=u;ar[v]=d;}
//            nck[u]=1;
//            nck[v]=1;
//    }
//    else {
//
//
//    }
//}
//
//int  main()
//{
//    initialize();
//
//    ll N,E,u,v;
//
//    cin>>N;
//
//    cin>>E;
//
//    component=N;
//    for(ll i=1;i<=E;i++)
//    {
//        cin>>u>>v;
//
//        Union(u,v);
//    }
//
//    cout<<component<<endl;
//    cout<<ans<<endl;
//
//
//
//}



#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
ll ar[100005],visited[100005];
vector<pair<ll,ll>>graph[100005];
ll bfs(ll s)
{
    visited[s]=1;
    queue<ll>Q;
    Q.push(s);
    ll ans=ar[s];
    while(!Q.empty())
    {
        ll u=Q.front();
        Q.pop();
        for(ll i=0;i<graph[u].size();i++)
        {
            ll v=graph[u][i].first;
            ll w=graph[u][i].second;
            if(visited[v]==0)
            {
                visited[v]=1;
                Q.push(v);
                ans=min(ans,w);
            }
        }
    }

    return ans;
}
int main()
{
    ll N,E,u,v,c;
    scanf("%lld%lld",&N,&E);
    for(ll i=1;i<=N;i++)
    {
       scanf("%lld",&ar[i]);
    }

    while(E--)
    {
        scanf("%lld%lld",&u,&v);
        graph[u].push_back(make_pair(v,min(ar[u],ar[v])));
        graph[v].push_back(make_pair(u,min(ar[u],ar[v])));
    }
    ll ans=0;
    for(ll i=1;i<=N;i++)
    {
        if(visited[i]==0)
        {
            ans+=bfs(i);
        }
    }
    printf("%lld\n",ans);
}






