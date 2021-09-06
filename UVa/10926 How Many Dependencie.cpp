
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

vector<ll>G[1000];

ll bfs(ll s)
{
    ll visited[203]={0};
    ll mx=0;
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
               mx++;
                Q.push(v);
            }
        }
    }
    return mx;
}
int main()
{
    WRITE("output.txt");
   ll T,N,E,u,v,i,j,k,sum=0,ck=0,x,y;

   string S,S1;

   while(sf1(N)){
        if(N==0) r0;
        for(i=0;i<=N;i++) G[i].clear();
       for(i=1;i<=N;i++)
       {
           sf1(E);
           ll ar[E+5];
           for(j=1;j<=E;j++)
           {
               sf1(ar[j]);
               G[i].pb(ar[j]);
           }
       }

       ll Index=1,ans=-1;

       for(i=1;i<=N;i++)
       {
           ll r=bfs(i);
           cout<<r<<endl;
           if(ans<r)
           {
               Index=i;
               ans=r;

           }
       }

       pf1(Index);
   }

 /************ALEYA YOUSUF ************/


 /************ALLAH IS ALMIGHTY ************/
return 0;

}
