
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
   ll T,N,E,u,Q,v,i,j,k,sum=0,ck=0,x,y,cs=0;

   string S,S1;

   double d1,d2,d3;

  cin>>T;
  while(T--)
  {
      cin>>N;
      ll ar[N+10];
      map<ll,ll>ar1,ar2,ar3,ar4;
      for(i=1;i<=N;i++)
      {
          cin>>ar[i];

      }

      ll mx1=0,mx2=0,mx3=0,mx4=0;
      ll ck1=1,ck2=1,ck3=0,ck4=0;
        ll l=0;
      for(i=1;i<=N;i++)
      {
          if(ar1[ar[i]]==1){ mx1=i-1; break;}
          else
          {
              ar1[ar[i]]=1;
          }

      }

      for(i=1;i<=mx1;i++) if(ar1[i]==0) {ck1=0;break;}
      for(j=mx1+1;j<=N;j++)
      {
          ar2[ar[j]]=1;
      }
      for(j=1,i=mx1+1;i<=N;i++,j++)
      {
          if(ar2[j]==0) {ck1=0;break;}
      }
      mx2=N-mx1;
      for(i=N,j=1;i>=1;i--,j++)
      {
          if(ar3[ar[i]]==1){ mx4=j-1; break;}
          else
          {
              ar3[ar[i]]=1;
          }

      }

      for(i=1;i<=mx4;i++) if(ar3[i]==0) {ck2=0;break;}
      for(j=N-mx4;j>=1;j--)
      {
          ar4[ar[j]]=1;
      }
      for(j=1,i=mx4+1;i<=N;i++,j++)
      {
          if(ar4[j]==0) {ck2=0;break;}
      }
      mx3=N-mx4;

      if(ck1==1 && ck2==1)
      {
          if(mx1==mx3 && mx2==mx4){cout<<1<<endl;cout<<mx1<<" "<<mx2<<endl;}
          else
          {
              cout<<2<<endl;
              cout<<mx1<<" "<<mx2<<endl;
              cout<<mx3<<" "<<mx4<<endl;
            }
      }
      else if(ck1==1)
      {
          cout<<1<<endl;
          cout<<mx1<<" "<<mx2<<endl;
      }
      else if(ck2==1) {
            cout<<1<<endl;
        cout<<mx3<<" "<<mx4<<endl;
      }
      else cout<<0<<endl;
    //cout<<ck1<<" "<<ck2<<" "<<ck3<<" "<<ck4<<endl;
  }

 /************ALEYA YOUSUF ************/


 /************ALLAH IS ALMIGHTY ************/
return 0;

}
