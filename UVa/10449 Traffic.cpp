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

char CH[1000][1000],ch;

struct edge{

    ll U,V,W;

    edge(ll a, ll b, ll c)
    {
        U=a;V=b;W=c;
    }


};

vector<edge>G;

ll dis[500001];

void bellmanford(ll s, ll N, ll E)
{
    for(ll i=0;i<=5000;i++) dis[i]=999999999999999;

    dis[s]=0;

    for(ll i=1;i<10000;i++)
    {
        for(ll j=0;j<E;j++)
        {
            ll u=G[j].U;
            ll v=G[j].V;
            ll w=G[j].W;

            if((w+dis[u])<dis[v] && dis[u]!=999999999999999)
            {
                dis[v]=w+dis[u];
            }
        }
    }
}


int main()
{
    //WRITE("output.txt");
    //freopen("C:/Users/Md Faizul Haque/Desktop/Solving/input.txt","r",stdin);
   ll T,N,E,u,v,i,j,k,C=0,sum=0,ck=0,x,y;

   string S,S1;

   double d1,d2,d3;

   while(cin>>N)
   {
       ll A[5000];

       for(i=1;i<=N;i++) cin>>A[i];

       cin>>E;

       for(i=1;i<=E;i++)
       {
           cin>>u>>v;

           ll q=A[v]-A[u];

           k=q*q*q;

           G.pb(edge(u,v,k));


       }

       bellmanford(1,N,E);

       cin>>T;

       ck++;

       cout<<"Set #"<<ck<<endl;

       for(j=1;j<=T;j++)
       {
           cin>>x;

           //cout<<x<<" "<<dis[x]<<endl;

          if(dis[x]>=3 && dis[x]!=999999999999999) cout<<dis[x]<<endl;

          else cout<<"?"<<endl;

       }

       G.clear();


   }

 /************ALEYA YOUSUF ************/


 /************ALLAH IS ALMIGHTY ************/
return 0;

}