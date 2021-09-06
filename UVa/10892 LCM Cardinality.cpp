
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

int main()
{
    WRITE("1.txt");
   ll T,N,E,u,Q,v,i,j,k,sum=0,ck=0,x,y,cs=0;

   string S,S1;

   double d1,d2,d3;

  while(sf1(N) && N)
  {
      vector<ll>v;
      for(i=1;i*i<=N;i++)
      {
          if(N%i==0)
          {
              v.pb(i);
              ck=N/i;
              if(i!=ck) v.pb(ck);
          }

      }
      ck=1;
      for(i=0;i<v.size();i++)
      {
          ll gcd=v[i];
          for(j=i+1;j<v.size();j++)
          {
              ll lcm=(gcd*v[j])/(__gcd(gcd,v[j]));
              if(lcm==N) ck++;
          }

      }
      pf2(N,ck);
  }

 /************ALEYA YOUSUF ************/


 /************ALLAH IS ALMIGHTY ************/
return 0;

}
