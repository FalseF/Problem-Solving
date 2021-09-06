
      /*########  IN THE NAME OF ALLAH   ##########*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 999999999999999999
#define nl cout<<endl
#define  r0 return 0
#define  r1 return 1
#define sf1(x)  scanf("%lld",&x)
#define sf2(x,y)  scanf("%lld %lld",&x,&y)
#define sf3(x,y,z)  scanf("%lld %lld %lld",&x,&y,&z)
#define pf1(x)  printf("%lld\n",x)
#define pf2(x,y)  printf("%lld %lld\n",x,y)
#define pf3(x,y,z)  printf("%lld %lld %lld\n",x,y,z)
#define yes  printf("YES\n")
#define no  printf("NO\n")
#define pc(x)  printf("Case %lld:",x)
#define pb push_back
#define mp make_pair
#define pa pair<ll,ll>
#define mem(a,b) memset(a,b,sizeof(a))
#define MIN  -99999999999999999
#define READ(f) freopen(f,"r",stdin)
#define WRITE(f) freopen(f,"w",stdout)
#define pi 2.0*acos(0.0)
#define sp printf(" ")
#define vs(v) (v.begin(),v.end())

vector<ll>V;

vector<ll>G[100000];

map<pair<ll,ll>, ll>cost;

map<ll,ll>visited;

map<ll,ll>level;


ll bfs(ll s)
{
    visited[s]=1;

    level[s]=0;

     ll mx=-1;

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

                 level[v]=level[u]+cost[mp(u,v)];

                 if(level[v]>mx)
                 {
                     mx=level[v];

                     //cout<<mx<<endl;
                 }

                 Q.push(v);


             }
         }
     }

     return mx;
}



int main()
{
   ll T,N,E,u,v,i,j,k,C=0,sum=0,ck=0,x,y;

   string S,S1;

   double d1,d2,d3;

   cin>>T;

   for(i=1;i<=T;i++)
   {
       cin>>N;

       ck=0;

       for(j=1;j<N;j++)
       {
           cin>>u>>v>>x;

           G[u].pb(v);
           G[v].pb(u);

           cost[mp(u,v)]=x*2;

           cost[mp(v,u)]=x*2;

           ck+=x*2;


       }

        ll ans=bfs(1)/2;


        pc(i);sp;cout<<ck-ans<<endl;

       for(j=1;j<=N;j++) G[j].clear();

        level.clear();

        visited.clear();

        cost.clear();
   }









 /************ALEYA YOUSUF ************/


 /************ALLAH IS ALMIGHTY ************/
return 0;

}
