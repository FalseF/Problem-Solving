
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
ll ar[10][10];
queue<pair<ll,ll>>Q;
void fun()
{
    ll ar1[33][33];
    while(!Q.empty())
    {
        ll u1=Q.front().first;
        ll u2=Q.front().second;
        ar[u1][u2]=(ar[u1][u2]+1)%10;
        Q.pop();
        for(ll i=0;i<4;i++)
        {
            ll v1=u1+fx[i];
            ll v2=u2+fy[i];
            if(v1>=0 && v2>=0 && v1<3 && v2<3)
            {
                 ar[v1][v2]=(ar[v1][v2]+1)%10;
            }
        }
    }
}
int main()
{
   ll T,N,E,u,v,i,j,k,sum=0,ck=0,x,y,cs=0;

   string S,S1;

   double d1,d2,d3;
   while(getline(cin,S))
   {
       cs++;
       for(i=0;i<3;i++)
       {
           for(j=0;j<3;j++)
           {
               ar[i][j]=0;
           }
       }

       for(i=0;i<S.length();i++)
       {
           if(S[i]=='a')
           {
               Q.push(make_pair(0,0));
           }
           else if(S[i]=='b')
           {
               Q.push(make_pair(0,1));
           }
           else if(S[i]=='c')
           {
               Q.push(make_pair(0,2));
           }
           else if(S[i]=='d')
           {
               Q.push(make_pair(1,0));
           }
           else if(S[i]=='e')
           {
               Q.push(make_pair(1,1));
           }
           else if(S[i]=='f')
           {
               Q.push(make_pair(1,2));
           }
           else if(S[i]=='g')
           {
               Q.push(make_pair(2,0));
           }
           else if(S[i]=='h')
           {
               Q.push(make_pair(2,1));
           }
           else if(S[i]=='i')
           {
               Q.push(make_pair(2,2));
           }
       }
       fun();
       printf("Case #%lld:\n",cs);
       for(i=0;i<3;i++)
       {
           for(j=0;j<3;j++) {
                if(j) cout<<" ";
            cout<<ar[i][j];
           }
           nl;
       }
   }



 /************ALEYA YOUSUF ************/


 /************ALLAH IS ALMIGHTY ************/
return 0;

}
