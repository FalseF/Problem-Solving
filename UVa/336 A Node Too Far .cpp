

                  /*########  IN THE NAME OF ALLHA   ##########*/
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define                       pb                                 push_back
vector<ll>G[300005];
ll A[300005],C[300005],D[300005],visited[300005],level[300005];
int fx4[]={1,-1,0,0}; int fy4[]={0,0,1,-1};
set<ll>ST;
set<ll>:: iterator it;

ll BFS(ll s,ll d)
{

        memset(visited,0,sizeof(visited));
        memset(level,0,sizeof(level));

       ll Node=0;

        visited[s]=1;
        level[s]=0;
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


                level[v]=level[u]+1;
                  if(level[v]<=d) Node++;
                    visited[v]=1;
                Q.push(v);
            }
        }
    }
    //for(it=ST.begin();it!=ST.end();it++) {if(visited[*it]==1) Node++;}
    return Node;
}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    ll ck=0,n,m,T,s,i,j,k,l;
    ll u,v,d;
    ll Case=0;

    while(scanf("%lld",&n))
    {


        if(n==0) {exit(0);}
        for(i=0;i<n;i++)
        {
            scanf("%lld%lld",&u,&v);
            ST.insert(u);
            ST.insert(v);
            G[u].pb(v);
            G[v].pb(u);
        }



            while(scanf("%lld %lld",&s,&d)){

            if(s==0 && d==0) {break;}

            Case++;
           ll X=ST.size()-BFS(s,d)-1;

            printf("Case %lld: %lld nodes not reachable from node %lld with TTL = %lld.\n",Case,X,s,d);




        }
        for(it=ST.begin();it!=ST.end();it++)
            {

                G[*it].clear();

            }
            ST.clear();

    }
     /*sf1(T);
     for(i=0;i<T;i++)
     {

    }*/
     //sf1(n);
     //sf2(n,m);




return 0;
}

