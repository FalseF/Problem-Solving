
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

map<ll,vector<ll> >G;

ll ans;

ll vm;

ll ly;

ll dfs(ll s)
{
   visited[s]=1;

   level[s]=-1;

   vm=1;
   ly=0;

   queue<ll>Q;

   Q.push(s);

   while(!Q.empty())
   {
      ll u=Q.front();

      Q.pop();

      for(ll i=0;i<G[u].size();i++)
      {
         ll v=G[u][i];

         //cout<<level[v]<<endl;

         if(visited[v]==0)
         {
            if(level[u]==-1)
            {
               ly++;

              level[v]=999999;

            }
            else if(level[u]==999999)
            {
               vm++;
               level[v]=-1;
            }


            visited[v]=1;
            Q.push(v);
         }

      }
   }
   return max(vm,ly);

}

int main()
{
   WRITE(("output.txt"));
   ll T,N,E,u,v,i,j,k,C=0,sum=0,ck=0,x,y;
   string S,S1;
   double d1,d2,d3;

   set<ll>ST;

   set<ll>::iterator it;

   sf1(T);

   for(i=1;i<=T;i++)
   {
      sf1(N);

      ans=0;

      mem(visited,0);

      mem(level,0);

      ST.clear();

      G.clear();

      for(j=1;j<=N;j++)
      {
         sf2(u,v);

         G[u].pb(v);

         G[v].pb(u);

         ST.insert(u);

         ST.insert(v);

      }
      ll node=ST.size();


      for(it=ST.begin();it!=ST.end();it++)
      {
         if(visited[*it]==0)
         {
            //cout<<*it<<endl;
            ans+=dfs(*it);
         }
      }


      pc(i);sp;
      pf1(ans);

   }





       /************ALEYA YOUSUF ************/
   return 0;
}

