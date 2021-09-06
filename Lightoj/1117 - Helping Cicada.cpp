
      /*########  IN THE NAME OF ALLAH   ##########*/

#include<bits/stdc++.h>
using namespace std;
#define ll  long long
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
ll ar[30],num;
ll lcm_f(ll a,ll b)
{
    ll gcd=__gcd(a,b);
    ll fk=(a*b)/gcd;
    return fk;
}
ll combination(ll N)
{
    ll ans=0;
    for(ll i=1;i<(1<<N);i++)
    {
        ll lcm=1;
        ll cnt=0;
        for(ll j=0;j<N;j++)
        {
            if(i&(1<<j))
            {
                cout<<ar[j]<<" ";
                lcm=lcm_f(lcm,ar[j]);
                cnt++;
            }
        }
        cout<<endl<<endl;

        if(cnt&1)
        {
            ans+=num/lcm;
        }
        else{
            ans-=num/lcm;
        }
    }

    return ans;

}
int main()
{
    WRITE("1.txt");
   ll T,N,E,u,Q,v,i,j,k,sum=0,ck=0,x,y,cs=0;

   string S,S1;


   double d1,d2,d3;
   sf1(T);
   while(T--)
   {
       sf2(num,E);
       for(i=0;i<E;i++)
       {
           sf1(ar[i]);
       }
       ll ans=combination(E);
       cs++;
       printf("Case %lld: %lld\n",cs,num-ans);
   }



 /************ALEYA YOUSUF ************/


 /************ALLAH IS ALMIGHTY ************/
return 0;

}
