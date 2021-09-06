
      /*########  IN THE NAME OF ALLHA   ##########*/

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
#define pair pair<ll,ll>
#define mem(a,b) memset(a,b,sizeof(a))
#define MIN  -99999999999999999
#define READ(f) freopen(f,"r",stdin)
#define WRITE(f) freopen(f,"w",stdout)
#define pi 2.0*acos(0.0)
#define sp printf(" ")
#define vs(v) (v.begin(),v.end())
ll max(ll a,ll b) {if(a>b) return a; else return b;} ll min(ll a,ll b) {if(a<b) return a; else return b;}
ll fx[]={1,-1,0,0}; ll fy[]={0,0,1,-1};
ll A[300005],B[300005],C[300005],visited[300005],level[300005];
char CH[1000][1000],ch;
struct edge{
   ll U,V,W;
   edge(ll u,ll v, ll w)
   {
      U=u;V=v;W=w;
   }

};

vector<edge>G;

map<ll,ll>parent;

bool fun(edge a,edge b)
{
   return a.W<b.W;

}
ll component;

ll Find(ll x)
{
   if(parent[x]==x) return x;

   parent[x]=Find(parent[x]);

   return parent[x];
}

ll kruskal(ll N, ll E, ll C)
{
   component=N;

   sort(G.begin(),G.end(),fun);

   ll cost=0;

   for(ll i=0;i<E;i++)
   {
      ll u=G[i].U;

      ll v=G[i].V;

      ll c=G[i].W;

      ll px=Find(u);

      ll py=Find(v);

      if(px!=py)
      {

         if(c<C)
         {
            cost+=c;
            component--;
         }

         parent[py]=px;

      }

   }
   return cost;
}
int main()
{
   WRITE("output.txt");
   ll T,N,E,u,v,i,j,k,C=0,sum=0,ck=0,w,x,y;
   string S,S1;
   set<ll>Node;
   double d1,d2,d3;

   sf1(T);
   for(i=1;i<=T;i++)
   {
      parent.clear();
      G.clear();
      sf3(N,E,C);
      for(j=1;j<=E;j++)
      {
         sf3(u,v,w);

         parent[u]=u;

         parent[v]=v;

        G.pb(edge(u,v,w));
      }

      ll r=kruskal(N,E,C);

      ll ans=r+component*C;
      pc(i);sp;pf2(ans,component);


   }







       /************ALEYA YOUSUF ************/
   return 0;
}
