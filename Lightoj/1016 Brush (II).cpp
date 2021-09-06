
      /*########  IN THE NAME OF ALLAH   ##########*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll N,k,W;
ll dp[50005];
ll ar[50004];
ll fun(ll ind)
{
    if(ind>=N) return 0;
    if(dp[ind]!=-1) return dp[ind];
    ll i,ck1=INT_MAX,ck2=INT_MAX;
    for(i=ind;i<N && (ar[i]-ar[ind])<=W;i++)
    {


    }
    ck1=1+fun(i);
    ck2=1+fun(ind+1);
    //cout<<ck1<<" "<<ck2<<endl;
    dp[ind]=min(ck1,ck2);
    return dp[ind];
}

int main()
{
    //WRITE("1.txt");
   ll T,E,u,Q,v,i,j,sum=0,ck=0,x,y,cs=0;

   string S,S1;

   double d1,d2,d3;
   cin>>T;
   while(T--)
   {
       cin>>N>>W;
       for(i=0;i<N;i++)
       {
           cin>>u;
           cin>>ar[i];
       }
       sort(ar,ar+N);
       memset(dp,-1,sizeof(dp));
       ll ans=fun(0);
       cout<<"Case "<<++cs<<": "<<ans<<endl;
   }



 /************ALEYA YOUSUF ************/


 /************ALLAH IS ALMIGHTY ************/
return 0;

}

