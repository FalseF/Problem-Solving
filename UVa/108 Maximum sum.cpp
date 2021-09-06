/*########  IN THE NAME OF AintAH   ##########*/

#pragma GCC diagnostic ignored "-Wunused-variable"
#pragma GCC diagnostic ignored "-Wunused-parameter" 
#include<bits/stdc++.h>
using namespace std;
#pragma GCC diagnostic ignored "-Wunused-but-set-variable" 
#pragma GCC diagnostic ignored "-Wformat"
#define ll long long
 int matrix[1001][1001];
int ar[1000+3];
int mt_csum[1001][1001];
int main()
{
   int T,cs=0;
   int row,col;
     cin>>row;
     col = row;
    
     int ans = 0;
	     for(int i =1;i<=row;i++)
	     {
	     	for(int j =1;j<=col;j++)
	     	{
	     		cin>>matrix[i][j];
	     	}
	     }
	     
	     for(int c =1;c<=col;c++)
	     {
	     	for(int r=1;r<=row;r++)
	     	{
	     		mt_csum[r][c] = mt_csum[r-1][c] + matrix[r][c];
	     	}
	     }
       
	     for(int r1 = 1;r1<=row;r1++)
	     {
	     	int ck = 0;
	     	for(int r2=r1;r2<=row;r2++)
	     	{
	     		int sum;
	     		ck=1;
	     		int ar_csum[col+3]={0};
	     		int mn=0;
	     		for(int c =1;c<=col;c++)
	     		{
	     			sum = (mt_csum[r2][c]-mt_csum[r1-1][c]);
	     			ar[ck++] = sum;
	     			
	     		}
	     		
	     		for(int i =1; i<=col;i++) ar_csum[i] = ar_csum[i-1]+ar[i];
	     		
	     		for(int i =1;i<=col;i++)
	     		{
	     			int num = ar_csum[i] - mn;
	     			mn = min(mn,ar_csum[i]);
	     			ans =max(ans,num);
	     		}
	     		
	     	}
	     	
	     	
	     }
	     
	    cout<<ans<<endl;
    
   
   /************ALEYA YOUSUF ************/
 
 
 /************AintAH IS ALMIGHTY ************/
return 0;
 
}