
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

   string S[1000];

      ll m[27];

   for(i=0;i<7;i++)
   {
       cin>>S[i];

       if(i==0) {ck=S[i].length();}
   }

   ck=ck/6;

   k=0;
    for(u=0;u<=ck;u++)
    {
       memset(m,0,sizeof(m));

       if(u!=0) k++;

      for(i=0;i<7;i++){
        //cout<<i<<endl;
        for(int j=0;j<5;j++){



                if(S[i][j+k]==s1[0][i][j])
                {
                    m[1]++;

                    cout<<s1[0][i][j];
                }

//                else
//                {
//                    if(m[1]>0) m[1]--;
//                }

                 if(S[i][j+k]==s2[0][i][j])
                {
                    m[2]++;
                }

//                else
//                {
//                    if(m[2]>0) m[2]--;
//                }

                 if(S[i][j+k]==s3[0][i][j])
                {
                    m[3]++;
                }

//                else
//                {
//                    if(m[3]>0) m[3]--;
//                }

                 if(S[i][j+k]==s4[0][i][j])
                {
                    m[4]++;
                }

//                else
//                {
//                    if(m[4]>0) m[4]--;
//                }

                 if(S[i][j+k]==s5[0][i][j])
                {
                    m[5]++;
                }

//                else
//                {
//                    if(m[5]>0) m[5]--;
//                }

                 if(S[i][j+k]==s6[0][i][j])
                {
                    m[6]++;
                }

//                else
//                {
//                    if(m[6]>0) m[6]--;
//                }

                 if(S[i][j+k]==s7[0][i][j])
                {
                    m[7]++;
                }

//                else
//                {
//                    if(m[7]>0) m[7]--;
//                }

                 if(S[i][j+k]==s8[0][i][j])
                {
                    m[8]++;
                }

//                else
//                {
//                    if(m[8]>0) m[8]--;
//                }

                 if(S[i][j+k]==s9[0][i][j])
                {
                    m[9]++;
                }

//                else
//                {
//                    if(m[9]>0) m[9]--;
//                }

                 if(S[i][j+k]==s10[0][i][j])
                {
                    m[10]++;
                }

//                else
//                {
//                    if(m[10]>0) m[10]--;
//                }

                 if(S[i][j+k]==s11[0][i][j])
                {
                    m[11]++;
                }

//                else
//                {
//                    if(m[11]>0) m[11]--;
//                }

                 if(S[i][j+k]==s12[0][i][j])
                {
                    m[12]++;
                }

//                else
//                {
//                    if(m[12]>0) m[12]--;
//                }

                 if(S[i][j+k]==s13[0][i][j])
                {
                    m[13]++;
                }

//                else
//                {
//                    if(m[13]>0) m[13]--;
//                }

                 if(S[i][j+k]==s14[0][i][j])
                {
                    m[14]++;
                }

//                else
//                {
//                    if(m[14]>0) m[14]--;
//                }

                 if(S[i][j+k]==s15[0][i][j])
                {
                    m[15]++;
                }

//                else
//                {
//                    if(m[15]>0) m[15]--;
//                }

                 if(S[i][j+k]==s16[0][i][j])
                {
                    m[16]++;
                }

//                else
//                {
//                    if(m[16]>0) m[16]--;
//                }

                 if(S[i][j+k]==s17[0][i][j])
                {
                    m[17]++;
                }

//                else
//                {
//                    if(m[17]>0) m[17]--;
//                }

                 if(S[i][j+k]==s18[0][i][j])
                {
                    m[18]++;
                }

//                else
//                {
//                    if(m[18]>0) m[18]--;
//                }

                 if(S[i][j+k]==s19[0][i][j])
                {
                    m[19]++;
                }

//                else
//                {
//                    if(m[19]>0) m[19]--;
//                }

                 if(S[i][j+k]==s20[0][i][j])
                {
                    m[20]++;
                }

//                else
//                {
//                    if(m[20]>0) m[20]--;
//                }

                 if(S[i][j+k]==s21[0][i][j])
                {
                    m[21]++;
                }

//                else
//                {
//                    if(m[21]>0) m[21]--;
//                }

                 if(S[i][j+k]==s22[0][i][j])
                {
                    m[22]++;
                }

//                else
//                {
//                    if(m[22]>0) m[22]--;
//                }

                 if(S[i][j+k]==s23[0][i][j])
                {
                    m[23]++;
                }

//                else
//                {
//                    if(m[23]>0) m[23]--;
//                }

                 if(S[i][j+k]==s24[0][i][j])
                {
                    m[24]++;
                }

//                else
//                {
//                    if(m[24]>0) m[24]--;
//                }

                 if(S[i][j+k]==s25[0][i][j])
                {
                    m[25]++;
                }

//                else
//                {
//                    if(m[25]>0) m[25]--;
//                }

                 if(S[i][j+k]==s26[0][i][j])
                {
                    m[26]++;
                }

//                else
//                {
//                    if(m[26]>0) m[26]--;
//                }

        }
   }


   ll I,g=-1;

   for(ll p=1;p<=26;p++)
   {
       if(m[p]>g)
       {
           g=m[p];
           I=p;
       }
   }

   nl;

   cout<<ans[I-1];

   k=k+5;


   }

 /************ALEYA YOUSUF ************/


 /************ALLAH IS ALMIGHTY ************/
return 0;

}
