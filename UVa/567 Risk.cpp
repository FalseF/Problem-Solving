
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
vector<ll>V,G[100];
void bfs(ll s, ll d)
{
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
                level[v]=level[u]+1;
                if(level[d]>0) break;
                Q.push(v);
            }
        }
    }
}

int main()
{
    WRITE("1.txt");
   ll T,N,E,u,Q,v,i,j,k,sum=0,ck=0,x,y,cs=0;

   string S,S1;

   double d1,d2,d3;
       string str;
        while(cin>>N)
        {      ck++;
                   for(i=0;i<N;i++)
                   {
                    cin>>E;

                       G[1].pb(E);
                       G[E].pb(1);
                     //child variable use korbo
                   }

                   for(i=2;i<20;i++)
                   {
                       cin>>v;
                       for(j=1;j<=v;j++) {cin>>x;
                       G[i].pb(x);
                       G[x].pb(i);}
                   }

                       printf("Test Set #%lld\n",ck);
                       cin>>T;
                       for(i=1;i<=T;i++)
                       {
                           sf2(u,y);
                           for(j=1;j<=20;j++) visited[j]=0,level[j]=0;
                           bfs(u,y);
                           ll d=abs(0-level[y]);
                           printf("%2lld to %2lld: %lld\n",u,y,d);
                       }
                       nl;

                       for(i=1;i<=20;i++) G[i].clear();

        }



 /************ALEYA YOUSUF ************/


 /************ALLAH IS ALMIGHTY ************/
return 0;

}
