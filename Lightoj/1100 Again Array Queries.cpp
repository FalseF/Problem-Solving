

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
#define pc(x,y)  printf("Case %lld: %lld\n",x,y)
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

ll A[3000005],B[3000005],visited[3000005],level[3000005];
char CH[1000][1000];
vector<ll>V,G;

int main()
{
   ll T,N,E,u,Q,v,n,i,j,k,sum=0,ck=0,x,y,cs=0;

   string S,S1;

   double d1,d2,d3;
   cin>>T;
   while(T--)
   {
       cin>>N>>E;
       ll ar[N+5];
       for(i=1;i<=N;i++)
       {
           cin>>ar[i];
       }
       cs++;
       cout<<"Case "<<cs<<":"<<endl;
       while(E--)
       {
           ll cnt[10000]={0};
           ck=0;
           cin>>x>>y;
           x++;
           y++;
       for(i=x;i<=y;i++)
       {
           if(cnt[ar[i]]==1)
           {
               cout<<0<<endl;
               ck=1;
               break;
           }
           cnt[ar[i]]=1;
       }

       if(ck==1) continue;

       ll prev=-1;
       ll ans=INT_MAX;
       for(i=1;i<=1000;i++)
       {
           if(cnt[i]==1 && prev>0)
           {
               ans=min(ans,i-prev);
               prev=i;
           }
           else if(cnt[i]==1)
           {
               prev=i;
           }
       }

       cout<<ans<<endl;
       }
   }



 /************ALEYA YOUSUF ************/


 /************ALLAH IS ALMIGHTY ************/
return 0;

}
