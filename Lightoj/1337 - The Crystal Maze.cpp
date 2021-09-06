
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
#define mem(a,b) memset(a,b,sizeof(a))
#define MIN  -99999999999999999
#define READ(f) freopen(f,"r",stdin)
#define WRITE(f) freopen(f,"w",stdout)
#define pi 2.0*acos(0.0)
#define sp printf(" ")
#define vs(v) (v.begin(),v.end())
ll max(ll a,ll b) {if(a>b) return a; else return b;} ll min(ll a,ll b) {if(a<b) return a; else return b;}
ll fx[]={1,-1,0,0}; ll fy[]={0,0,1,-1};
ll A[300005],B[300005],as[300005],visited[1000][1000],level[300005];
char CH[1000][1000],ch;
ll ans[1000][1000];

struct edge{
ll U,V;
edge(ll u,ll v)
{
   U=u;V=v;
}

};




ll ck;

map<ll,ll>result;

ll bfs(ll s1,ll s2,ll r,ll c)
{

 ll  C=0;

   visited[s1][s2]=1;

   queue<pair<ll,ll> >Q;

   queue<edge>Q1;

   Q.push(make_pair(s1,s2));

   Q1.push(edge(s1,s2));


   while(!Q.empty())
   {
      ll x=Q.front().first;

      ll y=Q.front().second;

      Q.pop();

   for(ll i=0;i<4;i++)
   {
       ll v1=x+fx[i];

       ll v2=y+fy[i];

      if(v1>0 && v2>0 && v1<=r && v2<=c && CH[v1][v2]!='#' && visited[v1][v2]==0)
      {
         visited[v1][v2]=1;

         Q1.push(edge(v1,v2));

         if(CH[v1][v2]=='C') {C++;}

         Q.push(make_pair(v1,v2));

      }
   }

   }

while(!Q1.empty())

{
   ll x=Q1.front().U;

   ll y=Q1.front().V;

   Q1.pop();

   ans[x][y]=C;
}

return C;
}

int main()
{
   //WRITE("output.txt");
   ll T,N,E,u,v,i,j,k,sum=0,x,y;
   string S,S1;
   double d1,d2,d3;

   ll r,s,c,s1,s2;

   sf1(T);

   for(i=1;i<=T;i++)
   {
      sf3(r,c,s);

      for(j=1;j<=r;j++)
      {
         for(k=1;k<=c;k++) cin>>CH[j][k];
      }

      ck=1;

      mem(ans,-1);

      mem(visited,0);

      pc(i);nl;
      for(j=0;j<s;j++)
      {

         sf2(s1,s2);

         if(ans[s1][s2]==-1){

            ll L=bfs(s1,s2,r,c);

            pf1(L);
         }
         else
         {
            pf1(ans[s1][s2]);

         }

      }


   }
       /************ALEYA YOUSUF ************/
   return 0;
}

