#include <bits/stdc++.h>

using namespace std;

int N,m,dp[101][51][10001],Taka;
int coin[101], number_coin[101];
int max_q[10000],min_q[10000],value[100000],hapines[100000];
int call(int i, int taken_i, int make)
{
    if(make>Taka || i>N) return 0;
    if(dp[i][taken_i][make]!=-1)
        return dp[i][taken_i][make];
        //cout<<i<<" "<<taken_i<<" "<<make<<endl;
    int p1=0, p2=0;
    if(taken_i>0 && (make+value[i])<=Taka)
    {
        p1=hapines[i]+call(i,taken_i-1,make+value[i]);
    }
    p2=call(i+1,max_q[i+1], make);
    dp[i][taken_i][make]=max(p1,p2);
    //cout<<dp[i][taken_i][make]<<endl;
    return dp[i][taken_i][make];
}

int main()
{
    int sum=0,hapi=0,ck1=0,ck3=0,ck2=0;
    cin>>N>>Taka;
    for(int i=1;i<=N;i++)
    {
        cin>>value[i];
    }
    for(int i=1;i<=N;i++)
    {
        cin>>hapines[i];

    }
    for(int i=1;i<=N;i++)
    {
        cin>>min_q[i];
    }
    for(int i=1;i<=N;i++)
    {
        cin>>max_q[i];
        max_q[i]-=min_q[i];
        if(max_q<0) ck1=1;
        sum+=min_q[i]*value[i];
        hapi+=min_q[i]*hapines[i];
    }

    if(ck1==1 || sum>Taka)
    {
        cout<<"0"<<endl; return 0;
    }
    Taka-=sum;
    memset(dp,-1,sizeof(dp));
    int ans=call(1,max_q[1],0);
    //cout<<hapi<<" "<<ans<<endl;
    ans+=hapi;
    cout<<ans<<endl;

}





