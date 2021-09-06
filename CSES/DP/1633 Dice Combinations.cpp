// Problem: Dice Combinations
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/1633
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
#define ull unsigned long long
#define INF 999999999999999999
#define nl printf("\n")
#define sf1(x)  scanf("%d",&x)
int n;
ll dp[10000005];
const ll mod = 1e9+7;
int main()
{
	
	int n;
	dp[0] = 1;
	dp[1]=1;
	dp[2]=2;
	for(int i =3;i<=1000001;i++)
	{
		for(int j = i-1;j>=(i-6) && j>=0;j--)
		{
			dp[i]=(dp[i]%mod + dp[j]%mod )%mod;
		}
	
	}
	
	cin>>n;
	
	cout<<dp[n]<<endl;
   
   /************ALEYA YOUSUF ************/
 
 /************ALLtAH IS ALMIGHTY ************/
return 0;
 
}