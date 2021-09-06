class Solution {
public:
    int uniquePaths(int r, int c) {

       int T,N,E,u,Q,v,i,j,k,sum=0,ck=0,x,y,cs=0;
        int dp[1000][1000]={0};

   for(i=1;i<=r;i++)
   {
       for(j=1;j<=c;j++)
       {
           dp[i][j]=1;
       }
   }
   for(i=2;i<=r;i++)
   {
       for(j=2;j<=c;j++)
       {
           dp[i][j]=dp[i][j-1]+dp[i-1][j];
       }
   }
   return dp[r][c];

    }
};
