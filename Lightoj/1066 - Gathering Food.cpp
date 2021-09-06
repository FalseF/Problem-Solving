
      /*########  IN THE NAME OF ALLHA   ##########*/

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
ll fx[]={1,-1,0,0}; ll fy[]={0,0,1,-1};
ll A[300005],B[300005],C[300005];
ll visited[1000][1000],level[1000][1000];
char CH[1000][1000],ch;

ll node,D1,D2;

ll BFS(ll s1, ll s2, ll d1,ll d2,ll N)
{
   visited[s1][s2]=1;

   queue<pair<ll,ll> >Q;

   Q.push(make_pair(s1,s2));

   while(!Q.empty())
   {
      ll u1=Q.front().first;

      ll u2=Q.front().second;

      Q.pop();

      for(ll i=0;i<4;i++)
      {
         ll v1=u1+fx[i];

         ll v2=u2+fy[i];

         if(visited[v1][v2]==0 && v1>0 && v2>0 && v1<=N && v2<=N && CH[v1][v2]!='#' && CH[v1][v2]<=CH[d1][d2])
         {
            level[v1][v2]=level[u1][u2]+1;

            visited[v1][v2]=1;

            //cout<<"V1= "<<v1<<"  V2= "<<v2<<" level "<<level[v1][v2]<<endl;

            Q.push(make_pair(v1,v2));

            if(CH[v1][v2]==CH[d1][d2]) { return level[v1][v2];}

         }

      }

   }

   return 0;



}



int main()
{
   ll T,N,E,u,v,i,j,k,C=0,sum=0,ck=0,x,y;
   string S,S1;


   ll source1[10000];

   ll source2[10000];

   ll d1,d2;

   sf1(T);

   for(i=1;i<=T;i++)
   {
      sf1(N);

      C=0;

      for(j=1;j<=N;j++)
      {
         for(k=1;k<=N;k++)
         {
            cin>>CH[j][k];

            if(CH[j][k]>='A' && CH[j][k]<='Z')
            {
               C++;

               ll d=CH[j][k]-64;

               source1[d]=j;

               source2[d]=k;

               if(d>ck)
               {
                  ck=d;

                  D1=j;

                  D2=k;
               }

            }
         }
      }

      ll ans=0;

       ck=0;

       pc(i);sp;

       if(C==1) {cout<<"0";nl;continue;}

      for(j=1;j<=C-1;j++)
      {
         mem(visited,0);

         mem(level,0);

         ll R=BFS(source1[j],source2[j],source1[j+1],source2[j+1],N);

         if(R==0) {printf("Impossible\n");ck=1;break;}

         ans+=R;

         if(visited[D1][D2]==1) break;

      }

     if(ck==0) pf1(ans);

   }





       /************ALEYA YOUSUF ************/


       /************ALLHA IS ALMIGHTY ************/
   return 0;
}

