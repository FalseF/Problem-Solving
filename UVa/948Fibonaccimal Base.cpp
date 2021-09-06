
      /*########  IN THE NAME OF ALLAH   ##########*/

#include<bits/stdc++.h>
using namespace std;
#define ll unsigned long long
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
//ll fx[]={1,-1,0,0}; ll fy[]={0,0,1,-1};

int main()
{
   ll N,E,u,Q,v,j,k,sum=0,ck=0,x,y,cs=0;
   vector<ll>fibo;
   fibo.pb(1);
   fibo.pb(2);
   for(int i=2;i<=105;i++)
   {
       fibo.pb(fibo[i-2]+fibo[i-1]);
   }
   int T;

   cin>>T;
   //for(i=0;i<fibo.size();i++) cout<<fibo[i]<<endl;
     while(T--)
     {
         cin>>N;
         u=N;
         if(ck) cout<<endl;
         ck++;
         string ans="";
         int i;
        for(i=0;fibo[i]<=u;i++)
        {

        }
            i--;
         for(;i>=0;i--)
         {
             if(N>=fibo[i])
             {
                 ans+='1';
                 N-=fibo[i];
             }
             else{
                ans+='0';
             }
         }
         //reverse(ans.begin(),ans.end());
         cout<<u<<" = "<<ans<<" (fib)"<<endl;
     }


 /************ALEYA YOUSUF ************/


 /************ALLAH IS ALMIGHTY ************/
return 0;

}

