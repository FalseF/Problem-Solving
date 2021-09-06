
      /*########  IN THE NAME OF ALLAH   ##########*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 999999999999999999
#define nl printf("\n")
#define  r0 return 0
#define  r1 return 1
#define sf1(x)  scanf("%lld",&x)
#define sf2(x,y)  scanf("%lld %lld",&x,&y)
#define sf3(x,y,z)  scanf("%lld %lld %lld",&x,&y,&z)
#define pf1(x)  printf("%lld\n",x)
#define pf2(x,y)  printf("%lld %lld\n",x,y)
#define pf3(x,y,z)  printf("%lld %lld %lld\n",x,y,z)
#define yes  printf("YES\n")
#define no  printf("NO\n")
#define pc(x)  printf("Case %lld :",x)
#define pb push_back
#define mp make_pair
#define pa pair<ll,ll>
#define mem(a,b) memset(a,b,sizeof(a))
#define MIN  -99999999999999999
#define READ(f) freopen(f,"r",stdin)
#define WRITE(f) freopen(f,"w",stdout)
#define pi 2.0*acos(0.0)
#define sp printf(" ")
#define vs(v) (v.begin(),v.end())
ll max(ll a,ll b) {if(a>b) return a; else return b;} ll min(ll a,ll b) {if(a<b) return a; else return b;}
ll power(ll B,ll P){ if(P==0) return 1; ll X=power(B,P/2); if(P%2==0) return X*X; else return B*X*X;}
ll fx[]={1,-1,0,0}; ll fy[]={0,0,1,-1};

int main()
{
    WRITE("1.txt");
   ll T,N,E,u,Q,i,j,k,sum=0,ck=0,x,y,cs=0;

   string S,S1;

   double d1,d2,d3;
   ll ans=0;
   ck=0;
   vector<ll>v;
   cin>>T;
   while(cin>>N)
   {
       if(N==0)
       {
           cs++;
           sort(v.begin(),v.end());
           for(i=v.size()-1,j=1;i>=0;i--,j++)
           {
               ll d=(2*power(v[i],j));
               if(d>5000000)
               {
                   ck=1;break;
               }
               if((ans+d)>5000000)
               {
                   ck=1;
                   break;
               }
               ans+=d;
               //cout<<v[i]<<endl;
           }
           if(ck==1) cout<<"Too expensive"<<endl;
           else cout<<ans<<endl;
           ans=0;
           ck=0;
           v.clear();
           if(cs==T) return 0;
       }
       else
        v.pb(N);
   }


 /************ALEYA YOUSUF ************/


 /************ALLAH IS ALMIGHTY ************/
return 0;

}
