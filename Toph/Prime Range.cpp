#include <bits/stdc++.h>
using namespace std;
#define MAX 100000000
typedef long long ll;
bool A[MAX+100]={0};
ll ans[100000004];
void sieve()
{
      ll ck=1;
       ans[ck]=2;
       for(ll i=3; i*i<=MAX; i+=2)
        {
            if(!A[i])
            {
                for(ll j=i*i; j<=MAX; j+=i*2)
                {
                    A[j]=1;
                }
            }
        }

        for(ll i=3;i<=MAX;i+=2)
        {
            if(!A[i])
            {
                ck++;
                ans[ck]=ans[ck-1]+i;
            }
        }
}
int main()
{
    sieve();
   ll T,ck;
   scanf("%lld",&T);
   while(T--)
   {
       ll r,l;
       scanf("%lld%lld",&l,&r);
       printf("%lld\n",ans[r]-ans[l-1]);
   }
}
