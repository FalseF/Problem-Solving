
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

ll A[3000005],B[3000005],C[3000005],visited[3000005],level[3000005];
char CH[1000][1000];
vector<ll>V,G;

int main()
{
   ll T,N,E,u,Q,v,i,j,k,sum=0,ck=0,x,y,cs=0;

   string s1,s2;
   while(cin>>s1>>s2)
   {
       ll l1=s1.length();
       ll l2=s2.length();
       ll ans=0;
           for(ll base=2;base<=36;base++)
           {
                     ll num,sum1=0,cntu=0;
                       ck=0;
                       for(j=l1-1;j>=0;j--)
                    {
                           if(s1[j]>=65 && s1[j]<=90) num=s1[j]-55;
                            else num=s1[j]-48;
                            if(num>=base) {cntu=1;break;}
                            sum1+=(num*power(base,ck++));

                   }
                   if(cntu==1) continue;

            for(ll base1=2;base1<=36;base1++)
            {
                      ll num,sum2=0,cntu=0;
                       ck=0;
                       for(j=l2-1;j>=0;j--)
                    {
                           if(s2[j]>=65 && s2[j]<=90) num=s2[j]-55;
                            else num=s2[j]-48;
                            if(num>=base1) {cntu=1;break;}
                            sum2+=(num*power(base1,ck++));

                   }
                if(cntu==1) continue;
                    if(sum1==sum2)
                {
                    ans=1;
                        cout<<s1<<" (base "<<base<<") = "<<s2<<" (base "<<base1<<")"<<endl;
                            break;
                }

         }

                   if(ans==1) break;
            }
//
//
//            for(i=0;i<v1.size();i++)
//            {
//                cout<<v1[i]<<" ";
//            }
//            nl;
//            for(i=0;i<v2.size();i++) cout<<v2[i]<<" ";
//            nl;
       if(ans==0)
       {
           cout<<s1<<" is not equal to "<<s2<<" in any base 2..36"<<endl;
       }
   }



 /************ALEYA YOUSUF ************/


 /************ALLAH IS ALMIGHTY ************/
return 0;

}
