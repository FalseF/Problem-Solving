
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
ll max(ll a,ll b) {if(a>b) return a; else return b;} ll min(ll a,ll b) {if(a<b) return a; else return b;}
ll power(ll B,ll P){ if(P==0) return 1; ll X=power(B,P/2); if(P%2==0) return X*X; else return B*X*X;}
ll fx[]={1,-1,0,0}; ll fy[]={0,0,1,-1};

ll A[300005],B[300005],C[300005],visited[102],level1[102],level2[102];

char CH[1000][1000],ch;

vector<ll>V;

vector<ll>G[100000];

void bfs(ll s, ll dis[])
{
    dis[s]=0;
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

                dis[v]=dis[u]+1;

                Q.push(v);
            }
        }
    }
}

int main()
{
   // WRITE("output.txt");
   ll T,N,E,u,v,i,j,k,C=0,sum=0,ck=0,x,y;

   string S,S1;

   double d1,d2,d3;

   cin>>T;

   for(i=1;i<=T;i++)
   {
       cin>>N>>E;
        for(j=1;j<=E;j++){

       cin>>u>>v;

       G[u].pb(v);

       G[v].pb(u);}

   cin>>x>>y;

   memset(visited,0,sizeof(visited));

   memset(level1,0,sizeof(level1));

   bfs(x,level1);

   memset(visited,0,sizeof(visited));

     memset(level2,0,sizeof(level2));

   bfs(y,level2);

   ll ans=-1;

   for(j=0;j<N;j++)
   {
       G[j].clear();

       ans=max(ans,level1[j]+level2[j]);
   }

   pc(i);cout<<" "<<ans<<endl;


   }










 /************ALEYA YOUSUF ************/


 /************ALLAH IS ALMIGHTY ************/
return 0;

}
