
      /*########  IN THE NAME OF ALLAH   ##########*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
   ll T,N,E,u,Q,v,i,j,k,sum=0,ck=0,x,y,cs=0;

   string S,S1;

   double d1,d2,d3;
   cin>>T;
   while(T--)
   {
       cin>>N>>k;
       if(k>=N)
       {
          ll ans=k/N;
          if(k%N) ans++;
          cout<<ans<<endl;
       }
       else
       {
           if(N%k==0) cout<<1<<endl;
           else cout<<2<<endl;
       }

   }



 /************ALEYA YOUSUF ************/


 /************ALLAH IS ALMIGHTY ************/
return 0;

}
