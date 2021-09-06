
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

ll fx[]={1,-1,0,0}; ll fy[]={0,0,1,-1};

#define MAX 1000006

vector <ll> primes;

bool A[MAX+100];

void sieve()
{

    primes.push_back(2);

    ans[ck]=2;

    A[1]=1;

    for(ll i=2;i<=MAX;i+=2)
        A[i]=1;
        A[2]=0;
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

ll primeck[MAX+2];

ll ans[MAX+2];

ll result[MAX+2];

 //ll index[MAX+2];

int main()
{
   ll T,N,E,u,v,i,j,k,C=0,sum=0,ck=0,x,y;

   sieve();

   string S,S1;



   double d1,d2,d3;

   N=1e6+1;

   for(i=1;i<=N;i++)
   {
       ll primelagbe;

       if(A[i]==0)
       {
            primelagbe=ans[i]+i-1;
       }

       else
       {
           primelagbe=ans[i]+i;
       }

       ll last=upper_bound(ans,ans+N,primelagbe)-ans;

       ll fast=lower_bound(ans,ans+N,primelagbe)-ans;


       for(j=fast;j<=last-1;j++)
       {
           primeck[j]=1;
       }

       result[i]=result[i-1]+primeck[i];

   }

   sf1(T);

   N=0;

   for(i=1;i<=T;i++)
   {
       sf1(N);
       printf("%lld\n",result[N]);
   }

 /************ALEYA YOUSUF ************/


 /************ALLAH IS ALMIGHTY ************/
return 0;

}
