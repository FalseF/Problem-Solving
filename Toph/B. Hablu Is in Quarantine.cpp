
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
char CH[5000][5000];
vector<ll>V,G;
vector<char>vc;
int main()
{
   ll T,N,E,u,Q,v,i,j,k,sum=0,ck=0,x,y,cs=0;

   string S,S1;

   double d1,d2,d3;
   cin>>N;
   char ch;
   for(i=1;i<=N;i++)
   {
       for(j=1;j<=N;j++)
       {
           cin>>ch;
           vc.pb(ch);
       }
   }
   cin>>E;
   for(i=1;i<=E;i++)
   {
       cin>>u;
       if(vc[u-1]=='c' && ck==0) {ck=1;cs=1;continue;}
       if(ck==1)
       {
           if(vc[u-1]=='a' && A[u]==0) {V.pb(u);A[u]=1;}
       }
   }
// sort(V.begin(),V.end());
   if(V.size()==0 && cs==0) cout<<"NO"<<endl;
   else if(V.size()==0 && cs==1) {cout<<"YES"<<endl;}
   else
   {
       cout<<"YES"<<endl;
       for(i=0;i<V.size();i++)
       {
           cout<<V[i]<<" ";
       }
   }

 /************ALEYA YOUSUF ************/


 /************ALLAH IS ALMIGHTY ************/
return 0;

}
