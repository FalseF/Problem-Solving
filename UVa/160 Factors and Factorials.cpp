
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
vector<ll>V,G,primes;
#define MAXP 10000
bool num[MAXP+100];
ll max(ll a,ll b) {if(a>b) return a; else return b;} ll min(ll a,ll b) {if(a<b) return a; else return b;}
ll power(ll B,ll P){ if(P==0) return 1; ll X=power(B,P/2); if(P%2==0) return X*X; else return B*X*X;}
ll fx[]={1,-1,0,0}; ll fy[]={0,0,1,-1};

ll A[300005],B[300005],C[300005],visited[300005],level[300005];

char CH[1000][1000],ch;

ll mx;

void sieve()
{  primes.push_back(2);
    for(ll i=2;i<=MAXP;i+=2)num[i]=1;
    for(ll i=3;i<=MAXP;i+=2)
    {if(num[i]==0)
    {primes.push_back(i);for(ll j=i*2 ;j<=MAXP;j+=i)num[j]=1;}}
}

ll ans[100000];

void NOD(ll source)
{

    for(ll i=0;i<=MAXP && primes[i]*primes[i] <= source; i++)
    {

        while(source%primes[i]==0)
        {
            ans[primes[i]]++;

            //cout<<"Prime "<<primes[ians[source]<<endl;

            mx=max(mx,primes[i]);

            source=source/primes[i];

        }
    }

    if(source!=1)
    {
        ans[source]++;

         mx=max(mx,source);
    }

}

int main()
{
    WRITE("output.txt");
   ll T,N,E,u,v,i,j,k,C=0,sum=0,ck=0,x,y;

   sieve();

   string S,S1;

   ll L=primes.size();

   double d1,d2,d3;

   while(cin>>N)
   {
       memset(ans,0,sizeof(ans));

       mx=0;

      // mx=0;

      if(N==0) r0;

       for(i=N;i>=2;i--)
       {
           NOD(i);
       }

       printf("%3lld! =",N);

       ck=0;

       for(j=0;j<100;j++)
       {

           if(primes[j]>mx)break;

            if(ck>14)
        {

          printf("\n");

          cout<<"      ";
          ck=0;
        }

        ck++;

        printf("%3lld",ans[primes[j]]);

       }

       nl;
   }

 /************ALEYA YOUSUF ************/


 /************ALLAH IS ALMIGHTY ************/
return 0;

}

