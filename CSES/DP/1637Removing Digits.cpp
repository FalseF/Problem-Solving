// Problem: Removing Digits
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/1637
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
int main()
{
   int n,ck;
   cin>>n;
   vector<int> dp(n+4,1e9);
   dp[0] = 0;
   for(int i =1;i<=n;i++)
   {
   	  for(char c:to_string(i))
   	  {
   	  	   dp[i] = min(dp[i], dp[i-c+48]+1);
   	  }
   }
   
   cout<<dp[n]<<endl;
     
   
   /************ALEYA YOUSUF ************/
 
 /************ALLtAH IS ALMIGHTY ************/
return 0;
 
}