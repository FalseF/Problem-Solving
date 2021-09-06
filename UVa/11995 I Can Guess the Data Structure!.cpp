
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

ll A[3000005],B[3000005],C[3000005],visited[3000005],level[3000005];
char CH[1000][1000];
vector<ll>V,G;

int main()
{
    WRITE("1.txt");
   ll T,N,E,u,Q,v,i,j,k,sum=0,ck=0,x,y,cs=0;

   string S,S1;

   double d1,d2,d3;
  while(cin>>N)
  {
      vector<ll>v1,v2,v3,v4;
      ll q=1,pq=1,st=1;
       queue<ll>q1;
       stack<ll>s1;
       priority_queue<ll>p1;
      for(i=1;i<=N;i++)
      {
          cin>>u>>v;
       if(u==1)
       {
           if(q==1) q1.push(v);
           if(st==1) s1.push(v);
           if(pq==1) p1.push(v);

       }
       else
       {
           if(q==1)
           {
               if(q1.empty() || q1.front()!=v)
               {
                   q=0;
               }
               else q1.pop();
           }
           if(st==1)
           {
               if(s1.empty() || s1.top()!=v)
               {
                   st=0;
               }
               else s1.pop();
           }
           if(pq==1)
           {
               if(p1.empty() || p1.top()!=v)
               {
                   pq=0;
               }
               else p1.pop();
           }
       }

  }
      if(q==1 && pq==0 && st==0) cout<<"queue"<<endl;
      else if(q==0 && pq==1 && st==0) cout<<"priority queue"<<endl;
      else if(q==0 && pq==0 && st==1) cout<<"stack"<<endl;
      else if(q==0 && pq==0 && st==0) cout<<"impossible"<<endl;
      else cout<<"not sure"<<endl;
     // cout<<q<<" "<<pq<<" "<<st<<endl;

  }


 /************ALEYA YOUSUF ************/


 /************ALLAH IS ALMIGHTY ************/
return 0;

}
