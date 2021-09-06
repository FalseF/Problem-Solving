

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
vector<ll>V,G;
ll D[100005],S[100005];
int main()
{
    freopen("1.txt","w",stdout);
   ll T,N,E,u,Q,v,i,j,k,sum=0,ck=0,x,y,cs=0;
   D[1]=1;
   S[1]=1;
   for(i=2;i<=100000;i++)
   {
       ll l=sqrt(i);
       D[i]=2;
       S[i]=i+1;
       for(j=2;j<=l;j++)
       {
          if(i%j==0)
          {
              D[i]+=2;
              S[i]+=j;
              ck=i/j;
              if(ck!=j) S[i]+=ck;
          }
       }
       if(l*l==i) D[i]--;
   }

   sf1(T);
   while(T--)
   {
       sf3(N,E,u);
       ck=(int)ceil(N/(double)u)*u;
       ll ck1=0,ck2=0;
       for(i=ck;i<=E;i+=u)
       {
           ck1+=D[i];
           ck2+=S[i];

       }

       printf("%lld %lld\n",ck1,ck2);
   }


 /************ALEYA YOUSUF ************/


 /************ALLAH IS ALMIGHTY ************/
return 0;

}
