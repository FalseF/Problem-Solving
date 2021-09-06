
 class Solution {
public:
    int T,E,u,Q,v,i,j,k,sum=0,ck=0,x,y,cs=0,taka,N;
   int dp[202][50002],A[10000];
   int fun(int i, int make)
{
    if(make>taka) return 0;
    if(i>N) return 0;
    if(make==taka) return 1;
    if(dp[i][make]!=-1) return dp[i][make];
    int p1=0,p2=0;
    p1=fun(i+1,make+A[i]);
    p2=fun(i+1,make);
    return dp[i][make]=p1+p2;
}
    bool canPartition(vector<int>& nums) {
        memset(dp,-1,sizeof(dp));
   for(i=0;i<nums.size();i++)
   {
       A[i+1]=nums[i];
       ck+=A[i+1];
   }
   if(ck%4)
   {
       return false;
   }
   else
   {
       taka=ck/4;
       N=nums.size();
       x=fun(1,0);
       if(x>=4) return true;
       else return false;
   }
 /************ALEYA YOUSUF ************/


 /************ALLAH IS ALMIGHTY ************/

    }
};
