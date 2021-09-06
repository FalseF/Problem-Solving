
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
int main()
{
   ll T,N,E,u,Q,v,i,j,k,sum=0,ck=0,x,y,cs=0;

   string S,S1;

   double d1,d2,d3;
   cin>>T;
   while(T--)
   {
       cin>>N;
       ll gride[N+5][N+5];
       ll way[N+5][N+5]={0,0};
       ll ans[N+5][N+5]={0,0};
       char ch[N+5][N+5];
       for(i=1;i<=N;i++)
       {
           for(j=1;j<=N;j++)
           {
               cin>>ch[i][j];
           }
       }

           for(j=1;j<=N;j++)
           {
               if(ch[1][j]!='r') way[1][j]=1;
               else break;
           }

           for(i=1;i<=N;i++)
           {
               if(ch[i][1]!='r') way[i][1]=1;
               else break;
           }

           for(i=2;i<=N;i++)
           {
               for(j=2;j<=N;j++)
               {
                   if(ch[i][j]!='r'){
                    ans[i][j]=max(ans[i-1][j],ans[i][j-1])+1;
                    way[i][j]=way[i-1][j]+way[i][j-1];
                   }
               }
           }
           ll w=0,cnt=0;
           for(i=1;i<=N;i++){
                for(j=1;j<=N;j++){

                        cout<<way[i][j]<<" ";
                if(cnt<=ans[i][j]){
                    cnt=ans[i][j];
                    w=way[i][j];
                }
                }

                nl;
           }
           cout<<cnt<<" "<<w<<endl;
   }



 /************ALEYA YOUSUF ************/


 /************ALLAH IS ALMIGHTY ************/
return 0;

}
