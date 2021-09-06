
      /*########  IN THE NAME OF ALLHA   ##########*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 1001
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
#define pair pair<ll,ll>
#define mem(a,b) memset(a,b,sizeof(a))
#define MIN  -99999999999999999
#define READ(f) freopen(f,"r",stdin)
#define WRITE(f) freopen(f,"w",stdout)
#define pi 2.0*acos(0.0)
#define sp printf(" ")
#define vs(v) (v.begin(),v.end())
ll max(ll a,ll b) {if(a>b) return a; else return b;} ll min(ll a,ll b) {if(a<b) return a; else return b;}
ll fx[]={1,-1,0,0}; ll fy[]={0,0,1,-1};
ll A[300005],B[300005],C[300005],visited[300005],level[300005];
char CH[1000][1000],ch;
vector<ll>V;

map<ll,vector<ll> >G;

vector<ll>primes;

ll primefactor[100002];

ll power[100005];

void sive()
{
   primes.pb(2);

   for(ll i=2;i<=MAX;i=i+2)
   {
      A[i]=1;
   }

   for(ll i=3;i<=MAX;i=i+2)
   {

      if(A[i]==0)
      {
         primes.pb(i);

         for(ll j=i*2;j<MAX;j=j+i)
         {
            A[j]=1;
         }
      }
   }
}

void Primefactor()
{
   ll N=primes.size();

   for(ll i=1;i<=MAX;i++)
   {

      for(ll j=0;j<N;j++)
      {
         if(i/primes[j]==0) break;

         if(i%primes[j]!=0 || i==primes[j]) continue;


         if((primes[j]+i)<=MAX)
         {
            G[i].pb(primes[j]+i);
         }
        // cout<<i<<" "<<primes[j]+i<<endl;
      }
   }

}

ll dfs(ll s, ll d)
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
         level[v]=level[u]+1;

         visited[v]=1;

         if(v==d) return level[v];

         if(v>d) break;

        Q.push(v);
      }
   }

   }
   return -1;

}

int main()
{
   //WRITE("output.txt");
   ll T,N,E,u,v,i,j,k,C=0,sum=0,ck=0,x,y;
   string S,S1;
   double d1,d2,d3;

     sive();

     Primefactor();

     sf1(T);

     for(i=1;i<=T;i++)
     {
        mem(visited,0);

        mem(level,0);

         pc(i);sp;

        sf2(N,E);

        if(N==E) {printf("0\n");continue;}

      ll ans= dfs(N,E);

        pf1(ans);

     }

       /************ALEYA YOUSUF ************/
   return 0;
}

