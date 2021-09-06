
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

ll A[300005],B[300005],C[300005],visited[1001],level[1001];

char CH[1000][1000],ch;

vector<ll>V;

vector<ll>G[1005];

vector <ll> primes;
#define MAXP 1000

bool num[MAXP+100];

void sieve()
{

    primes.push_back(2);

    for(ll i=2;i<=MAXP;i+=2)
        num[i]=1;
    for(ll i=3;i<=MAXP;i+=2)
    {
        if(num[i]==0)
        {

                primes.push_back(i);

            for(ll j=i*2 ;j<=MAXP;j+=i)
                num[j]=1;
        }
    }

}

ll bfs(ll s, ll d)
{

    memset(visited,0,sizeof(visited));

    memset(level,0,sizeof(level));
    visited[s]=1;

    level[s]=0;

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

                Q.push(v);

                if(visited[d]==1) return level[d];
            }

            if(v>d) break;
        }
    }
    return 0;
}



ll N=1001;

void factor()
{
    ll l=primes.size();
    for(ll i=1;i<=N;i++)
    {
        for(ll j=0;j<l;j++)
        {
            if(i/primes[j]==0) break;

            if(i%primes[j]!=0 || i==primes[j]) continue;

            if((i+primes[j])<=N)
            {
                G[i].pb(i+primes[j]);
            }
        }
    }
}

int main()
{
    //WRITE("output.txt");
   ll T,N,E,u,v,i,j,k,C=0,sum=0,ck=0,x,y;

   string S,S1;

   double d1,d2,d3;

   sieve();

  factor();

  ll cnt=0;

   while(scanf("%lld%lld",&N,&E)!=EOF)
   {

       cnt++;

       if(N==0 && E==0) r0;

       pc(cnt);sp;

       if(N>E) {printf("-1\n");continue;}

       if(N==E) {printf("0\n");continue;}

       ll ans=bfs(N,E);

       if(ans==0) printf("-1\n");

       else printf("%lld\n",ans);





   }





 /************ALEYA YOUSUF ************/


 /************ALLAH IS ALMIGHTY ************/
return 0;

}
