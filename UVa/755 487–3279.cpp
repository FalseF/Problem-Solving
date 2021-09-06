
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
    WRITE("1.txt");
   ll T,N,E,u,Q,v,i,j,k,sum=0,ck=0,x,y,cs=0;

   string S,S1;

   double d1,d2,d3;
   map<char,char>M;
   M['A']='2';
   M['B']='2';
   M['C']='2';
   M['D']='3';
   M['E']='3';
   M['F']='3';
   M['G']='4';
   M['H']='4';
   M['I']='4';
   M['J']='5';
   M['K']='5';
   M['L']='5';
   M['M']='6';
   M['O']='6';
   M['N']='6';
   M['P']='7';
   M['R']='7';
   M['S']='7';
   M['T']='8';
   M['U']='8';
   M['V']='8';
   M['W']='9';
   M['X']='9';
   M['Y']='9';
   cin>>T;
   while(T--)
   {
       string s;
       map<string,ll>cnt;
       set<string>st;
       cin>>N;
       for(i=1;i<=N;i++)
       {

           cin>>s;
           string ans;
           ans.clear();
           ck=0;
           for(j=0;j<s.length();j++)
           {
               if(ck==3) {ck++;ans+='-';}
              if(s[j]>='0' && s[j]<='9')
               {
                   ans+=s[j];
                   ck++;

               }
               else if(M[s[j]]>'1') {ck++;ans+=M[s[j]];}
               if(ans.length()==8) break;
           }
           if(ans.length()==8)
           {
               st.insert(ans);
               cnt[ans]++;
               //cout<<ans<<endl;
           }

          // cout<<ans<<endl;

       }
       ll fk=0;
       for(auto it:st)
       {
           if(cnt[it]>1) {fk=1;cout<<it<<" "<<cnt[it]<<endl;}
       }
       if(fk==0) cout<<"No duplicates."<<endl;
       if(T) nl;
   }



 /************ALEYA YOUSUF ************/


 /************ALLAH IS ALMIGHTY ************/
return 0;

}
