
      /*########  IN THE NAME OF ALLAH   ##########*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 999999999999999999
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

ll A[300005],B[300005],C[300005],visited[300005],level[300005];

char CH[1000][1000],ch;

vector<ll>V;

vector<ll>G;

int main()
{
   ll T,N,E,u,v,i,j,k,C=0,sum=0,ck=0,x,y;

    //WRITE("output.txt");

   string S,S1;

   double d1,d2,d3;

   while(cin>>S>>S1)
   {
       ll l1=S.length();

       ll l2=S1.length();

       ll p1=l1-1;

       ll p2=l2-1;

       ll sum1=0;

       ll sum2=0;

       ck=0;

       ll base1=0,base2=0;

       for(i=2;i<=36;i++)
       {
           sum1=0;

           p1=l1-1;

           ll ans=111111111;

           for(j=0;j<l1;j++)
           {

               ll n1=S[j]-48;

               if(S[j]>='A'  && S[j]<='Z') {n1=n1-7;}

               //cout<<n1<<endl;

               sum1+=n1*power(i,p1);p1--;
           }

            for(k=2;k<=36;k++)
           {

               sum2=0;

               p2=l2-1;

               for(u=0;u<l2;u++)
               {

                   ll n2=S1[u]-48;

                   if(S1[u]>='A'  && S1[u]<='Z') n2=n2-7;

                   sum2+=n2*power(k,p2);p2--;

               }

               if(sum1==sum2)
               {
                   ll mn=abs(i-k);

                   if(mn<ans)
                   {
                       ans=mn;

                       base1=i;base2=k;
                   }


               }



           }


       }

       if(base1==0)
       {
           cout<<S<<" is not equal to "<<S1<<" in any base 2..36"<<endl;
       }
       else cout<<S<<" (base "<<base1<<") = "<<S1<<" (base "<<base2<<")"<<endl;
   }









 /************ALEYA YOUSUF ************/


 /************ALLAH IS ALMIGHTY ************/
return 0;

}
