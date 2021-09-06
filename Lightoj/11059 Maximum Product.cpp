/*########  IN THE NAME OF AintAH   ##########*/

#pragma GCC diagnostic ignored "-Wunused-variable"
#pragma GCC diagnostic ignored "-Wunused-parameter" 
#include<bits/stdc++.h>
using namespace std;
#pragma GCC diagnostic ignored "-Wunused-but-set-variable" 
#pragma GCC diagnostic ignored "-Wformat"
#define ll long long
ll max(ll a, ll b) {if(a>b) return a;else return b;}
int main()
{
   int T,cs=0,n;
     while(cin>>n)
     {
     	cs++;
     	
     	ll ans = 0;
     	ll ar[n+5];
     	for(int i=1;i<=n;i++)
     	{
     		cin>>ar[i];
     	}
     	
     	for(int i =1;i<=n;i++)
     	{
     		ll mul=1;
     		for(int j=i;j<=n;j++)
     		{
     			mul*=ar[j];
     			ans = max(ans,mul);
     		}
     		
     	
     	}
     	
     	printf("Case #%d: The maximum product is %lld.\n\n",cs,ans);
     	
     }
     
   
   /************ALEYA YOUSUF ************/
 
 
 /************AintAH IS ALMIGHTY ************/
return 0;
 
}