/*########  IN THE NAME OF ALLAH   ##########*/

#pragma GCC diagnostic ignored "-Wunused-variable"
#pragma GCC diagnostic ignored "-Wunused-parameter" 
#include<bits/stdc++.h>
using namespace std;
#pragma GCC diagnostic ignored "-Wunused-but-set-variable" 
#pragma GCC diagnostic ignored "-Wformat"
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
#define pc(x,y)  printf("Case %lld: %lld\n",x,y)
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

vector<int>dib[1000006];
int phi[1000006],div_cnt[1000005];
const int mod = 998244353;
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
void sieve()
{
	for(int i=1;i<=1000003;i++)
	{
		phi[i]+=i;// 
		dib[i].push_back(i);
		for(int j=i*2;j<=1000003;j+=i)
		{
			dib[j].push_back(i);
			phi[j]-=phi[i];
		}
	}
	
}
ll sum;
void add(int x)
{
	for(int d:dib[x])
	{
		sum+=(ll)(phi[d]*(div_cnt[d]++))%mod;
	}
}
void del(int x)
{
	for(int d:dib[x])
	{
		sum-=(ll)(phi[d]*(--div_cnt[d]))%mod;
	}
}
int main()
{
	sieve();
   int T,N,E,u,Q,v,n,i,j,k,ck=0,x,y,cs=0;
 
     sum=0;
     scanf("%d",&N);
     for(i=1;i<=N;i++){
     	scanf("%d",&u);
     	add(u);
     }
     scanf("%d",&Q);
     while(Q--)
     {
     	scanf("%d%d",&x,&y);
     	if(x==1)
     	{
     		add(y);
     	   N++;
     	}
     	else 
     	{
     		del(y);
     		N--;
     	}
     	
     	ll n=(N*(N-1ll))/2;
     	
     	n%=mod;
     	
     	sum%=mod;
     	
     	int ans=(sum*bigmod(n,mod-2,mod))%mod;
     	 if(ans < 0) ans += mod;
     	
     	printf("%d\n",ans);
     	
     }
   
   

   
   /************ALEYA YOUSUF ************/
 
 
 /************ALLAH IS ALMIGHTY ************/
return 0;
 
}