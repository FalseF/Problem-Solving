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
int power(int B,int P){ if(P==0) return 1; int X=power(B,P/2); if(P%2==0) return X*X; else return B*X*X;}
int fx[]={1,-1,0,0}; int fy[]={0,0,1,-1};

bool pck[10000000+100]={0};
ll primes[10000004],ck;
void sieve()
{
       ck=1;
       primes[ck]=2;
       for(ll i=3; i*i<=1000000; i+=2)
        {
            if(!pck[i])
            {
                for(ll j=i*i; j<=1000000; j+=i*2)
                {
                    pck[j]=1;
                }
            }
        }

        for(ll i=3;i<=1000000;i+=2)
        {
            if(!pck[i])
            {
                ck++;
                primes[ck]=i;
            }
        }
}

ll bigmod(ll b,ll p,ll m){
    if(p==0) return 1;
    else if(p%2==0){
        ll r=bigmod(b,p/2,m);
        return ((r%m)*(r%m))%m;
    }
    else{
        ll r=bigmod(b,p-1,m);
        return ((r%m)*(b%m))%m;
    }
}

ll NOD(ll N, ll P)
{
	ll ans=0;
	while(N/P)
	{
		ans+=N/P;
		N/=P;
	}
	return ans;
}
const ll mod = 10000019;
int main()
{
	sieve();
   int T,N,E,u,Q,v,n,i,j,k,sum=0,x,y,cs=0;
 
     string S,S1;
 
     double d1,d2,d3;
     sf1(T);
     while(T--)
     {
     	cs++;
     	ll res=1ll;
     	sf2(N,k);
     	for(i=1;i<=ck;i++)
     	{
     		ll num=NOD(N,primes[i]);
     		if(num<k) break;
     		res*=bigmod(primes[i],num/k,mod);
     		res%=mod;
     	}
     	
     	if(res>1ll) printf("Case %d: %lld\n",cs,res);
     	else printf("Case %d: -1\n",cs);
     	
     	
     }

   /************ALEYA YOUSUF ************/
 
 
 /************AintAH IS ALMIGHTY ************/
return 0;
 
}