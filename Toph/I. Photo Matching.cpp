
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
char ch1[3002][3002],ch2[3003][3003];
ll m1[1<<16+2],m2[1<<16+2];
int main()
{
   ll T,N,E,u,Q,v,i,j,k,sum=0,ck=0,x,y,cs=0;

   string S,S1;

   double d1,d2,d3;
  sf1(T);
   while(T--)
   {
       sf2(N,E);
       for(i=0;i<N;i++)
       {
            scanf("%s",ch1[i]);
       }

         for(i=0;i<N;i++)
       {
           scanf("%s",ch2[i]);
       }
      memset(m1,0,sizeof(m1));
      memset(m2,0,sizeof(m2));
       for(i=0;(i+E-1)<N;i++)
       {
           for(j=0;(j+E-1)<N;j++)
           {
               ll ck1=0,ck2=0;
               for(k=0;k<E;k++)
               {
                   for(u=0;u<E;u++)
                   {
                       ck1=ck1*2+(ch1[i+k][j+u]-'0');
                       ck2=ck2*2+(ch2[i+k][j+u]-'0');
                   }
               }
               cout<<ck1<<" "<<ck2<<endl;
               m1[ck1]++;
               m2[ck2]++;
           }
       }
       ck=0;
       ll lop=1<<(E*E);
       for(i=0;i<lop;i++) ck+=m1[i]*m2[i];

    cs++;
    printf("Case %lld: %lld\n",cs,ck);
    ck=0;

   }



 /************ALEYA YOUSUF ************/


 /************ALLAH IS ALMIGHTY ************/
return 0;

}
