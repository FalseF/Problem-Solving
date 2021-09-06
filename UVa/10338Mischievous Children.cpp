
      /*########  IN THE NAME OF ALLAH   ##########*/

#include<bits/stdc++.h>
using namespace std;
#define ll unsigned long long
#define WRITE(f) freopen(f,"w",stdout)
int main()
{
    WRITE("1.txt");
   ll T,N,E,u,Q,v,i,j,k,sum=0,ck=0,x,y,cs=0;

   string S,S1;

   double d1,d2,d3;
   ll fact[25];
   fact[0]=1;
   fact[1]=1;
   for(i=2;i<=20;i++)
   {
       fact[i]=i*fact[i-1];
   }
   cin>>T;
   while(T--)
   {
       cin>>S;
       ll cnt[100]={0};
       for(i=0;i<S.length();i++)
       {
           cnt[S[i]-'A']++;
       }
       ll num=fact[S.length()];
       for(i=0;i<65;i++)
       {
           x=cnt[i];
           if(x==0) continue;
           //cout<<x<<endl;
           num/=fact[x];
       }

       cs++;
       cout<<"Data set "<<cs<<": "<<num<<endl;
   }



 /************ALEYA YOUSUF ************/


 /************ALLAH IS ALMIGHTY ************/
return 0;

}
