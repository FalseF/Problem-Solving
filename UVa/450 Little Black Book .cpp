
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
struct edge{
  string Mr,Fn,Ln,Rn,Hp,Wp,Wb,Dp;
  edge(string m,string f, string l, string r, string d, string h,string w,string b)
  {
      Mr=m;
      Fn=f;
      Ln=l;
      Rn=r;
      Dp=d;
      Hp=h;
      Wp=w;
      Wb=b;
  }

};
vector<edge>V;
//edge m, edge f, edge l, edge r, edge d, edge h, edge w, edge b
bool fun(edge a,edge b)
{
    return a.Ln<b.Ln;
}
int main()
{
    //WRITE("1'.txt");
   ll T,N,E,u,Q,v,i,j,k,sum=0,ck=0,x,y,cs=0;

   string S,S1;

   double d1,d2,d3;
   //getchar();
   cin>>T;
   getchar();
   while(T--)
   {

       string dp,fn,ln,mr,rn,hp,wp,wb;
       getline(cin,dp);
       //getchar();
       while(getline(cin,S))
       {
           ck=0;
           if(S.size()==0) break;
           string ck1="";
           for(i=0;i<S.size();i++)
           {
               if(S[i]==',')
               {
                   ck++;
               if(ck==1)
               {
                    mr=ck1;
                    ck1.clear();
               }
               else if(ck==2)
               {
                    fn=ck1;
                    ck1.clear();
               }
                else if(ck==3)
               {
                    ln=ck1;
                    ck1.clear();
               }
                else if(ck==4)
               {
                    rn=ck1;
                    ck1.clear();
               }
                else if(ck==5)
               {
                    hp=ck1;
                    ck1.clear();
               }
                else if(ck==6)
               {
                    wp=ck1;
                    ck1.clear();
               }
               }
               else ck1+=S[i];

           }
           wb=ck1;V.pb(edge(mr,fn,ln,rn,dp,hp,wp,wb));

       }
   }
   sort(V.begin(),V.end(),fun);
   for(i=0;i<V.size();i++)
   {
         cout<<"----------------------------------------\n";
        cout << V[i].Mr << " " << V[i].Fn << " " << V[i].Ln << endl;
        cout << V[i].Rn << endl;
        printf("Department: ");
        cout <<V[i].Dp << endl;
        printf("Home Phone: ");
        cout << V[i].Hp << endl;
        printf("Work Phone: ");
         cout << V[i].Wp << endl;
        printf("Campus Box: ");
        cout << V[i].Wb << endl;
   }

 /************ALEYA YOUSUF ************/


 /************ALLAH IS ALMIGHTY ************/
return 0;

}
/*
2
English Department
Dr.,Tom,Davis,Anystreet USA,555-2832,555-2423,823
Mrs.,Jessica,Lembeck,Center Street,555-2543,555-8584,928

Computer Science
Mr.,John,Euler,East Pleasure,555-1432,555-2343,126
*/
