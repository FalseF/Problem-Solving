
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
vector<ll>V,G;

int main()
{
   ll T,N,E,u,Q,v,i,j,k,sum=0,ck=0,cs=0;

   string S,S1;

   /*https://mukitmkbs.wordpress.com/2016/08/26/uva-106-fermat-vs-pythagoras/
   ekhane bekkha ache*/

   double d1,d2,d3;
   while(cin>>N)
   {
       ll M[N+2];

       for(i=1;i<=N;i++) M[i]=0;
           ll ck1=0,ck2=0;
       ll n=sqrt(N);
       if(n*n<N) n++;
       for(i=1;i<=n;i++)
       {
           for(j=i+1;j<=n;j++)
           {
               if(__gcd(i,j)==1)
               {
                   ll x=j*j-i*i;
                   ll y=2*i*j;
                   ll z=i*i+j*j;
                   if(z>N) break;
                   if(__gcd(__gcd(x,y),z)==1) ck1++;
                   ll x1=x,y1=y,z1=z;
                   while(z1<=N)
                   {
                        M[x1]=M[y1]=M[z1]=1;
                       x1+=x;
                       y1+=y;
                       z1+=z;


                   }
               }
           }
       }
       for(i=1;i<=N;i++) if(M[i]==0) ck2++;
       cout<<ck1<<" "<<ck2<<endl;
   }



 /************ALEYA YOUSUF ************/


 /************ALLAH IS ALMIGHTY ************/
return 0;

}
