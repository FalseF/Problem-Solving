
      /*########  IN THE NAME OF ALLAH   ##########*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll bigmode(ll b, ll p, ll m)
{
    if(p==0) return 1;
    else if(p%2==0)
    {
        ll r=bigmode(b,p/2,m);
        return ((r%m)*(r%m))%m;
    }
    else
    {
        ll r=bigmode(b,p-1,m);
        return ((r%m)*(b%m))%m;
    }
}
int main()
{
   ll T,N,E;
  cin>>T;
   while(T--)
   {
       cin>>N>>E;
       ll ans=bigmode(N,E,10);
       cout<<ans<<endl;
   }



 /************ALEYA YOUSUF ************/


 /************ALLAH IS ALMIGHTY ************/
return 0;

}
