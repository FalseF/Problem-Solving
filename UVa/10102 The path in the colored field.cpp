
      /*########  IN THE NAME OF ALLAH   ##########*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sf1(x)  scanf("%lld",&x)
#define sf2(x,y)  scanf("%lld %lld",&x,&y)
#define sf3(x,y,z)  scanf("%lld %lld %lld",&x,&y,&z)
#define pf1(x)  printf("%lld\n",x)
#define pb push_back
#define mp make_pair
ll fx[]={1,-1,0,0}; ll fy[]={0,0,1,-1};

ll A[3000005],B[3000005],C[3000005],visited[3005][3005],level[3005][3005];
char CH[1000][1000];
ll cost[3004][3004];
vector<ll>V,G;
struct edge{
   ll U,V,W;
   edge(ll a, ll b, ll c)
   {
       U=a;V=b;W=c;
   }
   edge(){}

}a;
queue<edge>Q;
void bfs(ll n)
{
     while(!Q.empty())
    {
        a =Q.front();
        Q.pop();
        for(ll i=0;i<4;i++)
        {
            ll v1=fx[i]+a.U;
            ll v2=fy[i]+a.V;
            if(v1>=0 && v2>=0 && v1<n && v2<n && cost[v1][v2]>a.W+1)
            {
                Q.push(edge(v1,v2,a.W+1));
                cost[v1][v2]=a.W+1;
            }
        }
    }
}

int main()
{
    //WRITE("1.txt");
   ll T,N,E,u,v,i,j,k,sum=0,ck=0,x,y,cs=0;

   string S,S1;

   double d1,d2,d3;
   while(cin>>N)
   {
       queue<pair<ll,ll>>q;
       for(i=0;i<N;i++)
       {
           for(j=0;j<N;j++){
            cin>>CH[i][j];
            level[i][j]=0;
            cost[i][j]=INT_MAX;
            if(CH[i][j]=='3') {
            cost[i][j]=0;
            Q.push(edge(i,j,0));
            }
            else if(CH[i][j]=='1') q.push(mp(i,j));
           }
       }
       bfs(N);
       ll ans=-999999999999999999;
       while(!q.empty())
       {
           ll u1=q.front().first;
           ll u2=q.front().second;
           q.pop();
           ans=max(ans,cost[u1][u2]);
       }

       cout<<ans<<endl;
   }

 /************ALEYA YOUSUF ************/


 /************ALLAH IS ALMIGHTY ************/
return 0;

}
