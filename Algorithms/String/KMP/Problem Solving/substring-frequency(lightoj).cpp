// Problem: Substring Frequency
// Contest: LightOJ
// URL: https://lightoj.com/problem/substring-frequency
// Memory Limit: 64 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;
int lps[1000005];
void cal_lps(string p)
{
	int plen = p.length();
	lps[0]=0;
	for(int i =1,k=0;i<plen;i++)
	{
		while(k>0 && p[k]!=p[i])
		{
			k = lps[k-1];
		}
		
		if(p[k]==p[i])
		{
			k++;
		}
		
		lps[i]=k;
	} 
}

int find(string t, string p)
{
	int plen=p.length();
	int tlen=t.length();
	int ans=0;
	for(int i=0,j=0;i<tlen;i++)
	{
		while(j>0 && t[i]!=p[j])
		{
			j = lps[j-1];
		}
		
		if(p[j]==t[i]) j++;
		if(j==plen)
		{
			ans++;
			j=lps[j-1];
		}
	}
	
	return ans;
}





int main()
{ 

   int t;
   scanf("%d",&t);
   int cs=0;
   string text,pattern;
   while(t--)
   {
   	   cs++;
   	  cin>>text>>pattern;
   	  cal_lps(pattern);
   	  int res = find(text,pattern);
   	  printf("Case %d: %d\n",cs,res);
   }
   
   
   
   
   
   
   
   
   
   
   
	
}