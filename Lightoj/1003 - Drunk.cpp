
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
ll A[300005],B[300005],C[300005],level[300005];
char CH[1000][1000],ch;
vector<ll>V;
map<string, vector<string> >G;

map<string,ll>ans;

map<string,ll>visited;

ll Time;

struct edge{

   string U,V;

   edge(string u, string v)

{
   U=u;V=v;
}

};
vector<edge>graph;

void dfs(string s)
{
   visited[s]=1;

   Time++;

   for(ll i=0;i<G[s].size();i++)
   {
      string v=G[s][i];

      if(visited[v]==0)
      {
         dfs(v);

      }


   }
   Time++;

   ans[s]=Time;

}


int main()
{
   ll T,N,E,u,v,i,j,k,C=0,sum=0,ck=0,x,y;

   string S,S1;

   string S3[100];

   set<string>st;

   set<string>:: iterator it;

   double d1,d2,d3;

   sf1(T);

   for(i=1;i<=T;i++)
   {
      Time=0;

     sf1(N);

     for(j=0;j<N;j++)
     {
      cin>>S>>S1;

        G[S].push_back(S1);

       graph.push_back(edge(S,S1));


        st.insert(S);

        st.insert(S1);

     }

     ll Node=st.size();

     j=0;

     for(it=st.begin();it!=st.end();it++)
     {

       if(visited[*it]==0)
       {
          dfs(*it);
       }
     }

     pc(i);sp;

     for(j=0;j<N;j++)
     {
        string s1=graph[j].U;

        string s2=graph[j].V;

        //cout<<ans[s1]<<" "<<ans[s2]<<endl;

       if(ans[s1]<ans[s2])
       {
          printf("No\n");
          ck=1;
          break;
       }

     }

     if(ck==0) printf("Yes\n");

     G.clear();

      visited.clear();

      st.clear();

      ans.clear();

      graph.clear();

      ck=0;


   }
       /************ALEYA YOUSUF ************/
   return 0;
}

