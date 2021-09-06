
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

//ll A[3000005],B[3000005],visited[3005][1000],level[3000005];
char CH[1000][1000],ch;
vector<ll>V,G;
ll C,R;
ll cnt;
void bfs(ll s1,ll s2)
{
    if(s2<0) s2=C-1;
    if(s2>=C) s2=0;
    if(s1<0 || s1>=R) return ;
    if(CH[s1][s2]!=ch) return;
    CH[s1][s2]='?';
    cnt++;
    for(ll i=0;i<4;i++)
    {
        bfs(s1+fx[i],s2+fy[i]);
    }
//    bfs(s1+1,s2);
//    bfs(s1,s2+1);
//    bfs(s1-1,s2);
//    bfs(s1,s2-1);


}
int main()
{
    WRITE("1.txt");
   ll T,N,E,u,Q,v,i,j,k,sum=0,ck=0,x,y,cs=0;

   string S,S1;

   double d1,d2,d3;
   while(cin>>R>>C)
   {

       for(i=0;i<R;i++)
       {
           for(j=0;j<C;j++)
           {
               cin>>CH[i][j];
           }
       }

       cin>>x>>y;
        ch=CH[x][y];
        bfs(x,y);
       ll ans=0;
       for(i=0;i<R;i++)
       {
           for(j=0;j<C;j++)
           {
               if(CH[i][j]==ch)
               {
                   cnt=0;
                   bfs(i,j);
                   if(cnt>ans)
                   {
                       ans=cnt;
                   }
               }
           }

       }

        cout<<ans<<endl;


   }



 /************ALEYA YOUSUF ************/


 /************ALLAH IS ALMIGHTY ************/
return 0;

}
