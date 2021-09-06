//
//      /*########  IN THE NAME OF ALLAH   ##########*/
//
//#include<bits/stdc++.h>
//using namespace std;
//#define ll long long
//#define nl cout<<endl
//#define  r0 return 0
//#define  r1 return 1
//#define sf1(x)  scanf("%lld",&x)
//#define sf2(x,y)  scanf("%lld %lld",&x,&y)
//#define sf3(x,y,z)  scanf("%lld %lld %lld",&x,&y,&z)
//#define pf1(x)  printf("%lld\n",x)
//#define pf2(x,y)  printf("%lld %lld\n",x,y)
//#define pf3(x,y,z)  printf("%lld %lld %lld\n",x,y,z)
//#define yes  printf("YES\n")
//#define no  printf("NO\n")
//#define pc(x)  printf("Case %lld:",x)
//#define pb push_back
//#define mp make_pair
//#define pa pair<ll,ll>
//#define mem(a,b) memset(a,b,sizeof(a))
//#define MIN  -99999999999999999
//#define READ(f) freopen(f,"r",stdin)
//#define WRITE(f) freopen(f,"w",stdout)
//#define pi 2.0*acos(0.0)
//#define sp printf(" ")
//#define vs(v) (v.begin(),v.end())
//ll max(ll a,ll b) {if(a>b) return a; else return b;} ll min(ll a,ll b) {if(a<b) return a; else return b;}
//ll power(ll B,ll P){ if(P==0) return 1; ll X=power(B,P/2); if(P%2==0) return X*X; else return B*X*X;}
//ll fx[]={1,-1,0,0}; ll fy[]={0,0,1,-1};
//
//ll B[300005],C[300005],visited[300005],level[300005];
//
//char CH[1000][1000],ch;
//
//vector<ll>V;
//
//vector<ll>G;
//
//vector <ll> primes;
//#define MAX 10000000
//
//bool A[MAX+100];
//
//void sieve()
//{
//    primes.push_back(2);
//
//    for(ll i=2;i<=MAX;i+=2)
//        A[i]=1;
//    for(ll i=3;i<=MAX;i+=2)
//    {
//        if(A[i]==0)
//        {
//            primes.push_back(i);
//            for(ll j=i*2 ;j<=MAX;j+=i)
//                A[j]=1;
//        }
//    }
//
//}
//
//
//void prime_factor(ll source)
//{
//    ll Count=0;
//
//    for(ll i=0; primes[i]*primes[i] <= source; i++)
//    {
//
//        while(source%primes[i]==0)
//        {
//             printf("%4lld\n",primes[i]);
//            source=source/primes[i];
//        }
//    }
//
//    if(source!=1)
//    {
//        printf("%4lld\n",source);
//    }
//
//
//}
//int main()
//{
//   ll T,N,E,u,v,i,j,k,C=0,sum=0,ck=0,x,y;
//
//   sieve();
//
//   string S,S1;
//
//   double d1,d2,d3;
//
//   while(cin>>N)
//   {
//       if(N<0) r0;
//
//       prime_factor(N);nl;
//
//   }
//
//
// /************ALEYA YOUSUF ************/
//
//
// /************ALLAH IS ALMIGHTY ************/
//return 0;
//
//}
//
//


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
int main()
{
    ll N,i,j;
    while(sf1(N) && N!=-1)
    {
        while(N%2==0)
        {
            N/=2;
            printf("    2\n");
        }
        for(i=3;i*i<=N;i+=2)
        {
            while(N%i==0)
            {
                printf("    %lld\n",i);
                N/=i;
            }
        }
        if(N!=1) printf("    %lld\n",N);
        nl;
    }
}
