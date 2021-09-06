
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
#define WRITE(f) freopen(f,"w",stdout)
ll visited[1005],level[1005];
vector<ll>G[100005];
void bfs(ll s)
{
    level[s]=0;
    queue<ll>Q;
    Q.push(s);
    while(!Q.empty())
    {
        ll u=Q.front();
        Q.pop();
        for(ll i=0;i<G[u].size();i++)
        {
            ll v=G[u][i];
            if(level[v]==0)
            {
                visited[v]=1;
                level[v]=level[u]+1;
                Q.push(v);
            }
        }
    }
}
int main()
{
    WRITE("1.txt");
   ll T,N,E,u,Q,v,i,j,k,sum=0,ck=0,x,y,cs=0;

   string S,S1;

   double d1,d2,d3;
   sf1(T);
   while(T--)
   {
       sf2(N,E);
       for(i=1;i<=E;i++)
       {
           sf2(u,v);
           G[u].pb(v);
           G[v].pb(u);

       }

       bfs(0);
       if(ck>0) nl;ck++;
       for(i=1;i<N;i++) {
       cout<<level[i]<<endl;
       G[i].clear();
       level[i]=0;
       visited[i]=0;

       }
       G[0].clear();
   }



 /************ALEYA YOUSUF ************/


 /************ALLAH IS ALMIGHTY ************/
return 0;

}
