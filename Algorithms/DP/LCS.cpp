#include<bits./stdc++.h>
using namespace std;
int dp[1003][1003];
string S1,S2;
int l1,l2;
int fun(int i, int j)
{
    if(i>=l1 || j>=l2) return 0;
    if(dp[i][j]!=-1) return dp[i][j];
    int ans=0;
    if(S1[i]==S2[j])
    {
        ans=1+fun(i+1,j+1);
        dp[i][j]=ans;
    }
    else
    {
    	int v1=0,v2=0;
         v1=fun(i+1,j);
         v2=fun(i,j+1);
        ans=max(v1,v2);
        dp[i][j]=ans;

    }
    
    return dp[i][j];

}
int main()
{
    memset(dp,-1,sizeof(dp));
    cin>>S1>>S2;
    l1=S1.length();
    l2=S2.length();
    int ans=fun(0,0);
    cout<<ans<<endl;

}
