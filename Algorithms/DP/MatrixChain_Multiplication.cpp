#include<bits/stdc++.h>
using namespace std;
int dp[1000][1000],ans=99999999,row[1000],col[1000],visited[1000][1000];
int fun(int b, int e)
{
     //cout<<b<<" "<<e<<endl;
    if(b>=e) return 0;
    if(visited[b][e]) return dp[b][e];
    int ans=99999999;
    for(int mid=b;mid<e;mid++)
    {
        int left=fun(b,mid);
        int right=fun(mid+1,e);
        int n1=left+right+row[b]*col[e]*col[mid];
        ans=min(ans,n1);

    }
        visited[b][e]=1;
        dp[b][e]=ans;
        return dp[b][e];
}
int main()
{
    int n;
    memset(dp,-1,sizeof(dp));
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>row[i]>>col[i];
    }

    cout<<fun(1,n)<<endl;

}
