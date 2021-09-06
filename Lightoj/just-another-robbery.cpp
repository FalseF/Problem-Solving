/*########  IN THE NAME OF ALLAH   ##########*/

#pragma GCC diagnostic ignored "-Wunused-variable"
#pragma GCC diagnostic ignored "-Wunused-parameter" 
#include<bits/stdc++.h>
using namespace std;
#pragma GCC diagnostic ignored "-Wunused-but-set-variable" 
#pragma GCC diagnostic ignored "-Wformat"
const double  esp =  .0000001 ;
int vis[104][10004],w[104],n;
double dp[104][10004],p[104];

double fun(int pos, int money)
{
	 if(pos==n+1) 
	 {
	 	if(money==0) return 1.0;
	 	else return 0.0;
	 }
	 
	 if(vis[pos][money]!=-1) return dp[pos][money];
	 vis[pos][money] = 1;
	 double res = fun(pos+1, money);
	 if(money - w[pos]>=0)
	 {
	 	res = max( res, ( 1.0- p[pos] ) * fun( pos+1, money - w[pos]));
	 }
	 
	 return dp[pos][money] = res;
}

int main()
{
   int T,cs=0;
      cin>>T;
     while(T--)
     {
     	cs++;
     	double P;
     	memset(vis,-1,sizeof(vis));
     	cin>>P>>n;
     	int mx_val = 0;
     	for(int i = 1;i<=n;i++)
     	{
     		cin>>w[i]>>p[i];
     		mx_val+=w[i];
     	}
     	
     	//for(int i =1;i<=n;i++) cout<<w[i]<<" "<<p[i]<<endl;
     	
     	int  ans = 0;
     	
     	for(int i =1;i<=mx_val;i++)
     	{
     		 double d1 = fun(1,i);
     		 
     		 //cout<<d1<<endl;
     		if( ( 1.0 - d1 ) < ( P + esp) ) ans = i;
     	}
     	
     	printf("Case %d: %d\n",cs,ans);
     	

     	
     }
     
   
   /************ALEYA YOUSUF ************/
 
 /************ALLtAH IS ALMIGHTY ************/
return 0;
 
}