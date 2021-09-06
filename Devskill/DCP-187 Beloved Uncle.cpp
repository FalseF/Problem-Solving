
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

map<ll,ll>M,P;

vector<ll>V;

vector<ll>G;

int main()
{
   ll T,N,E,u,v,i,j,k,C=0,sum=0,ck=0,x,y;

   string S,S1;

   double d1,d2,d3;

   WRITE("output.txt");

   M[3]=3;

   M[2]=2;

   ck=3;

   T=power(2,31)-1;

   while(1)
   {
       ck++;

       M[ck]=M[ck-1]+M[ck-2];

       if(M[ck]>T) break;

   }

   //cout<<ck<<endl;

   while(cin>>N)
   {

       if(N==1) cout<<"Showmic brings 1 chocolate on 1st day."<<endl;

       else if(N==3) cout<<"Showmic brings 3 chocolates on 3rd day."<<endl;

       else if(N==2) cout<<"Showmic brings 2 chocolates on 2nd day."<<endl;

       else
       {
           for(i=4;i<=46;i++)
           {
               if(M[i]>=N) {cout<<"Showmic brings "<<N<<" chocolates on "<<i<<"th day."<<endl;break;}
           }
       }

   }


 /************ALEYA YOUSUF ************/


 /************ALLAH IS ALMIGHTY ************/
return 0;

}
