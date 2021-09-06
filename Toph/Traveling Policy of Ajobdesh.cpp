
      /*########  IN THE NAME OF ALLAH   ##########*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sf1(x)  scanf("%lld",&x)
#define sf2(x,y)  scanf("%lld%lld",&x,&y)
#define sf3(x,y,z)  scanf("%lld%lld%lld",&x,&y,&z)
#define pc(x)  printf("Case %lld:",x)
#define pb push_back

map<ll,vector<ll> >G;

map<ll,vector<ll> >G1;

map<ll,ll>visited;

map<ll,ll>dis1;


map<ll,ll>dis2;

void bfs(ll s)
{
    dis1[s]=0;

    visited[s]=1;

    queue<ll>Q;

    Q.push(s);

    while(!Q.empty())
    {
        ll u=Q.front();

        Q.pop();

        for(ll i=0;i<G[u].size();i++)
        {
            ll v=G[u][i];

            if(visited[v]==0)
            {
                visited[v]=1;

                dis1[v]=dis1[u]+1;

                Q.push(v);
            }

        }
    }

}
void bfs1(ll s)
{
    dis2[s]=0;

    visited[s]=1;


    queue<ll>Q;

    Q.push(s);

    while(!Q.empty())
    {
        ll u=Q.front();

        Q.pop();

        for(ll i=0;i<G1[u].size();i++)
        {
            ll v=G1[u][i];

            if(visited[v]==0)
            {
                visited[v]=1;

                dis2[v]=dis2[u]+1;

                Q.push(v);
            }

        }
    }

}
int main()
{
   ll T,N,E,u,v,i,j,k,C,q,x,y;

   cin>>T;

   for(i=1;i<=T;i++)
   {
        printf("Case %lld:\n",i);

        cin>>N>>E>>C>>q;

       for(j=0;j<E;j++)
       {
          cin>>x>>y;

           G[x].pb(y);

           G1[y].pb(x);
       }

       for(k=0;k<N;k++) dis1[k]=-1;

       for(k=0;k<N;k++) dis2[k]=-1;

        bfs1(C);

        visited.clear();

        bfs(C);

       for(k=0;k<q;k++)
       {
           cin>>u>>v;


           if(dis1[v]==-1 || dis2[u]==-1) {printf("Not possible to go from %lld to %lld.\n",u,v);}

           else {printf("The shortest distance from %lld to %lld is %lld.\n",u,v,dis2[u]+dis1[v]);}
       }

       G.clear();

       G1.clear();

       visited.clear();
   }

 /************ALEYA YOUSUF ************/


 /************ALLAH IS ALMIGHTY ************/
return 0;

}
