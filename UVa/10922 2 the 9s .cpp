
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


int main()
{
    WRITE("1.txt");
   ll T,N,E,u,Q,v,i,j,k,sum=0,ck=0,x,y,cs=0;

   string S,S1;

   double d1,d2,d3;

   while(cin>>S)
   {
       if(S=="0") r0;
       ck=0;
       N=0;
       ll ans=1;
       for(i=0;i<S.length();i++)
       {
           ck=ck*10+S[i]-'0';
           N=N+S[i]-'0';
           ck%=9;
       }
       sum=0;
       //cout<<N<<endl;
       while(N!=9 && N>9)
       {
           ans++;
           sum=0;
           while(N)
           {
               sum+=N%10;
               N/=10;
           }
           N=sum;
       }

       if(ck==0)
       {
           cout<<S<<" is a multiple of 9 and has 9-degree "<<ans<<"."<<endl;
       }
       else cout<<S<<" is not a multiple of 9."<<endl;

   }

 /************ALEYA YOUSUF ************/


 /************ALLAH IS ALMIGHTY ************/
return 0;

}
