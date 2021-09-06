
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
vector<ll>G;


ll ar[]={1,5,10,50,100};

int main()
{
   ll T,N,E,u,j,k,sum=0,ck=0,x,y;


   string S,S1;

   double d1,d2,d3;


   while(cin>>N)
   {
      if(N==0) return 0;

         ll I=0;
         ll V=0;
         ll X=0;
         ll C=0;
         ll L=0;
      for(ll i=1;i<=N;i++)
          {
          if(i%10==1 || i%10==4 || i%10==6 || i%10==9)
          I=I+1;
          if(i%10==2 || i%10==7)
          I=I+2;
          if(i%10==3 || i%10==8)
          I=I+3;
          if(i%10==4 || i%10==5 || i%10==6 || i%10==7 || i%10==8)
          V=V+1;
          if((i>=9 && i<19) || (i>=40 && i<49) || (i>=59 && i<69) || (i>=90 && i<99))
          X=X+1;
          if((i>=19 && i<29) || i==49 || (i>=69 && i<79) || i==99)
          X=X+2;
          if((i>=29 && i<39) || (i>=79 && i<89))
          X=X+3;
          if(i==39 || i==89)
          X=X+4;
          if(i>=40 && i<90)
          L=L+1;
          if(i>=90)
          C=C+1;

   }

   cout<<N<<": "<<I<<" i, "<<V<<" v, "<<X<<" x, "<<L<<" l, "<<C<<" c"<<endl;

   }









       /************ALEYA YOUSUF ************/


       /************ALLHA IS ALMIGHTY ************/
   return 0;
}


