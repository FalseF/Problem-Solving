#include <bits/stdc++.h>
using namespace std;

int weight[100],cost[100];
int capacity;

int dp[100][100];
int n;

int knapsack(int next,int current)
{
    int profit1=0,profit2=0;

    if(next>n) return 0;

    else if(dp[next][current]!=-1) return dp[next][current];

    else if(current+weight[next] <=capacity)
    {
        profit1=cost[next] + knapsack(next+1 , current+weight[next]);
    }

    profit2=knapsack(next+1,current);

    dp[next][current]=max(profit1,profit2);

    return dp[next][current];

}

int main()
{

    memset(dp,-1,sizeof(dp));

    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>weight[i]>>cost[i];
    }
    cin>>capacity;
    cout<<knapsack(1,0);

    return 0;
}
