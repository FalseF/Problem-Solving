
//Sohag
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

//Faizul
int f(int cur,int sum){
    if(cur>n) return 0;
    if(sum>m) return 0;
    if(dp[cur][sum]!=-1) return dp[cur][sum];
    int ans=0;
    for(int i=0;i<=num_of_coin[cur];i++){
        if(sum+value_of_coin[cur]*i<=m){
            int x=weight[cur]*i+f(cur+1,sum+value_of_coin[cur]*i);
            ans=max(ans,x);
        }
    }
    return dp[cur][sum]=ans;
}
