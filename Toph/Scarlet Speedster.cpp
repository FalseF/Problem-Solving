
      /*########  IN THE NAME OF ALLAH   ##########*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 999999999999999999
#define nl cout<<endl
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
#define pc(x)  printf("Case %lld:",x)
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

ll A[300005],B[300005];
ll visited[102][102],level1[102][102],level2[102][102],arr[102][102];
void bfs1(ll s1, ll s2, ll r, ll c, ll x)
{
    queue<pair<ll,ll>>Q;
    visited[s1][s2]=1;
    Q.push(mp(s1,s2));
    level1[s1][s2]=0;
    while(!Q.empty())
    {
        ll u1=Q.front().first;
        ll u2=Q.front().second;
        Q.pop();
        for(ll i=0;i<4;i++)
        {
            ll v1=u1+fx[i];
            ll v2=u2+fy[i];
            ll d=abs(arr[v1][v2]-arr[u1][u2]);
            if(v1>=1 && v2>=1 && v1<=r && v2<=c)
            {

               if(d%2==0)
                {
                    if(level1[u1][u2]<level1[v1][v2])
                    {
                        level1[v1][v2]=level1[u1][u2];
                        Q.push(mp(v1,v2));
                    }
                }
                else
                {
                    if(level1[u1][u2]+x<level1[v1][v2])
                    {
                        level1[v1][v2]=level1[u1][u2]+x;
                        Q.push(mp(v1,v2));
                    }
                }
            }
        }
    }
}

void bfs2(ll s1, ll s2, ll r, ll c, ll y)
{
    queue<pair<ll,ll>>Q;
    visited[s1][s2]=1;
    Q.push(mp(s1,s2));
    level2[s1][s2]=0;
    while(!Q.empty())
    {
        ll u1=Q.front().first;
        ll u2=Q.front().second;
        Q.pop();
        for(ll i=0;i<4;i++)
        {
            ll v1=u1+fx[i];
            ll v2=u2+fy[i];
            ll d=abs(arr[v1][v2]-arr[u1][u2]);
            if(v1>=1 && v2>=1 && v1<=r && v2<=c)
            {

               if(d%2==1)
                {
                    if(level2[u1][u2]<level2[v1][v2])
                    {
                        level2[v1][v2]=level2[u1][u2];
                        Q.push(mp(v1,v2));
                    }
                }
                else
                {
                    if(level2[u1][u2]+y<level2[v1][v2])
                    {
                        level2[v1][v2]=level2[u1][u2]+y;
                        Q.push(mp(v1,v2));
                    }
                }
            }
        }
    }
}

int main()
{
   ll T,N,E,u,v,i,j,k,sum=0,ck=0,x,y;

   cin>>T;
   ll cs=0;
   while(T--)
   {
       cin>>N>>E>>x>>y;
       memset(visited,0,sizeof(visited));
       for(i=1;i<=N;i++)
       {
           for(j=1;j<=E;j++)
           {
               cin>>arr[i][j];
               level1[i][j]=INT_MAX;
               level2[i][j]=INT_MAX;
           }
       }

       bfs1(1,1,N,E,x);
       memset(visited,0,sizeof(visited));
       bfs2(1,1,N,E,y);

       ll n1=level1[N][E];
       ll n2=level2[N][E];
      // cout<<n1<<" "<<n2<<endl;
       if(n1<n2) cout<<"YES"<<endl;
       else cout<<"NO"<<endl;
   }
   string S,S1;

   double d1,d2,d3;



 /************ALEYA YOUSUF ************/


 /************ALLAH IS ALMIGHTY ************/
return 0;

}
