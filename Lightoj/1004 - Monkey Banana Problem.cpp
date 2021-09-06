
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
#define pc(x)  printf("Case %lld: ",x)
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

ll dp[205][205],ar[205][205],N;
ll row;

ll fun(ll i, ll j)
{
    if(i>=1 && j<=row && i<=row && j>=1)
    {
        if(dp[i][j]!=-1) return dp[i][j];
        ll ans=-MAX;
        ans=max(ans,(fun(i+1,j)+ar[i][j]));
        if(i<N) ans=max(ans,(fun(i+1,j+1)+ar[i][j]));
        else if (i>=N) ans=max(ans,(fun(i+1,j-1)+ar[i][j]));
        return dp[i][j]=ans;
    }
    else return 0;
}

int main()
{
    WRITE("1.txt");
   ll T,E,u,v,i,j,k,sum=0,ck=0,x,y;

   string S,S1;

   double d1,d2,d3;
   sf1(T);
   while(T--)
   {
       ck++;
       sf1(N);

       for(i=1;i<=2*N;i++)
       {
           for(j=1;j<=2*N;j++) dp[i][j]=-1,ar[i][j]=0;
       }

        for(i=1; i<=N; i++)
        {
            for(j=1; j<=i; j++)
            {

                sf1(ar[i][j]);
            }
        }
        ll r=N,c=0;

        for(i=1;i<N;i++)
        {
            r++;
            c=0;
            for(j=N-i;j>=1;j--)
            {
                c++;
                sf1(ar[r][c]);
            }

        }


        row=2*N-1;

        ll ans=fun(1,1);
        pc(ck);pf1(ans);

    }

 /************ALEYA YOUSUF ************/


 /************ALLAH IS ALMIGHTY ************/
return 0;

}
