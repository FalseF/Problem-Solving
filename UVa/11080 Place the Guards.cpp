
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

ll A[300005],B[300005],C[300005],visited[3000],level[300005];

char CH[1000][1000],ch;

vector<ll>V;

vector<ll>G[1000000];

ll n1,n2;


ll bfs(ll s)
{
    visited[s]=1;

    n1++;

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
               if(visited[u]==1) {visited[v]=2;n2++;}

               else {visited[v]=1;n1++; }

               Q.push(v);

            }

           else if(visited[v]==visited[u]) return 0;


        }
    }
    return 1;
}



int main()
{

    WRITE("output.txt");
   ll T,N,E,u,v,i,j,k,C=0,sum=0,ck=0,x,y;

   string S,S1;

   double d1,d2,d3;

   cin>>T;

   for(i=1;i<=T;i++)
   {
       cin>>N>>E;

       memset(visited,0,sizeof(visited));

       ck=0;

       for(j=0;j<E;j++)
       {
           cin>>u>>v;

           G[u].pb(v);

           G[v].pb(u);
       }

       n1=0,n2=0;

       ll sum=0;

       for(j=0;j<N;j++)
       {
           if(visited[j]==0)
           {
               n1=0,n2=0;
               ll ans=bfs(j);

               if(ans==0) {ck=1;cout<<"-1"<<endl;break;}

               sum+=max(min(n1,n2),1);


           }
       }

       for(k=0;k<N;k++) G[k].clear();

       if(ck==1) continue;



      cout<<sum<<endl;


   }




 /************ALEYA YOUSUF ************/


 /************ALLAH IS ALMIGHTY ************/
return 0;

}
