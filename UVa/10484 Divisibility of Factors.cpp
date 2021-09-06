
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
int main() {
    int N, D, i, j, n;
    while(cin>>N>>D) {
        if(N == 0 && D == 0)    break;
        int cnt[105] = {};
        ll res;
        for(i = 2; i <= N; i++) {
            n = i;
            for(j = 2; j <= n; j++)
                while(n%j == 0) {
                    n /= j, cnt[j]++;
                }
        }
        int zero = 0;
        for(i = 2; i < 100 && !zero; i++) {
            while(D%i == 0) {
                if(cnt[i] == 0) {
                    zero = 1;
                    break;
                }
                cnt[i]--;
                D /= i;
            }
        }
        if(D != 1 && (D > 100 || cnt[D] == 0))
            zero = 1;
        else if(D != 1)
            cnt[D]--;
        if(zero) {
           cout<<"0"<<endl;
            continue;
        }
        res = 1;
        for(i = 0; i <= N; i++) {
            res *= cnt[i]+1;
        }
        printf("%lld\n", res);
    }
    return 0;
}
