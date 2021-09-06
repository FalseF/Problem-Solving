
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
#define pa pair<ll,ll>
#define mem(a,b) memset(a,b,sizeof(a))
#define MIN  -99999999999999999
#define READ(f) freopen(f,"r",stdin)
#define WRITE(f) freopen(f,"w",stdout)
#define pi 2.0*acos(0.0)
#define sp printf(" ")
#define vs(v) (v.begin(),v.end())
ll max(ll a,ll b) {if(a>b) return a; else return b;} ll min(ll a,ll b) {if(a<b) return a; else return b;}

ll fx[]={1,-1,0,0}; ll fy[]={0,0,1,-1};

ll A[300005],B[300005],Dis[300005],visited[300005],level[300005];

char CH[1000][1000],ch;

struct edge{

    ll I1,I2;

    edge(ll a, ll b)
    {
        I1=a;I2=b;
    }



};

vector<edge>V;

bool fun(edge a, edge b)
{
    if(a.I1==b.I1) return a.I2<b.I2;
    else return a.I1>b.I1;
}

vector<ll>G[1000];

ll dt=0,ft=0;

stack<ll>st;

void dfs(ll s)
{
    visited[s]=1;


    for(ll i=0;i<G[s].size();i++)
    {
        ll v=G[s][i];

        if(visited[v]==0)
        {

            dfs(v);
        }
    }


    st.push(s);
}

int main()
{

    //WRITE("output.txt");

   ll T,N,E,u,v,i,j,k,C=0,sum=0,ck=0,x,y,d;

   string S,S1;

   double d1,d2,d3;


    while(cin>>N){

     if(N==0) return 0;

         ll R;

         C++;

    memset(visited,0,sizeof(visited));

    memset(Dis,0,sizeof(Dis));


       cin>>d;

       R=d;

       while(cin>>u>>v)
       {
           if(u==0 && v==0) break;

           G[u].pb(v);


       }

        dfs(d);

        ll ans=0;


        while(!st.empty())
        {
            ll u=st.top();

            st.pop();

            for(ll i=0;i<G[u].size();i++)
            {
                ll v=G[u][i];

                Dis[v]=max(Dis[u]+1,Dis[v]);

                if(Dis[v]>=ans)
                {
                    ans=Dis[v];

                    V.push_back(edge(ans,v));


                }


            }

        }

        sort(V.begin(),V.end(),fun);

        R=V[0].I2;


      cout<<"Case "<<C<<": The longest path from "<<d<<" has length "<<ans<<", finishing at "<<R<<"."<<endl;
       nl;

         for(i=1;i<=N;i++) {Dis[i]=0;G[i].clear();}

         V.clear();
   }









 /************ALEYA YOUSUF ************/


 /************ALLHA IS ALMIGHTY ************/
return 0;

}
