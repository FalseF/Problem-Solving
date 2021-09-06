 /*########  IN THE NAME OF ALLAH   ##########*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl cout<<endl
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
#define pc(x)  printf("Case %lld:",x)
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

ll B[300005],C[300005],visited[300005],level[300005];ll ans[2000000];

string  fun(string S, ll N)
{

             ostringstream str1;

          str1 << N;

    string  S1= str1.str();


     ll l1=S.length();

     string R1;

     ll ck=0;

       ll l2=S1.length();

       ll C;

       ll carry=0;

       C=0;


       if(l1>l2)
       {
           for(ll i=l2-1;i>=0;i--)
           {
               ll n1=S1[i]-48;

               carry=0;

               C++;

               ck=C;


               for(ll j=l1-1;j>=0;j--)
               {
                   ll n2=S[j]-48;

                   ll m=(n2*n1+carry+ans[ck])%10;

                   carry=(n2*n1+carry+ans[ck])/10;

                    ans[ck]=m;

                   ck++;

               }

               if(carry!=0) {ans[ck]=carry;} else ck--;
           }
       }

       else
       {

       for(ll i=l1-1;i>=0;i--)
           {
               ll n1=S[i]-48;

               carry=0;

               C++;

               ck=C;


               for(ll j=l2-1;j>=0;j--)
               {
                   ll n2=S1[j]-48;

                   ll m=(n2*n1+carry+ans[ck])%10;

                   carry=(n2*n1+carry+ans[ck])/10;

                    ans[ck]=m;

                   ck++;

               }

               if(carry!=0) {ans[ck]=carry;} else ck--;
           }

       }

       ll i,j;

       for(i=ck,j=0;i>=1;i--,j++) {R1+=ans[i]+48;ans[i]=0;}

       return R1;



}


int main()
{
    //WRITE("output.txt");
   ll T,N,E,u,v,i,j,k,C=0,sum=0,ck=0,x,y;

   string S;

   double d1,d2,d3;

   map<ll,string>ans;

   ans[0]="1";

   S="1";

   for(i=1;i<=1000;i++)
       {


           S=fun(S,i);

           ans[i]=S;
       }

   while(cin>>N)
   {


       cout<<N<<"!"<<endl;



       cout<<ans[N]<<endl;
   }



 /************ALEYA YOUSUF ************/


 /************ALLAH IS ALMIGHTY ************/
return 0;

}




