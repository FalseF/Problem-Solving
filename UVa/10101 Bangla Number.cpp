
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

ll A[300005],B[300005],C[300005],visited[300005],level[300005];

char CH[1000][1000],ch;

vector<ll>V;

vector<ll>G;

int main()
{
   ll T,N,E,u,v,i,j,k,C=0,sum=0,ck=0,x,y;

   WRITE("output.txt");

   string S,S1;

   double d1,d2,d3;

   while(cin>>N)
   {
       ck++;

       ll num=N;

       printf("%4lld.",ck);

       if(N<100) {cout<<" "<<N<<endl;continue;}

       ll kuti1=N/100000000000000;

       N=N%100000000000000;

       if(kuti1>0) cout<<" "<<kuti1<<" kuti";

       ll lakh1=N/1000000000000;

       N=N%1000000000000;

       if(lakh1>0) cout<<" "<<lakh1<<" lakh";

         ll hajar1=N/10000000000;

       N=N%10000000000;

       if(hajar1>0) cout<<" "<<hajar1<<" hajar";

        ll shata1=N/1000000000;

       N=N%1000000000;

       if(shata1>0) cout<<" "<<shata1<<" shata";

        ll kuti2=N/10000000;

       N=N%10000000;

        if(kuti2==0 && num>10000000) cout<<" kuti";

       if(kuti2>0) cout<<" "<<kuti2<<" kuti";

       ll lakh2=N/100000;

       N=N%100000;

       if(lakh2>0) cout<<" "<<lakh2<<" lakh";

       ll hajar2=N/1000;

       N=N%1000;

       if(hajar2>0) cout<<" "<<hajar2<<" hajar";

       ll shata2=N/100;

       N=N%100;

       if(shata2>0) cout<<" "<<shata2<<" shata";

       if(N!=0) cout<<" "<<N;

       cout<<endl;



   }









 /************ALEYA YOUSUF ************/


 /************ALLAH IS ALMIGHTY ************/
return 0;

}
