
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
ll ar[10][10],ar1[10][10];
ll visited[10][10];
void fun()
{
    queue<pair<ll,ll>>Q;
   for(ll i=0;i<3;i++) for(ll j=0;j<3;j++) Q.push(make_pair(i,j));
    while(!Q.empty())
    {
        ll u1=Q.front().first;
        ll u2=Q.front().second;
        Q.pop();
        ll ck=0;
       // cout<<u1<<" "<<u2<<endl;
        for(ll i=0;i<4;i++)
        {
            ll v1=fx[i]+u1;
            ll v2=fy[i]+u2;
            if(u1>=0 && v1<3 && u2>=0 && v2<3)
            {
                ck=(ck+ar[v1][v2])%2;
                //Q.push(make_pair(v1,v2));
            }

        }
        ar1[u1][u2]=ck;
    }
    for(ll i=0;i<3;i++) for(ll j=0;j<3;j++) ar[i][j]=ar1[i][j];
}
bool fun1()
{
    for(ll i=0;i<3;i++)
    {
        for(ll j=0;j<3;j++) if(ar[i][j]>0) return true;
    }
    return false;
}
int main()
{
   ll T,N,E,u,Q,v,i,j,k,sum=0,ck=0,x,y,cs=0;

   string S,S1;

   double d1,d2,d3;
   cin>>T;
   while(T--)
   {
       cs++;
       for(i=0;i<3;i++) for(j=0;j<3;j++) scanf("%1lld",&ar[i][j]);
       ll ans=-1;
       while(fun1())
       {
           for(i=0;i<3;i++)
           {for(j=0;j<3;j++) {cout<<ar[i][j];};nl;}
           nl;
           fun();
           ans++;
       }
       cout<<ans<<endl;
   }



 /************ALEYA YOUSUF ************/


 /************ALLAH IS ALMIGHTY ************/
return 0;

}
