
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

int main()
{
    WRITE("1.txt");
   ll T,N,E,u,Q,v,i,j,k,sum=0,ck=0,x,y,cs=0;

   string S,S1;

   double d1,d2,d3;
   ll w,h;
   while(cin>>w>>h>>E)
   {
       if(w==0 && h==0 && E==0) r0;
       ll ar[w+1][h+1]={0};
       ll x1,x2,y1,y2;
       while(E--)
       {
           cin>>x1>>y1>>x2>>y2;
           if(x1>x2) swap(x1,x2);
           if(y1>y2) swap(y1,y2);
           for(i=x1;i<=x2;i++)
           {
               for(j=y1;j<=y2;j++) ar[i][j]=1;
           }

       }
       ll ans=0;

       for(i=1;i<=w;i++)
       {
           for(j=1;j<=h;j++)
           {
               if(ar[i][j]==0) ans++;
           }
       }

       if(ans==0)
       {
           cout<<"There is no empty spots."<<endl;
       }
       else if(ans==1) {
        cout<<"There is one empty spot."<<endl;
       }
       else
       {
           cout<<"There are "<<ans<<" empty spots."<<endl;
       }
   }



 /************ALEYA YOUSUF ************/


 /************ALLAH IS ALMIGHTY ************/
return 0;

}
