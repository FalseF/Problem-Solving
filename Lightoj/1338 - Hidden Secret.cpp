
      /*########  IN THE NAME OF ALLHA   ##########*/

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

ll fx[]={1,-1,0,0}; ll fy[]={0,0,1,-1};

ll A[300005],B[300005],C[300005],visited[300005],level[300005];

char CH[1000][1000],ch;

vector<ll>V;

vector<ll>G;

map<ll,ll>M1;

map<ll,ll>M2;

int main()
{
   ll T,N,E,u,v,i,j,k,C=0,sum=0,ck=0,x,y;

   string S,S1,S2,S3;

   double d1,d2,d3;

   sf1(T);

   cin.ignore();

   for(i=1;i<=T;i++)
   {
       getline(cin,S);

       getline(cin,S1);

       ll ck1=0,ck2=0;

       ll l1=S.length();

        ll l2=S1.length();

        ck=0;

        M1.clear();

        M2.clear();

       for(j=0;j<l1;j++)
       {
           if(S[j]==' ') {continue;}

           if(S[j]>'Z') S[j]=S[j]-32;

           M1[S[j]-'A']++;

           S2+=S[j];


         ck1++;
       }

        for(j=0;j<l2;j++)
       {
           if(S1[j]==' ') continue;

           if(S1[j]>'Z') {S1[j]=S1[j]-32;}

           M2[S1[j]-'A']++;

           ck2++;

           S3+=S1[j];
       }

       pc(i);


       if(ck1>=ck2)
       {
           for(j=0;j<ck2;j++)
           {
               if(M1[S3[j]-'A']<M2[S3[j]-'A'])
               {
                   ck=1;
                   cout<<" No"<<endl;break;
               }
           }
       }

       else{
            for(j=0;j<ck1;j++)
           {
               if(M1[S2[j]-'A']>M2[S2[j]-'A'])
               {
                   ck=1;
                   cout<<" No"<<endl;break;
               }
           }
       }

       if(ck==0) cout<<" Yes"<<endl;

       S2.clear();

       S3.clear();


   }

 /************ALEYA YOUSUF ************/


 /************ALLHA IS ALMIGHTY ************/
return 0;

}
