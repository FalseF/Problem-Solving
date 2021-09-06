
      /*########  IN THE NAME OF ALLAH   ##########*/

#include<bits/stdc++.h>
using namespace std;

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

int parent[100000];
int Find(int r)
{
    if(r==parent[r]) return r;
    else return parent[r]=Find(parent[r]);
}
struct edge{
int U, V; double W;
edge (int u, int v , double w)
{
    U=u;
    V=v;
    W=w;
}
};
vector<edge>graph;
double distance(int x1, int x2, int y1, int y2)
{
     double ck1=abs(x1-x2);
     double  ck2=abs(y1-y2);
     double d1= sqrt(ck1*ck1+ ck2*ck2);
     return d1;
}
bool fun(edge a , edge b)
{
    return a.W<b.W;
}
int main()
{
    WRITE("1.txt");
   int T,N,E,u,Q,v,i,j,k,sum=0,ck=0,x,y,cs=0;

   string S,S1;

   double d1,d2,d3;
   cin>>T;
   while(T--)
   {
       cin>>N>>E;
       int ax[E+3],ay[E+4];
       for(i=1;i<=E;i++)
       {
           cin>>ax[i]>>ay[i];
       }
       for(i=0;i<=max(E,N);i++) parent[i]=i;
       for(i=1;i<=E;i++)
       {
           for(j=i+1;j<=E;j++)
           {
               d1=distance(ax[i],ax[j],ay[i],ay[j]);
               graph.pb(edge(i,j,d1));
           }
       }
       sort(graph.begin(),graph.end(),fun);
       double ans=0.00;
       for(i=0;i<graph.size() && N!=E;i++)
       {
           int ck1=Find(graph[i].U);
           int ck2=Find(graph[i].V);
           if(ck1!=ck2)
           {
               E--;
               ans=graph[i].W;
               parent[ck2]=ck1;
           }
       }

       printf("%.2f\n",ans);
       graph.clear();

   }



 /************ALEYA YOUSUF ************/


 /************ALLAH IS ALMIGHTY ************/
return 0;

}
