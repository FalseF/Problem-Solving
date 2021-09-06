
      /*########  IN THE NAME OF ALLAH   ##########*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 999999999999999999
#define nl printf("\n")
#define  r0 return 0
#define  r1 return 1
struct edge{
  ll X,Y,V;
  edge(ll a, ll b, ll c)
  {
      X=a;
      Y=b;
      V=c;
  }


};

vector<edge>G;
bool fun(edge a, edge b)
{
    return a.X<b.X;
}
bool fun1(edge a, edge b)
{
    return a.Y<b.Y;
}
int main()
{
   ll T,N,E,u,Q,v,i,j,k,sum=0,ck=0,x,y,cs=0;

   string S,S1;

   double d1,d2,d3;
   cin>>T;
   ll q;
   while(T--)
   {
       cin>>N>>u>>q;
       sum=0;
       for(i=1;i<=q;i++)
       {
           cin>>x>>y>>v;
           G.push_back(edge(x,y,v));
           sum+=v;
       }
       ll mid=(sum+1)/2;
       ll ans1=0;
       sort(G.begin(),G.end(),fun);
       ll sum1=0;
       for(i=0;i<q;i++)
       {
           sum1+=G[i].V;
           if(sum1>=mid)
           {
               ans1=G[i].X;
               break;
           }
       }

       ll ans2=0;
       sort(G.begin(),G.end(),fun1);
       ll sum2=0;
       for(i=0;i<q;i++)
       {
           sum2+=G[i].V;
           if(sum2>=mid)
           {
               ans2=G[i].Y;
               break;
           }
       }

   cs++;
   printf("Case %lld: %lld %lld\n",cs,ans1,ans2);
   G.clear();
   }


 /************ALEYA YOUSUF ************/


 /************ALLAH IS ALMIGHTY ************/
return 0;

}
