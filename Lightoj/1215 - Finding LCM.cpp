
      /*########  IN THE NAME OF ALLAH   ##########*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
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

ll B[300005],C[300005],visited[300005],level[300005];

char CH[1000][1000],ch;

vector<ll>V;

vector<ll>G;

vector <ll> primes;

#define MAX 1000000

bool A[MAX+100];

void sieve()
{
    primes.push_back(2);

    for(ll i=2;i<=MAX;i+=2)
        A[i]=1;
    for(ll i=3;i<=MAX;i+=2)
    {
        if(A[i]==0)
        {
            primes.push_back(i);
            for(ll j=i*2 ;j<=MAX;j+=i)
                A[j]=1;
        }
    }

}

map<ll,ll>P;

set<ll>num;

ll fun(ll N)
{
           ll cnt=0;
           for(ll u=0;primes[u]*primes[u]<=N;u++)
           {
               cnt=0;
               if(N%primes[u]) continue;

               cnt=0;

               while(N%primes[u]==0)
               {
                   cnt++;

                   N=N/primes[u];
               }

               P[primes[u]]=max(cnt,P[primes[u]]);

               num.insert(primes[u]);
           }

           if(N!=1)
           {
               P[N]=max(1,P[N]);

               num.insert(N);
           }
}

ll ans1;

ll fun1(ll N)
{
           ll cnt=0;

           ll ans=1;

           ans1=1;

           for(ll u=0;primes[u]*primes[u]<=N;u++)
           {
               cnt=0;
               if(N%primes[u]) continue;

               cnt=0;

               while(N%primes[u]==0)
               {
                   cnt++;

                   N=N/primes[u];
               }

               if(cnt>P[primes[u]])
               {
                   ans*=power(primes[u],cnt);

                   num.erase(primes[u]);

                  // cout<<ans<<endl;

               }

               else if(cnt<=P[primes[u]])
               {
                   ans1=ans1*power(primes[u],P[primes[u]]);

                    num.erase(primes[u]);

                    //cout<<"fuck<<"<<ans1<<endl;

               }

           }

           if(N!=1)
           {
               ll n=1;

                if(n>P[N])
               {
                   ans*=power(N,n);

                   num.erase(N);

                   //cout<<n<<" "<<ans<<" "<<P[N]<<endl;
               }
               else if(n<=P[N])
               {
                   ans1=ans1*power(N,P[N]);

                    num.erase(N);
               }
           }

           return ans;
}

int main()
{
    //WRITE("output.txt");
   ll T,N,E,u,v,i,j,k,sum=0,ck=0,x,y;

   sieve();

   string S,S1;

   double d1,d2,d3;

   cin>>T;

   for(i=1;i<=T;i++)
   {
       cin>>x>>y>>u;

       P.clear();

       num.clear();

       fun(x);

       fun(y);

       ll ans=fun1(u);

       //9cout<<ans<<endl;

       for(auto it=num.begin();it!=num.end();it++)
       {
           ll n=P[*it];

           ans1=ans1*power(*it,P[*it]);

       }

       ans1*=ans;

       pc(i);

       cout<<" ";

       if(ans1==u)
       {

           cout<<ans<<endl;
       }

       else cout<<"impossible"<<endl;

   }

 /************ALEYA YOUSUF ************/


 /************ALLAH IS ALMIGHTY ************/
return 0;

}
