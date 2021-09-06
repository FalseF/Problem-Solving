
      /*########  IN THE NAME OF ALLAH   ##########*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 999999999999999999
#define MOD 10000000000
#define WRITE(f) freopen(f,"w",stdout)
int main()
{
    //WRITE("1.txt");
   ll T,N,E,u,Q,v,i,j,k,sum=0,ck=0,x,y,cs=0;

   string S,S1;

   double d1,d2,d3;
   while(cin>>N>>E)
   {
       ll num=1;
      if(E==0) {
        cout<<1<<endl;continue;
      }
       for(i=N;i>=N-E+1;i--)
       {
           num*=i;
           while(num%10==0)
           {
               num/=10;
           }
           num=num%MOD;
       }
       cout<<num%10<<endl;
   }



 /************ALEYA YOUSUF ************/


 /************ALLAH IS ALMIGHTY ************/
return 0;

}
