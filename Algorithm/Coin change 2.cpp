#include <bits/stdc++.h>
using namespace std;


int coin[]={1,5,10,25,50};
int dp[1000][1000];


int coin_change(int i,int amount)
{
    if(amount==0) return 1;
    else if(i>=5)
    {
        if(amount==0) return 1;
        else return 0;
    }
    else if(dp[i][amount]!=-1) return dp[i][amount];

    int ret1=0; int ret2=0;
    if(amount-coin[i]>=0)
    {
        ret1=coin_change(i,amount-coin[i]);
    }
    ret2=coin_change(i+1,amount);

    dp[i][amount]=ret1+ret2;

    return dp[i][amount];

}


int main()
{
    int make;
    memset(dp,-1,sizeof(dp));
    cin>>make;
    coin_change(0,make);
    cout<<dp[0][make]<<endl;

}
