
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
map<string, ll>donate_value;

map<string, ll>current_value;

int main()
{
   ll T,N,E,u,v,i,j,k,C=0,sum=0,ck=0,x,y;
   string S[100],S1,S2;
   double d1,d2,d3;
   cin>>N;

   while(1)
   {

      for(i=0;i<N;i++) cin>>S[i];

      current_value.clear();

      donate_value.clear();

      for(k=0;k<N;k++)
      {
         cin>>S1>>v>>E;

         if(E!=0)current_value[S1]-=E*(v/E);
         //cout<<donate_value[S1];nl;


         for(j=0;j<E;j++)
         {
            cin>>S2;

            current_value[S2]+=v/E;

         }
      }

      for(j=0;j<N;j++) cout<<S[j]<<" "<<current_value[S[j]]<<endl;

      if(cin>>N) cout<<endl;
      else break;


      //cout<<current_value[S[i]]<<endl;
   }





       /************ALEYA YOUSUF ************/


       /************ALLHA IS ALMIGHTY ************/
   return 0;
}


