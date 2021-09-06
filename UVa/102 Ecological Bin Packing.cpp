
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
ll A[300005],B[300005],C[300005],visited[300005],level[300005];
char CH[1000][1000],ch;
vector<ll>V;
vector<ll>G;

int main()
{
   ll T,N,E,u,v,i,j,k,C=0,sum=0,ck=0,x,y;
   string S,S1;

   char ch1,ch2,ch3;

   double d1,d2,d3;

   while(scanf("%lld %lld %lld %lld %lld %lld %lld %lld %lld",&A[1], &A[2], &A[3], &A[4], &A[5], &A[6], &A[7], &A[8], &A[9])!=EOF)
   {
      ck=999999999999;

      sum=0;

      for(i=1;i<=9;i++) sum+=A[i];


      ll ans1=sum-A[1]-A[6]-A[8];

      if(ans1<ck)
      {
         ck=ans1;

         ch1='B';
         ch2='C';
         ch3='G';
      }

      ll ans2=sum-A[1]-A[5]-A[9];

        if(ans2<ck)
      {
         ck=ans2;

         ch1='B';
         ch2='G';
         ch3='C';
      }

      ll ans3=sum-A[3]-A[4]-A[8];

      if(ans3<ck)
      {
         ck=ans3;

         ch1='C';
         ch2='B';
         ch3='G';
      }


      ll ans4=sum-A[3]-A[5]-A[7];

        if(ans4<ck)
      {
         ck=ans4;

         ch1='C';
         ch2='G';
         ch3='B';
      }

      ll ans5=sum-A[2]-A[4]-A[9];

        if(ans5<ck)
      {
         ck=ans5;

         ch1='G';
         ch2='B';
         ch3='C';
      }

      ll ans6=sum-A[2]-A[6]-A[7];

       if(ans6<ck)
      {
         ck=ans6;

         ch1='G';
         ch2='C';
         ch3='B';
      }

      cout<<ch1<<ch2<<ch3<<" "<<ck<<endl;

   }

       /************ALEYA YOUSUF ************/


       /************ALLHA IS ALMIGHTY ************/
   return 0;
}


