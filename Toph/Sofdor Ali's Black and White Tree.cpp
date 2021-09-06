
      /*########  IN THE NAME OF ALLAH   ##########*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 999999999999999999
#define nl printf("\n")
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
#define pc(x)  printf("Case %lld :",x)
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

ll A[3000005],B[3000005],C[3000005],visited[3000005],level[3000005];
char CH[1000][1000];
vector<ll>V,G[100005];
ll colour[100005],Time=0,ar[100005],f[100005],d[100005];
void dfs(ll s, ll p)
{
    d[s]=Time;
    Time++;
    for(ll i=0;i<G[s].size();i++)
    {
        ll v=G[s][i];
        if(v!=p)
        {
            dfs(v,s);
            colour[s]+=colour[v];
        }

    }
    Time++;
    f[s]=Time;
}
int main()
{
   ll T,N,E,u,Q,v,i,j,k,sum=0,ck=0,x,y,cs=0;

   string S,S1;

   double d1,d2,d3;
   sf1(N);
   for(i=0;i<N;i++) {sf1(ar[i]);colour[i]=ar[i];if(ar[i]==1) ck++;}
   for(i=1;i<N;i++)
   {
       sf2(u,v);
       G[u].pb(v);
       G[v].pb(u);
   }
   ll ans=0;
   dfs(0,-1);
//   for(i=0;i<N;i++) cout<<colour[i]<<" ";
//   nl;
   for(i=0;i<N;i++)
   {
       ll node=(f[i]-d[i])/2;
       ll w=colour[i];
       node=node-2*w;

     ans=max(ans,node);

   }
   pf1(ans+ck);




 /************ALEYA YOUSUF ************/


 /************ALLAH IS ALMIGHTY ************/
return 0;

}
