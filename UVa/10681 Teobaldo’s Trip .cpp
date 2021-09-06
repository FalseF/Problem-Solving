
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
ll parent[20005];
vector<ll>V,G[500];
ll s,e,d,dp[203][505];
ll dfs(ll s, ll k)
{
    if(dp[s][k]!=-1) return dp[s][k];
    if(k==0)
    {
        cout<<s<<endl;
        if(s==e) return 1;
        else return 0;
    }

    for(ll it=0; it<G[s].size();it++)
    {
        cout<<s<<" "<<G[s][it]<<endl;
        ll ck=dfs(G[s][it],k-1);
        if(ck==1) return dp[s][k]=1;
    }
    return dp[s][k]=0;
}

int main()
{
   //WRITE("ouput.txt");
   ll T,N,E,u,Q,v,i,j,k,sum=0,ck=0,x,y,cs=0;

   string S,S1;

   double d1,d2,d3;
   while(sf2(N,E))
   {
       if(N==0 && E==0) r0;
       for(j=0;j<N;j++)
       {
           G[j].clear();
       }
       memset(dp,-1,sizeof(dp));
       for(i=0;i<E;i++)
       {
           sf2(u,v);
           G[u].pb(v);
           G[v].pb(u);
       }
       sf3(s,e,d);

       //cout<<ans<<" "<<level[e]<<" "<<visited[e]<<endl;

       if(dfs(s,d)) printf("Yes, Teobaldo can travel.\n");
      else  printf("No, Teobaldo can not travel.\n");
   }



 /************ALEYA YOUSUF ************/


 /************ALLAH IS ALMIGHTY ************/
return 0;

}
