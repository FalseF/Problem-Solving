
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

bool mark[1000000+100]={0};
ll primes[10000004];
void sieve() {
    int i, j;
    mark[1] =  1;
    for(i = 2; i < 500; i++) {
        if(mark[i] == 0) {
            for(j = i+i; j < 500; j += i)
                mark[j] = 1;
        }
    }
}
#define LLU unsigned long long
LLU mpow(LLU x, LLU y) {
    if(y == 0)   return 1;
    if(y&1)
        return x*mpow(x*x, y>>1);
    return mpow(x*x, y>>1);
}

int main()
{
    sieve();
   ll T,N,E,u,Q,v,i,j,k,sum=0,ck=0,x,y,cs=0;
   string S,S1;
   set<LLU>st;
   double d1,d2,d3;
   st.insert(1);
   for(i=2;i<=65536;i++)
   {
       for(j=2;j<=500;j++)
       {
           if(mark[j]==1)
           {

               if(j*log2(i)<64)
               {
                   st.insert(mpow(i,j));
               }
               else break;
       }
       }
   }
   for(auto it: st)
   {
       cout<<it<<endl;
   }


 /************ALEYA YOUSUF ************/


 /************ALLAH IS ALMIGHTY ************/
return 0;

}
