// Problem: Book Shop
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/1158
// Memory Limit: 512 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

/*########  IN THE NAME OF ALLAH   ##########*/

#pragma GCC diagnostic ignored "-Wunused-variable"
#pragma GCC diagnostic ignored "-Wunused-parameter" 
#include<bits/stdc++.h>
using namespace std;
#pragma GCC diagnostic ignored "-Wunused-but-set-variable" 
#pragma GCC diagnostic ignored "-Wformat"
#define ll long long
int dp[1001][100005];
int amount, n, taka[1002],page[1003];

int main()
{
	
	//memset(dp,-1,sizeof(dp));
   
    scanf("%d%d",&n,&amount);
   for(int i = 1;i<=n;i++)
   {
   	  scanf("%d",&taka[i]);
   }
   
   for(int i =1;i<=n;i++)
   {
   	 scanf("%d",&page[i]);
   }
   
   for(int i =1;i<=n;i++)
   {
   	 for(int j =0;j<=amount;j++)
   	 {
   	 	 dp[i][j] = dp[i-1][j];
   	 	 int left = j - taka[i];
   	 	 if(left>=0)
   	 	 {
   	 	 	 dp[i][j] = max(dp[i][j], dp[i-1][left] + page[i]);
   	 	 }
   	 }
   }
   
   printf("%d\n",dp[n][amount]);
   
     
   
   /************ALEYA YOUSUF ************/
 
 /************ALLtAH IS ALMIGHTY ************/
return 0;
 
}