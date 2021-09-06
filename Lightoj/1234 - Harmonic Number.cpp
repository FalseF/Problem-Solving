
      /*########  IN THE NAME OF ALLAH   ##########*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sf1(x)  scanf("%lld",&x)
#define sf2(x,y)  scanf("%lld %lld",&x,&y)
#define sf3(x,y,z)  scanf("%lld %lld %lld",&x,&y,&z)
 double ar[100000001];
void fun()
{
    ar[0]=0.0;
    ar[1]=1.0;
    double ans=1.0;
    ll ck=1;
    for(ll i=2;i<=100000000;i++)
    {
        ans+=1.0/i;
        ck++;
        if(ck%1000==0) ar[ck/1000]=ans;
    }
}
int main()
{
   ll T,N,E,u,v,i,j,k,C=0,cs=0,sum=0,ck=0,x,y;

   string S,S1;

   double d1,d2,d3;
   fun();
   sf1(T);
   while(T--)
   {
       sf1(N);
       cs++;
       double ans=ar[N/1000];
       for(i=(N/1000)*1000+1;i<=N;i++)
       {
           ans+=1.0/i;
       }
       printf("Case %lld: %.9f\n",cs,ans);
   }

 /************ALEYA YOUSUF ************/


 /************ALLAH IS ALMIGHTY ************/
return 0;

}
