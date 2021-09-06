
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

char CH[1000][1000];

vector<ll>G;

int main()
{
    //WRITE("output.txt");
   ll T,N,E,u,v,i,j,k,C=0,sum=0,ck=0,x,y;

   string S,S1;

   double d1,d2,d3;

   cin>>T;

   for(i=1;i<=T;i++)
   {
       cin>>S;

       stack<ll>ch;

       map<ll,ll>ans;

       vector<pair<ll,ll> >V;

       ll l=S.length();

       for(j=0;j<l;j++)
       {
           if(S[j]=='(' || S[j]=='{' || S[j]=='[' || S[j]=='<') ch.push(j);

           else if(S[j]==')')
           {

               if(ch.size()>0 && S[ch.top()]=='(') {V.push_back(make_pair(ch.top(),j));ch.pop();}
               else
               {
                   while(!ch.empty())
                   {
                       ch.pop();
                   }
               }


           }
           else if(S[j]==']')
           {

               if(ch.size()>0 && S[ch.top()]=='[') {V.push_back(make_pair(ch.top(),j));ch.pop();}
               else
               {
                   while(!ch.empty())
                   {
                       ch.pop();
                   }
               }

           }
           else if(S[j]=='}')
           {

               if(ch.size()>0 && S[ch.top()]=='{') {V.push_back(make_pair(ch.top(),j));ch.pop();}
               else
               {
                   while(!ch.empty())
                   {
                       ch.pop();
                   }
               }

           }
           else if(S[j]=='>')
           {

               if(ch.size()>0 && S[ch.top()]=='<') {V.push_back(make_pair(ch.top(),j));ch.pop();}
               else
               {
                   while(!ch.empty())
                   {
                       ch.pop();
                   }
               }

           }


       }

       ll v=V.size();

       for(j=v-1;j>=0;j--)
       {
           ll n1=V[j].first;

           ll n2=V[j].second;

           //cout<<n1<<" "<<n2<<endl;

           ans[n2]=0;

           ans[n1]+=(n2-n1)+1+ans[n2+1];

       }

       pc(i);nl;

       for(j=0;j<l;j++) cout<<ans[j]<<endl;

   }

 /************ALEYA YOUSUF ************/


 /************ALLAH IS ALMIGHTY ************/
return 0;

}
