#include<bits/stdc++.h>
using namespace std;
int dp[34][1100],path[35][1100];
int capacity,N,t;
int weight[1000],value[1000];
vector<int>ans;
ll knasack(int i, int w)
{
    if(i>=N) return 0;
    if(dp[i][w]!=-1) return dp[i][w];
    int p1=0,int p2=0;
    if(w+3*weight[i]*t<=capacity)
    {
        p1=value[i]+knasack(i+1,w+3*weight[i]*t);
    }
    p2=knasack(i+1,w);
    if(p1>p2) path[i][w]=1;
    else path[i][w]=2;
    dp[i][w]=max(p1,p2);
    return dp[i][w];
}

ll printpath(int i, int w)
{
    if(path[i][w]==-1) return 0;
    if(path[i][w]==1)
    {
        ans.push_back(i);
        return 1+printpath(i+1,w+weight[i]*3*t);
    }
    else {
            return printpath(i+1,w);
    }
}
