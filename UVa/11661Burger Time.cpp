
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

   WRITE("output.txt");

   string S,S1;

   double d1,d2,d3;


   while(cin>>N)
   {
       if(N==0) r0;

       cin>>S;

       C=0;

       ll ans=3000000;

       ll ans1=3000000;

       ll ck1=0;

       ll ck=0;

       for(i=0;i<N;i++)
       {

           if(S[i]=='Z') {cout<<0<<endl;ck1=1;break;}

          if(S[i]=='D') {C=0;ck=1; continue;}

          else if(S[i]=='R' && ck==1) {ck=0;C++;ans=min(ans,C);C=0;}

          else if(ck==1) C++;
       }

       C=0;

       ck=0;

       if(ck1==1) continue;

       for(i=0;i<N;i++)
       {

          if(S[i]=='R') {C=0;ck=1; continue;}

          else if(S[i]=='D' && ck==1) {C++;ck=0;ans1=min(ans1,C);C=0;}

          else if(ck==1) C++;
       }

       cout<<min(ans,ans1);nl;
   }



 /************ALEYA YOUSUF ************/


 /************ALLHA IS ALMIGHTY ************/
return 0;

}
