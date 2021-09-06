
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

ll bigmode(ll b, ll p, ll m)
{
    if(p==0) return 1;
    else if(p%2==0)
    {
        ll r=bigmode(b,p/2,m);
        return ((r%m)*(r%m))%m;
    }
    else
    {
        ll r=bigmode(b,p-1,m);
        return ((r%m)*(b%m))%m;
    }
}






ll A[3000005],B[3000005],C[3000005],visited[3000005],level[3000005];
char CH[1000][1000];
vector<ll>V,G;

int main()
{
   ll T,N,E,u,Q,v,i,j,k,sum=0,ck=1,x,y,cs=0;

   string S,S1;

   double d1,d2,d3;
   cin>>N;
   for(i=0;i<N;i++)
   {
       cin>>A[i];
   }
   sort(A,A+N);
  d1 =1/((double)N-1);
   ll val=pow(1e9,d1)+10;
   ll ans=INT64_MAX;
   for(i=1;i<=val;i++)
   {
       ck=0;
       ll ans1=0;
       for(j=1;j<N;j++)
       {
           if(pow(i,j)>1e14) {ck=1;break;}
           if(ck==0)
           {
               ans1+=abs(pow(i,j)-A[j]);
           }
       }
       ans=min(ans,ans1);

   }
   ans+=abs(A[0]-1);
   cout<<ans<<endl;




 /************ALEYA YOUSUF ************/


 /************ALLAH IS ALMIGHTY ************/
return 0;

}
