
      /*########  IN THE NAME OF ALLAH   ##########*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
   ll T,N,E,u,Q,v,i,j,k,sum=0,ck=0,x,y,cs=0;

   string S,S1;

   double d1,d2,d3;
   while(cin>>N)
   {
       ll ar1[N+2],ar2[N+3];
       for(i=1;i<=N;i++)
       {
           cin>>ar1[i];
           ar2[ar1[i]]=i;
       }
       ll ar3[N+3],ans=0;
       for(i=1;i<=N;i++)
       {
           cin>>ar3[i];
           for(j=1;j<i;j++)
           {
               if(ar2[ar3[j]]>ar2[ar3[i]]) ans++;
           }
       }
       cout<<ans<<endl;
   }



 /************ALEYA YOUSUF ************/


 /************ALLAH IS ALMIGHTY ************/
return 0;

}
