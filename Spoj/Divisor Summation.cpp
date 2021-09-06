/*########  IN THE NAME OF AintAH   ##########*/

#pragma GCC diagnostic ignored "-Wunused-variable"
#pragma GCC diagnostic ignored "-Wunused-parameter" 
#include<bits/stdc++.h>
using namespace std;
#pragma GCC diagnostic ignored "-Wunused-but-set-variable" 
#pragma GCC diagnostic ignored "-Wformat"
#define ll long long
#define INF 999999999999999999
#define nl printf("\n")
#define  r0 return 0
#define  r1 return 1
#define sf1(x)  scanf("%d",&x)
#define sf2(x,y)  scanf("%d %d",&x,&y)
#define sf3(x,y,z)  scanf("%d %d %d",&x,&y,&z)
#define pf1(x)  printf("%d\n",x)
#define pf2(x,y)  printf("%d %d\n",x,y)
#define pf3(x,y,z)  printf("%d %d %d\n",x,y,z)
#define yes  printf("YES\n")
#define no  printf("NO\n")
#define pc(x,y)  printf("Case %d: %d\n",x,y)
#define pcn(x,y)  printf("Case %d:\n",x)
#define pb push_back
#define mp make_pair
#define pa pair<int,int>
#define mem(a,b) memset(a,b,sizeof(a))
#define MIN  -99999999999999999
#define READ(f) freopen(f,"r",stdin)
#define WRITE(f) freopen(f,"w",stdout)
#define pi 2.0*acos(0.0)
#define vs(v) (v.begin(),v.end())
ll power(ll B,ll P){ if(P==0) return 1; ll X=power(B,P/2); if(P%2==0) return X*X; else return B*X*X;}
int fx[]={1,-1,0,0}; int fy[]={0,0,1,-1};
const ll mx = 1000001;
ll NOD[mx+5];
bool pck[100000000+100]={0};
ll primes[100000004],ck;
void sieve()
{
       ck=1;
       primes[ck]=2;
       for(ll i=3; i*i<=100000002; i+=2)
        {
            if(!pck[i])
            {
                for(ll j=i*i; j<=100000002; j+=i*2)
                {
                    pck[j]=1;
                }
            }
        }

        for(ll i=3;i<=100000002;i+=2)
        {
            if(!pck[i])
            {
                ck++;
                primes[ck]=i;
            }
        }
}

ll SOD(ll N)
{
	ll ans=1;
	for(ll i=1;primes[i]<=sqrt(N);i++)
	{
		if(N%primes[i]) continue;
		ll temp=1,p=1;
		while(N%primes[i]==0)
		{
			N/=primes[i];
			p*=primes[i];
			temp+=p;
		}
		
		ans*=temp;
	}
	
	if(N!=1)
	{
		ans*=(1+N);
	}
	
	return ans;
}
int main()
{
	sieve();
   ll T,N,E,u,Q,v,n,i,j,k,sum=0,x,y,cs=0;
 
     string S,S1;
 
     double d1,d2,d3;
     cin>>T;
     while(T--)
     {
     	cin>>N;
     	printf("%lld\n",SOD(N)-N);
     	
     }
   
   

   
   /************ALEYA YOUSUF ************/
 
 
 /************AintAH IS ALMIGHTY ************/
return 0;
 
}