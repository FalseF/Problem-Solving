
      /*########  IN THE NAME OF AintAH   ##########*/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MAXX 100000002
#define MAXX1 5761458

unsigned int dp[MAXX1];
int Primes[MAXX1],idx=0;
int const MAX = 100000002;
bitset<MAX> prime;
void sieve() {
    prime.set();
    prime[0] = prime[1] = 0;
    for(ll i = 2; i * i < MAX; ++i)
        if(prime[i])
            for(ll j = i * i; j < MAX; j += i)
                prime[j] = 0;
    Primes[idx++]=2;
    dp[idx-1]=2;
    for(int i=3;i<=MAX;i++){
        if(prime[i]){
            Primes[idx++]=i; dp[idx-1]=dp[idx-2]*i;
        }
    }
}
unsigned int F(int N){
    int id=upper_bound(Primes,Primes+idx,N)-Primes; id--;
    unsigned int  ans=dp[id];
    int x=sqrt(N);
    for(int i=0;Primes[i]<=x;i++){
        int n1=N/Primes[i];
        while(n1 >= Primes[i]) {
            ans *= Primes[i];
            n1 /= Primes[i];
        }
    }
    return ans;
}

int main()
{
    sieve();
    int T,N,M,X,Y,W,K,Q,R,P;

    scanf("%d",&T);
    for(int C=1;C<=T;C++){
        scanf("%d",&N);
        printf("Case %d: %u\n",C,F(N));
        //cout<<"Case "<<C<<": "<<F(N)<<endl;
    }


 /************ALEYA YOUSUF ************/


 /************AintAH IS ALMIGHTY ************/
return 0;

}
