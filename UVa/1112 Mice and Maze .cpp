
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

ll A[300005],B[300005],C[300005],visited[300005],level[300005];

char CH[1000][1000],ch;

struct edge{
  ll V,W;

  edge(ll b,ll c)
  {
      V=b;W=c;
  }
};

vector<edge>G[100001];

struct nodes{
 ll U1,W1;

 nodes(ll a, ll b)
 {
     U1=a;W1=b;
 }

};

bool operator <(nodes a, nodes b)
{
    return a.W1>b.W1;
}

ll dis[101];

void dijsktra(ll s)
{
    for(ll i=1;i<=101;i++) dis[i]=9999999999999;

      dis[s]=0;

     priority_queue<nodes>Q;

     Q.push(nodes(s,0));

     while(!Q.empty())
     {
         nodes u=Q.top();

         Q.pop();

           for(ll i=0;i<G[u.U1].size();i++)
         {
             edge v=G[u.U1][i];

             if((u.W1+v.W)<dis[v.V])
             {
                 dis[v.V]=u.W1+v.W;

                 Q.push(nodes(v.V,dis[v.V]));
             }


         }
     }
}

int main()
{
    WRITE("output.txt");
   ll T,N,E,u,v,i,j,k,C=0,sum=0,ck=0,x,y;

   string S,S1;

   double d1,d2,d3;

   ll t,s,w;

   cin>>T;

   for(i=1;i<=T;i++)
   {
       cin>>N>>s>>t>>E;

       for(j=0;j<E;j++)
       {
           cin>>u>>v>>w;

           G[v].push_back(edge(u,w));
       }

       dijsktra(s);

       ll ans=0;

       for(j=1;j<=N;j++)
       {
           if(dis[j]<=t) ans++;

           G[j].clear();
       }

       cout<<ans<<endl;

       if(i<T) nl;
   }


 /************ALEYA YOUSUF ************/


 /************ALLAH IS ALMIGHTY ************/
return 0;

}
