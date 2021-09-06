
#include <bits/stdc++.h>
#define SZ(X) ((int)(X).size())
#define ALL(X) (X).begin(), (X).end()
#define REP(I, N) for (int I = 0; I < (N); ++I)
#define REPP(I, A, B) for (int I = (A); I < (B); ++I)
#define RI(X) scanf("%d", &(X))
#define RII(X, Y) scanf("%d%d", &(X), &(Y))
#define RIII(X, Y, Z) scanf("%d%d%d", &(X), &(Y), &(Z))
#define DRI(X) int (X); scanf("%d", &X)
#define DRII(X, Y) int X, Y; scanf("%d%d", &X, &Y)
#define DRIII(X, Y, Z) int X, Y, Z; scanf("%d%d%d", &X, &Y, &Z)
#define RS(X) scanf("%s", (X))
#define CASET int ___T, case_n = 1; scanf("%d ", &___T); while (___T-- > 0)
#define MP make_pair
#define PB push_back
#define MS0(X) memset((X), 0, sizeof((X)))
#define MS1(X) memset((X), -1, sizeof((X)))
#define LEN(X) strlen(X)
#define PII pair<int,int>
#define VI vector<int>
#define VPII vector<pair<int,int> >
#define PLL pair<long long,long long>
#define VPLL vector<pair<long long,long long> >
#define F first
#define S second
typedef long long LL;
using namespace std;
const int MOD = 1e9+7;
const int SIZE = 1e6+10;
LL res[SIZE],fac[SIZE],cc[SIZE];
void ADD(LL &x,LL v){x=(x+v)%MOD;}
LL mypow(LL x,LL y){
    x%=MOD;
    LL res=1%MOD;
    while(y){
        if(y&1)res=res*x%MOD;
        y>>=1;
        x=x*x%MOD;
    }
    return res;
}
int main(){
    DRII(n,k);
    fac[0]=1;
    REPP(i,1,SIZE)fac[i]=fac[i-1]*i%MOD;
    REPP(i,1,k+5){
        res[i]=(res[i-1]+mypow(i,k))%MOD;
    }
    if(n<=k+4)return 0*printf("%I64d\n",res[n]);
    REPP(i,1,k+5){
        cc[i]=mypow(fac[i-1]*fac[k+4-i],MOD-2)*res[i]%MOD;
        if((k+4-i)%2==1)cc[i]=(MOD-cc[i])%MOD;
    }
    LL an=0;
    LL tmp=1;
    REPP(i,1,k+5)tmp=tmp*(n-i)%MOD;
    REPP(i,1,k+5){
        ADD(an,tmp*mypow(n-i,MOD-2)%MOD*cc[i]);
    }
    cout<<an;
    return 0;
}





#include<bits/stdc++.h>

using namespace std;

const int MAXN = 1e6 + 10;
const int MM = 1e9 + 7;
typedef long long ll;
typedef pair<int, int> PII;

ll pw(ll p, ll q){
	ll ret = 1;
	for(; q; q>>=1){
		if (q & 1){
			ret = ret * p % MM;
		}
		p = p * p % MM;
	}
	return ret;
}

ll getInv(ll p){
	return pw(p, MM - 2);
}

ll f[MAXN << 1];

int main(){
	ll n, k;
	cin>>n>>k;
	for(int i = 1; i <= k + 3; i++)
		f[i] = pw(i , k);
	for(int i = 2; i <= k + 3; i++)
		f[i] = (f[i] + f[i-1]) % MM;
	if (n <= k + 3)
		cout<<f[n]<<endl;
	else{
		ll ans = 1;
		k++;
		for(int i = 1; i <= k + 1; i++)
			ans = ans * (n - i) % MM;
		ll now = 1;
		int flag;
		if (k & 1)
			flag = -1;
		else
			flag = 1;
		for(int i = 1; i <= k; i++)
			now = now * i % MM;
		ll Nico = 0;
	//	for(int i = 1; i <= k + 1; i++)
	//		cout<<f[i]<<' '; cout<<endl;
	//	cout<<"ans: "<<ans<<endl;
	//	cout<<"now: "<<now<<endl;
		for(int i = 1; i <= k + 1; i++){
			Nico += ans * getInv(n - i) % MM * f[i] % MM * getInv(now) * flag % MM;
			flag = -flag;
			now = now * getInv(k + 1 - i) % MM * i % MM;
		}
		cout<<(Nico % MM + MM ) % MM <<endl;
	}
	return 0;
}
