
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
ll check(ll N)
{
    ll ar[100]={0};
    vector<ll>v;
    while(N!=0)
    {
        ar[N%10]++;
         if(ar[N%10]>1 || ar[N%10]==0) return 0;
         v.pb(N%10);
        N=N/10;

    }

    return 1;
}
ll fun(int N)
{
    if(check(N)==0) return 0;
    vector<ll>v;
    while(N!=0)
    {
        //ar[N%10]++;
         //if(ar[N%10]>1 || ar[N%10]==0) return 0;
         v.pb(N%10);
        N=N/10;

    }
    string st="";
    for(ll i=v.size()-1;i>=0;i--)
    {
        char ch=v[i]+48;
        st+=ch;
    }
    ll d[11]={0};
    ll digit=st[0]-48;
    ll nxt=0;
    for(ll i=0;i<st.length();i++)
    {
        nxt=nxt+digit%(st.length());
        if(nxt>=st.length())
        {
            nxt=nxt-st.length();
        }
        if(d[digit]==1) return 0;
        d[digit]=1;
        digit=st[nxt]-48;
    }
    if(st[0]-48==digit) return 1;
    else return 0;
}
ll ans[9999999];

int main()
{
   ll T,N,E,u,Q,v,i,j,k,sum=0,ck=0,x,y,cs=0;

   string S,S1;

   double d1,d2,d3;
   for(i=9876543;i>9;i--)
   {
       if(fun(i))
       {
           ans[i]=i;
       }
       else ans[i]=ans[i+1];
   }
   while(cin>>N)
   {
       cs++;
       if(N==0) return 0;
       cout<<"Case "<<cs<<": "<<ans[N]<<endl;
   }


 /************ALEYA YOUSUF ************/


 /************ALLAH IS ALMIGHTY ************/
return 0;

}
