
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
ll fx[]={1,-1,0,0}; ll fy[]={0,0,1,-1};
ll A[3000005],B[3000005],C[3000005],visited[1003][1003],level[3000005];
ll iNT_MAX=9999999999999;
char CH[1005][1005];
vector<ll>V,G;
struct edge{
  ll X,Y,W;
  edge(ll a, ll v, ll c)
  {
      X=a;
      Y=v;
      W=c;

  }
  edge(){}
} a;
queue<edge>q;
ll J_cost[1002][1002],F_cost[1002][1003];
ll N,E;
void bfs(ll s1, ll s2)
{
    queue<pair<ll,ll> >Q;
    Q.push(mp(s1,s2));
    J_cost[s1][s2]=0;
    while(!Q.empty())
    {
        ll u1=Q.front().first;
        ll u2=Q.front().second;
        Q.pop();
        for(ll i=0;i<4;i++)
        {
            ll  v1=u1+fx[i];
            ll  v2=u2+fy[i];
            if(CH[v1][v2]=='#') continue;
            if(J_cost[v1][v2]==iNT_MAX &&  v1>=0 && v2>=0 && v1<E&& v2<N)
            {

                Q.push(mp(v1,v2));
                J_cost[v1][v2]=J_cost[u1][u2]+1;
            }
        }
    }
}
void bfs2()
{
    while(!q.empty())
    {
        a =q.front();
        q.pop();
        //cout<<a.X<<" "<<a.Y<<endl;
        for(ll i=0;i<4;i++)
        {
            ll v1=a.X+fx[i];
            ll v2=a.Y+fy[i];
            if(CH[v1][v2]=='#') continue;
            if(v1>=0 && v2>=0 && v1<E && v2<N && F_cost[v1][v2]>a.W+1)
            {
                F_cost[v1][v2]=a.W+1;
                //cout<<F_cost[v1][v2]<<" "<<v1<<" "<<v2<<endl;
                q.push(edge(v1,v2,a.W+1));
            }
        }
    }
}
int main()
{
   ll T,u,Q,v,i,j,k,sum=0,ck=0,x,y,cs=0;

   string S,S1;

   double d1,d2,d3;
   sf1(T);
   while(T--)
   {
       sf2(E,N);
       ll s1,s2;
       for(i=0;i<E;i++)
       {
           for(j=0;j<N;j++)
           {
               visited[i][j]=0;
               J_cost[i][j]=iNT_MAX;
               F_cost[i][j]=iNT_MAX;
               cin>>CH[i][j];
               if(CH[i][j]=='J') {s1=i;s2=j;}
               if(CH[i][j]=='F') {F_cost[i][j]=0;q.push(edge(i,j,0));}
           }
       }

       bfs(s1,s2);
       bfs2();
       ll ans=iNT_MAX;

       for(i=0;i<N;i++)
       {
           if(F_cost[0][i]>J_cost[0][i]) {ans=min(ans,J_cost[0][i]);}//cout<<F_cost[0][i]<<" "<<J_cost[0][i]<<endl;}
           if(F_cost[E-1][i]>J_cost[E-1][i]) {ans=min(ans,J_cost[E-1][i]);}
       }

       for(i=0;i<E;i++)
       {
           if(F_cost[i][0]>J_cost[i][0]) ans=min(ans,J_cost[i][0]);
           if (F_cost[i][N-1]>J_cost[i][N-1]) ans=min(ans,J_cost[i][N-1]);
       }

       if(ans==iNT_MAX) cout<<"IMPOSSIBLE"<<endl;
       else cout<<ans+1<<endl;
   }



 /************ALEYA YOUSUF ************/


 /************ALLAH IS ALMIGHTY ************/
return 0;

}

