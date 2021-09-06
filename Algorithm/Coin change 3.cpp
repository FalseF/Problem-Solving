#include <bits/stdc++.h>
using namespace std;

int N;
int coin[10];
int dp[10][1000];
int C[10];

int coin_change(int i,int amount)
{
    if(amount==0) return 1;
    else if(i>=N)
    {
        if(amount==0) return 1;
        else return 0;
    }

    else if(amount<0) return 0;

    else if(dp[i][amount]!=-1) return dp[i][amount];

    int ret=0;

    for(int take=1;take<=C[i];take++)
    {
        ret+=coin_change(i+1,amount-coin[i]*take);
    }

    ret+=coin_change(i+1,amount);


    dp[i][amount]=ret;

    return dp[i][amount];

}


int main()
{
    int make;
    memset(dp,-1,sizeof(dp));
    cin>>N;
    cin>>make;
    for(int i=0;i<N;i++) cin>>coin[i];
    for(int i=0;i<N;i++) cin>>C[i];
    coin_change(0,make);
    cout<<dp[0][make]<<endl;

}
