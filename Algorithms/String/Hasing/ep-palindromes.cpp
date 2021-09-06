// Problem: EP-Palindromes
// Contest: Toph
// URL: https://toph.co/p/ep-palindromes
// Memory Limit: 512 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

/*########  IN THE NAME OF AintAH   ##########*/

#pragma GCC diagnostic ignored "-Wunused-variable"
#pragma GCC diagnostic ignored "-Wunused-parameter" 
#include<bits/stdc++.h>
using namespace std;
#pragma GCC diagnostic ignored "-Wunused-but-set-variable" 
#pragma GCC diagnostic ignored "-Wformat"
mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());

#define ll long long
#define ull unsigned long long
const int mx = 2e6+4;
ull h1[mx+4];
void Hash()
{
	for(int i =0; i<=mx;i++)
	{
		h1[i] = rng();
	}
}
int main()
{
	Hash();
	int n,t, cs=0;
   scanf("%d",&t);
   while(t--)
   {
   	 cs++;
   	 scanf("%d",&n);
   	 map<ull,ull> cnt;
   	 cnt[0]=1;
   	 ull num = 0;
   	 ull res =0,v;
   	 for(int i=1;i<=n;i++)
   	 {
   	 	scanf("%llu",&v);
   	 	num = num ^ h1[v];
   	 	//cout<<num<<endl;
   	 	if(cnt.count(num))
   	 	{
   	 		res+=cnt[num];
   	 	}
   	 	cnt[num]++;
   	 	
   	 }
   	 
   	 printf("Case %d: %llu\n",cs,res);
   }
   
	
   /************ALEYA YOUSUF ************/
 
 
 /************AintAH IS ALMIGHTY ************/
return 0;
 
}