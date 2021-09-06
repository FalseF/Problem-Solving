
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
ll prime(ll N)
{
    //cout<<"Asche"<<endl;
    if(N<2) return 0;
    for(ll i=2;i*i<=N;i++)
    {
        if(N%i==0) return 0;
    }
    return 1;
}
int main()
{
   ll T,N,E,u,Q,v,i,j,k,sum=0,ck=0,x,y,cs=0;

   string S,S1;

   double d1,d2,d3;

   while(cin>>N)
   {
       if(N==0) return 0;
       ll ck1=prime(N);
       ll ck2=prime(power(2,N)-1);
       ll ans=(power(2,N-1)*(power(2,N)-1));
       if(ck1==1 && ck2==0)
       {
           cout<<"Given number is prime. But, NO perfect number is available."<<endl;

            }
       else if(ck2==0 && ck1==0)
       {
           cout<<"Given number is NOT prime! NO perfect number is available."<<endl;

                  }
       else  cout<<"Perfect: "<<ans<<"!"<<endl;
   }


 /************ALEYA YOUSUF ************/


 /************ALLAH IS ALMIGHTY ************/
return 0;

}
