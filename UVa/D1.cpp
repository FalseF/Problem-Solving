
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


string s1[7][5]={{".","*","*","*","."},{"*",".",".",".","*"},{"*",".",".",".","*"},{"*","*","*","*","*"},
       {"*",".",".",".","*"},{"*",".",".",".","*"},{"*",".",".",".","*"}};


string s2[7][5]={{"*","*","*","*","."},{"*",".",".",".","*"},{"*",".",".",".","*"},{"*","*","*","*","."},
       {"*",".",".",".","*"},{"*",".",".",".","*"},{"*","*","*","*","."}};

string s3[7][5]={{".","*","*","*","."},{"*",".",".",".","*"},{"*",".",".",".","."},{"*",".",".",".","."},
            {"*",".",".",".","."},{"*",".",".",".","*"},{".","*","*","*","."}};

string s4[7][5]={{"*","*","*","*","."},{"*",".",".",".","*"},{"*",".",".",".","*"},{"*",".",".",".","*"},
        {"*",".",".",".","*"},{"*",".",".",".","*"},{"*","*","*","*","."}};

string s5[7][5]={{"*","*","*","*","*"},{"*",".",".",".","."},{"*",".",".",".","."},{"*","*","*","*","."},
            {"*",".",".",".","."},{"*",".",".",".","."},{"*","*","*","*","*"}};

string s6[7][5]={{"*","*","*","*","*"},{"*",".",".",".","."},{"*",".",".",".","."},{"*","*","*","*","."},
            {"*",".",".",".","."},{"*",".",".",".","."},{"*",".",".",".","."}};

string s7[7][5]={{".","*","*","*","."},{"*",".",".",".","*"},{"*",".",".",".","."},{"*",".",".",".","."},
            {"*",".",".","*","*"},{"*",".",".",".","*"},{".","*","*","*","."}};

string s8[7][5]={{"*",".",".",".","*"},{"*",".",".",".","*"},{"*",".",".",".","*"},{"*","*","*","*","*"},
        {"*",".",".",".","*"},{"*",".",".",".","*"},{"*",".",".",".","*"}};

string s9[7][5]={{".","*","*","*","."},{".",".","*",".","."},{".",".","*",".","."},{".",".","*",".","."},
        {".",".","*",".","."},{".",".","*",".","."},{".","*","*","*","."}};

string s10[7][5]={{".",".","*","*","*"},{".",".",".","*","."},{".",".",".","*","."},{".",".",".","*","."},
        {".",".",".","*","."},{"*",".",".","*","."},{".","*","*",".","."}};

string s11[7][5]={{"*",".",".",".","*"},{"*",".",".","*","."},{"*",".","*",".","."},{"*","*",".",".","."},
        {"*",".",".",".","*"},{"*",".",".","*","."},{".","*","*",".","."}};

string s12[7][5]={{"*","*","*","*","*"},{"*",".",".",".","."},{"*",".",".",".","."},{"*",".",".",".","."},
            {"*",".",".",".","."},{"*",".",".",".","."},{"*",".",".",".","."}};

string s13[7][5]={{"*",".",".",".","*"},{"*","*",".","*","*"},{"*",".","*",".","*"},{"*",".","*",".","*"},
        {"*",".",".",".","*"},{"*",".",".",".","*"},{"*",".",".",".","*"}};

string s14[7][5]={{"*",".",".",".","*"},{"*",".",".",".","*"},{"*","*",".",".","*"},{"*",".","*",".","*"},
        {"*",".",".","*","*"},{"*",".",".",".","*"},{"*",".",".",".","*"}};

string s15[7][5]={{".","*","*","*","."},{"*",".",".",".","*"},{"*",".",".",".","*"},{"*",".",".",".","*"},
            {"*",".",".",".","*"},{"*",".",".",".","*"},{".","*","*","*","."}};

string s16[7][5]={{"*","*","*","*","."},{"*",".",".",".","*"},{"*",".",".",".","*"},{"*","*","*","*","."},
       {"*",".",".",".","."},{"*",".",".",".","."},{"*",".",".",".","."}};

string s17[7][5]={{".","*","*","*","."},{"*",".",".",".","*"},{"*",".",".",".","*"},{"*",".",".",".","*"},
            {"*",".","*",".","*"},{"*",".",".","*","."},{".","*","*",".","*"}};


string s18[7][5]={{"*","*","*","*","."},{"*",".",".",".","*"},{"*",".",".",".","*"},{"*","*","*","*","."},
       {"*",".","*",".","."},{"*",".",".","*","."},{"*",".",".",".","*"}};

string s19[7][5]={{".","*","*","*","*"},{"*",".",".",".","."},{"*",".",".",".","."},{".","*","*","*","."},
            {".",".",".",".","*"},{".",".",".",".","*"},{"*","*","*","*","."}};

string s20[7][5]={{"*","*","*","*","*"},{".",".","*",".","."},{".",".","*",".","."},{".",".","*",".","."},
        {".",".","*",".","."},{".",".","*",".","."},{".",".",".",".","."}};

string s21[7][5]={{"*",".",".",".","*"},{"*",".",".",".","*"},{"*",".",".",".","*"},{"*",".",".",".","*"},
        {"*",".",".",".","*"},{"*",".",".",".","*"},{".","*","*","*","."}};

string s22[7][5]={{"*",".",".",".","*"},{"*",".",".",".","*"},{"*",".",".",".","*"},{"*",".",".",".","*"},
        {".","*",".","*","."},{"","*",".","*","."},{".",".","*",".","."}};

string s23[7][5]={{"*",".",".",".","*"},{"*",".",".",".","*"},{"*",".",".",".","*"},{"*",".","*",".","*"},
        {"*",".","*",".","*"},{"*",".","*",".","*"},{".","*",".","*","."}};

string s24[7][5]={{"*",".",".",".","*"},{"*",".",".",".","*"},{".","*",".","*","."},{".",".","*",".","."},
        {".","*",".","*","."},{"*",".",".",".","*"},{"*",".",".",".","*"}};

string s25[7][5]={{"*",".",".",".","*"},{"*",".",".",".","*"},{".","*",".","*","."},{".",".","*",".","."},
        {".",".","*",".","."},{".",".","*",".","."},{".",".","*",".","."}};
string s26[7][5]={{"*","*","*","*","*"},{".",".",".",".","*"},{".",".",".","*","."},{".",".","*",".","."},
        {".","*",".",".","."},{"*",".",".",".","."},{"*","*","*","*","*"}};

string ans="ABCDEFGHIJKLMNOPQRSTUVWXYZ";


int main()
{
   ll T,N,E,u,v,i,j,k,C=0,sum=0,ck=0,x,y;

   string S[10000],S1;

   double d1,d2,d3;

   for(i=0;i<7;i++)
   {
       cin>>S[i];

       if(i==0) {ck=S[i].lenght();}
   }

   ll n=ck/5;

   for(j=0;j<7;j++)
   {
       for(i=0;i<;i=i+5)
     {


     }
   }


 /************ALEYA YOUSUF ************/


 /************ALLAH IS ALMIGHTY ************/
return 0;

}