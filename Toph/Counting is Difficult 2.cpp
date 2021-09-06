
      /*########  IN THE NAME OF ALLAH   ##########*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll min(ll a, ll b){ if(a<b) return a;else return b;}
ll max(ll a, ll b){ if(a<b) return b;else return a;}
int main()
{
   ll T,N,E,u,Q,v,n,i,j,k,sum=0,ck=0,x,y,cs=0;

   string S,S1;

   double d1,d2,d3;
   vector<ll>res;
   while(cin>>N)
   {
       if(N<3)
       {
          res.push_back(0);
           continue;
       }
       if(N==3){
        res.push_back(1);
        continue;
       }
       if(N==4)
       {
           res.push_back(4);
           continue;
       }

       if(N==5)
       {
           res.push_back(10);
           continue;
       }


       ll ans=1;
           ans*=(N-2);
           ans*=(N-1);
           ans/=2;
           ans*=N;
           ans/=3;
       res.push_back(ans);


   }
   cout<<res[0];
   for(i=1;i<res.size();i++)
   {
       cout<<" "<<res[i];
   }
   cout<<endl;



 /************ALEYA YOUSUF ************/


 /************ALLAH IS ALMIGHTY ************/
return 0;

}
