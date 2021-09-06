
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
vector<ll>V;
struct edge{
   ll U,V,W;

   edge(ll u, ll v, ll w)
   {
      U=u;V=v;W=w;
   }

};

vector<edge>G;

bool fun(edge a, edge b)
{
   return a.W<b.W;
}

map<ll,ll>parent;

ll Find(ll x)
{
   if(parent[x]==x) return x;

   parent[x]=Find(parent[x]);

   return parent[x];
}

ll component,Count=0;
ll Q[100][100];

ll kruskal(ll N,ll E)
{
   component=0;

   ll cost=0;

   Count=0;

   sort(G.begin(),G.end(),fun);

   for(ll i=0;i<E;i++)
   {
      ll u=G[i].U;

      ll v=G[i].V;

      ll w=G[i].W;

      ll px=Find(u);

      ll py=Find(v);

      if(px!=py)
      {
         parent[py]=px;

         component++;
         cost+=w;
      }

   }

   return cost;
}

int main()
{

   WRITE("output.txt");

   ll T,N,E,u,v,i,j,k,C,sum=0,ck=0,x,y;

   string S,S1;

   double d1,d2,d3;

   set<ll>St;

   sf1(T);

    ll weight=0;

   for(i=1;i<=T;i++)
   {

      G.clear();

      weight=0;

      parent.clear();


      St.clear();

      sf1(N);

      for(j=1;j<=N;j++)
      {
         for(k=1;k<=N;k++)
         {
            sf1(C);

             parent[j]=j;

            parent[k]=k;

            weight+=C;


            if(C==0) continue;



            G.pb(edge(j,k,C));
         }
      }


      ll E=G.size();

      ll R=-1;

      ll ans=weight-kruskal(N,E);

      pc(i);sp;

      if((N-1)!=component) pf1(R);

      else pf1(ans);

   }





       /************ALEYA YOUSUF ************/
   return 0;
}


