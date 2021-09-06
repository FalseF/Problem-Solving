/*########  IN THE NAME OF AintAH   ##########*/
#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main()
{
	int n,k,res=0;
	scanf("%d%d",&n,&k);
	int ar[n+5],csum[n+4]={0};
	for(int i =1 ;i<=n;i++)
	{
		scanf("%d",&ar[i]);
		csum[i] = csum[i-1] + ar[i];
	}
	map<int,int>cnt;
	cnt[0] =1;
	for(int i=1;i<=n;i++)
	{
		//cout<<csum[i]<<" ";
		int num = csum[i] - k;
		if(cnt.count(num))
		{
			res+=cnt[num];
		}
		cnt[csum[i]]++;
	}
	
	cout<< res <<endl;
	
   /************ALEYA YOUSUF ************/
 /************AintAH IS ALMIGHTY ************/
return 0;
 
}