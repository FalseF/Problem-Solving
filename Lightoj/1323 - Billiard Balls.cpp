
      /*########  IN THE NAME OF ALLAH   ##########*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 999999999999999999
#define pb push_back
#define mp make_pair
#define vs(v) (v.begin(),v.end())
ll max(ll a,ll b) {if(a>b) return a; else return b;} ll min(ll a,ll b) {if(a<b) return a; else return b;}

int main()
{
   ll T,N,E,u,Q,v,i,j,k,sum=0,ck=0,x,y,cs=0;

   string S,S1;

   double d1,d2,d3;
   cin>>T;
   while(T--)
   {
       cs++;
       ll l,w,n;
       vector<pair<ll,ll>>ans;
       cin>>l>>w>>n>>k;
       for(i=1;i<=n;i++)
       {
           char ch1,ch2;
           cin>>x>>y>>ch1>>ch2;
           if(ch2=='E') x+=k;
           else x=abs(x-k);
           if(ch1=='N') y+=k;
           else y=abs(y-k);

           ll ck1=x/l,ck2=y/w;

           if(ck1%2)
           {
               x=l-(x%l);
           }
           else x=x%l;

           if(ck2%2)
           {
               y=w-(y%w);
           }
           else y=y%w;
           ans.pb(mp(x,y));
       }
       sort(ans.begin(),ans.end());

       cout<<"Case "<<cs<<":"<<endl;

       for(i=0;i<n;i++)
       {
           cout<<ans[i].first<<" "<<ans[i].second<<endl;

       }
   }



 /************ALEYA YOUSUF ************/


 /************ALLAH IS ALMIGHTY ************/
return 0;

}
