#include <bits/stdc++.h>
using namespace std;

int dp[1000][1000];
int coins;
int coin[1000];
int make;

int coin_change(int i,int amount) //i means koto coin nichi ar amount means koto taka banaichi.
{
    if(amount==make) return 1;
    else if(i>=coins)
    {
        if(amount==make) return 1;
        else return 0;
    }
    else if(dp[i][amount]!=-1) return dp[i][amount];
    int nia_pailam=0,na_nia_pailam=0;

    if(amount+coin[i] <=make)
    {
        nia_pailam=coin_change(i,amount+coin[i]);
    }
    na_nia_pailam=coin_change(i+1,amount);

    return dp[i][amount]=nia_pailam+na_nia_pailam;

}


int main()
{
    memset(dp,-1,sizeof(dp));
    cout<<"make ";
    cin>>make;
    cout<<"coin ";
    cin>>coins;

    for(int i=0;i<coins;i++) cin>>coin[i];
    coin_change(0,0);

    cout<<dp[0][0]<<endl;
}
