
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
ll fx[]={1,1,1,0,0,-1,-1,-1};
ll fy[]={1,0,-1,1,-1,1,0,-1};

ll visited[1000][1000];
char CH[1000][1000];
vector<ll>V,G;
void bfs(ll s1, ll s2, ll N)
{
    visited[s1][s2]=1;
    queue<pair<ll,ll>>Q;
    Q.push(mp(s1,s2));
    while(!Q.empty())
    {
        ll u1=Q.front().first;
        ll u2=Q.front().second;
        Q.pop();
        for(ll i=0;i<8;i++)
        {
            ll v1=u1+fx[i];
            ll v2=u2+fy[i];
            if(visited[v1][v2]==0 && v1>=0 && v2>=0 && v1<N && v2<N)
            {
                Q.push(mp(v1,v2));
                visited[v1][v2]=1;
            }
        }
    }
}
int main()
{
   ll T,N,E,u,Q,v,i,j,k,sum=0,ck=0,x,y,cs=0;

   string S,S1;

   double d1,d2,d3;


       while(cin>>N){
            cs++;
       memset(visited,0,sizeof(visited));
       for(i=0;i<N;i++)
       {
           for(j=0;j<N;j++)
           {
               cin>>CH[i][j];
               if(CH[i][j]=='0') visited[i][j]=1;
           }
       }


       //memset(colour,0,sizeof(colour));
       for(i=0;i<N;i++)
       {
           for(j=0;j<N;j++)
           {
               if(CH[i][j]=='1' && visited[i][j]==0) {ck++;bfs(i,j,N);}
           }
       }
       cout<<"Image number "<<cs<<" contains "<<ck<<" war eagles."<<endl;
       ck=0;
   }



 /************ALEYA YOUSUF ************/


 /************ALLAH IS ALMIGHTY ************/
return 0;

}
