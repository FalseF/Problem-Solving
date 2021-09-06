
      /*########  IN THE NAME OF ALLAH   ##########*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 999999999999999999
int main()
{
   ll T,N,E,u,Q,v,i,j,k,sum=0,ck=0,x,y,cs=0;

   while(cin>>N)
   {
       if(N==0) return 0;
       sum=0;
       ck=0;
       if(N==1)
       {
           sum=2;
       }
       for(i=2;i*i<=N;i++)
       {
           ll num=1;
           if(N%i) continue;
           while(N%i==0)
           {
               N/=i;
               num*=i;
           }
           ck++;
           sum+=num;
       }

       if(N!=1) {ck++;sum+=N;}
       if(ck==1) sum+=1;
       cs++;
       cout<<"Case "<<cs<<": "<<sum<<endl;

   }


 /************ALEYA YOUSUF ************/


 /************ALLAH IS ALMIGHTY ************/
return 0;

}
