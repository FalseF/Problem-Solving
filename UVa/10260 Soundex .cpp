
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

int main()
{
   ll T,N,E,u,Q,v,i,j,k,sum=0,ck=0,x,y,cs=0;

   string S,S1;

   double d1,d2,d3;
   map<char,ll>M;
   M['B']=1;
   M['F']=1;
   M['P']=1;
   M['V']=1;
   M['C']=2;
   M['G']=2;
   M['J']=2;
   M['K']=2;
   M['Q']=2;
   M['S']=2;
   M['X']=2;
   M['Z']=2;
   M['D']=3;
   M['T']=3;
   M['L']=4;
   M['M']=5;
   M['N']=5;
   M['R']=6;
   while(cin>>S)
   {
       if(M[S[0]]>0) cout<<M[S[0]];
       for(i=1;i<S.length();i++)
       {
           if(M[S[i]]!=M[S[i-1]] && M[S[i]]>0) cout<<M[S[i]];
       }
       nl;
   }



 /************ALEYA YOUSUF ************/


 /************ALLAH IS ALMIGHTY ************/
return 0;

}
