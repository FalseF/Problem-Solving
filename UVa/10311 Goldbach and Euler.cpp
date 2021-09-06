
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

bool pck[100000000+100]={0};
ll primes[100000004];
ll fuk[100000004],ck;
void sieve()
{
       fuk[2]=1;
       ck=1;
       primes[ck]=2;
       for(ll i=3; i*i<=100000000; i+=2)
        {
            if(!pck[i])
            {
                for(ll j=i*i; j<=100000000; j+=i*2)
                {
                    pck[j]=1;
                }
            }
        }

        for(ll i=3;i<=100000000;i+=2)
        {
            if(!pck[i])
            {
                ck++;
                fuk[i]=1;
                primes[ck]=i;
            }
        }
}


int main()
{
   ll T,N,E,u,Q,v,i,j,k,sum=0,x,y,cs=0;

   string S,S1;

   double d1,d2,d3;
   sieve();
   while(cin>>N)
   {
       if(N%2)
       {
           if(fuk[N-2]==1)
           {
               cout<<N<<" is the sum of "<<2<<" and "<<N-2<<"."<<endl;
           }
           else cout<<N<<" is not the sum of two primes!"<<endl;
           continue;
       }
       ll ans=0;
       ll pp=upper_bound(primes+1,primes+ck+1, N/2) - primes;
       for(;pp>=1;pp--)
       {
           if(fuk[N-primes[pp]]==1)
           {
               if(primes[pp]==N-primes[pp]) continue;
               cout<<N<<" is the sum of "<<min(primes[pp],N-primes[pp])<<" and "<<N-min(primes[pp],N-primes[pp])<<"."<<endl;
               ans=1;
               break;
           }
       }

       if(ans==0) cout<<N<<" is not the sum of two primes!"<<endl;
   }

 /************ALEYA YOUSUF ************/


 /************ALLAH IS ALMIGHTY ************/
return 0;

}
