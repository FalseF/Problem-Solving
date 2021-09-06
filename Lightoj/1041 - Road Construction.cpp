
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
#define pb() push_back()
#define mp make_pair()
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

map<string , string>parent;

ll component;

struct edge{

   string U,V;
   ll W;
   edge(string u, string v, ll w)
   {
      U=u;V=v;W=w;
   }


};

vector<edge>G;

string Find(string x)
{
   if(parent[x]==x) return x;

   parent[x]=Find(parent[x]);
   return parent[x];
}

bool fun(edge a,edge b)
{
   return a.W<b.W;
}
ll kruskal(ll N, ll E)
{
   component=0;
   ll cost=0;

   sort(G.begin(),G.end(),fun);

   for(ll i=0;i<E;i++)
   {
      string u=G[i].U;
      string v=G[i].V;
      ll w=G[i].W;

      string px=Find(u);

      string py=Find(v);

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
   ll T,N,E,u,v,i,j,k,C=0,sum=0,c,ck=0,x,y;
   string S,S1;
   double d1,d2,d3;

   set<string>st;

   sf1(T);

   for(i=1;i<=T;i++)
   {
      sf1(E);

      for(j=0;j<E;j++)
      {
        cin>>S>>S1>>c;

            st.insert(S);

            st.insert(S1);

            parent[S]=S;

            parent[S1]=S1;

            G.push_back(edge(S,S1,c));

      }

      ll num=st.size();

      ll ans=kruskal(num,E);

      if(component!=(num-1)){ pc(i);printf(" Impossible\n");}

      else {pc(i);sp;pf1(ans);}

       G.clear();

      st.clear();

      parent.clear();



   }





       /************ALEYA YOUSUF ************/
   return 0;
}

