
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
struct edge{
  ll U,V;
  string Name;
  edge(string s, ll a, ll b)
  {
      Name=s;
      U=a;
      V=b;
  }
};
int main()
{
   ll T,N,E,u,Q,v,i,j,k,sum=0,ck=0,x,y,cs=0;

   double d1,d2,d3;
   cin>>T;
   while(T--)
   {
       cin>>N;
      char S[10001][25];
       ll ar1[10001];
       ll ar2[10001];
       for(i=0;i<N;i++)
       {
           cin>>S[i]>>ar1[i]>>ar2[i];
           //vc.pb(edge(S,u,v));
       }
       cin>>x;
       while(x--)
       {
           cin>>y;
           ck=0;
           ll ans;
           for(i=0;i<N;i++)
           {
               ll ck1=ar1[i];
               ll ck2=ar2[i];
               if(ck1<=y && y<=ck2)
               {
                   ck++;
                   ans=i;
               }
               if(ck>1) break;
           }
           if(ck==1) cout<<S[ans]<<endl;
           else cout<<"UNDETERMINED"<<endl;
       }
       if(T) nl;
   }

 /************ALEYA YOUSUF ************/


 /************ALLAH IS ALMIGHTY ************/
return 0;

}
