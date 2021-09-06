
      /*########  IN THE NAME OF ALLAH   ##########*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
int dp[10001][10001];
const ll mod=1000000007;
int main()
{
    cout<<INT_MAX<<endl;
    int i,j,k;
    for(i=0;i<10000;i++) {dp[i][0]=1;dp[0][i]=1;}
    for(i=1;i<10000;i++)
    {
        for(j=1;j<10000;j++)
        {
            ll ck=dp[i-1][j]%mod;
            ll ck1=dp[i][j-1]%mod;
            dp[i][j]=(int)(ck1+ck)%mod;
        }
    }
    int N,T,r,c;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d%d",&r,&c);
        printf("%d\n",dp[r-1][c-1]);
    }
 /************ALEYA YOUSUF ************/


 /************ALLAH IS ALMIGHTY ************/
return 0;

}
