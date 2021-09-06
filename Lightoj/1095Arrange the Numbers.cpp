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
const ll MOD= 1e9+7;

const ll maxn = 1001;

ll inv[maxn],fact[maxn];

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

void pre(){
	fact[0]=inv[0]=1;
	for(ll i=1;i<maxn;i++){
		fact[i]=(fact[i-1]*i)%MOD;
	}
	inv[maxn-1]=bigmod(fact[maxn-1],MOD-2,MOD);
	for(ll i=maxn-2;i>=1;i--){
		inv[i]=(inv[i+1]*(i+1))%MOD;
	}
}
ll ncr(ll n,ll r){
	ll x=fact[n];
	ll y=(inv[r]*inv[n-r])%MOD;
	return (x*y)%MOD;
}
int main()
{
   int T,N,E,u,Q,v,n,i,j,k,sum=0,ck=0,x,y,cs=0;
 
     string S,S1;
 
     double d1,d2,d3;
     
     pre();
    
     sf1(T);
     while(T--)
     {
     	cs++;
     	int M,K;
        sf3(N,M,K);
        ll ans1=ncr(M,K);
        ll ans2=fact[N-K];
        int n=N-K;
        for(i=1;i<=(M-K);i++)
        {
        	if(i%2)
        	{
        		ans2-=((ncr(M-K,i))*(fact[n-i]))%MOD;
        	}
        	else 
        	{
        		ans2+=((ncr(M-K,i))*(fact[n-i]))%MOD;
        	}
        	if(ans2<0ll)
        	{
        		ans2+=MOD;
        		
        	}
        	
        	ans2%=MOD;
        }
        
        ll ans=(ans1*ans2)%MOD;
       
        printf("Case %d: %lld\n",cs,ans);
     	
     }
   
   

   
   /************ALEYA YOUSUF ************/
 
 
 /************AintAH IS ALMIGHTY ************/
return 0;
 
}