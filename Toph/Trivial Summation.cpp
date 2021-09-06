/*########  IN THE NAME OF ALLAH   ##########*/

#pragma GCC diagnostic ignored "-Wunused-variable"
#pragma GCC diagnostic ignored "-Wunused-parameter" 
#include<bits/stdc++.h>
using namespace std;
#pragma GCC diagnostic ignored "-Wunused-but-set-variable" 
#pragma GCC diagnostic ignored "-Wformat"
#define ll long long

int main()
{
   ll T,res;
     cin>>T;
     while(T--)
     {
     	ll r1,a1,d1,b1;
     	cin>>r1>>a1>>b1>>d1;
     	__int128 r=r1,a=a1,b=b1,mod=d1,n1,lcm,n2,n3,gcd,ans,ans2,ans1,ans3;
     	 n1=r/a;
     	 ans=(a*(n1*(n1+1))/2);
        gcd=__gcd(a,b);
     	 n2=r/b;
      ans1=(b*(n2*(n2+1))/2);
     	 lcm=(a*b)/gcd;
     	 n3=r/lcm;
     	 ans2=(lcm*(n3*(n3+1))/2);
     	 ans3=(ans1+ans-ans2)%mod;
     	 res=ans3;
     	cout<<res<<endl;
     }
   
   

   
   /************ALEYA YOUSUF ************/
 
 
 /************ALLAH IS ALMIGHTY ************/
return 0;
 
}