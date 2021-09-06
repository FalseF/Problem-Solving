
#include<bits/stdc++.h>
using namespace std;
const int max_node = 1e6+4;
int zfun(string res)
{
	int n = res.length();
	vector<int>z(n,0);
	for(int i=1,l=0,r=0;i<n;i++)
	{
		if(i<=r)
		{
			z[i] = min(r-i+1,z[i-l]);
			
		}
		
		while(i+z[i]<n && res[z[i]]==res[i+z[i]])
		{
			z[i]++;
			
		}
		
		
		if(i+z[i]-1>r)
		{
			l=i;
			r=l+z[i]-1;
		}
		
	}
	int ck=0,mx=0;
	for(int i=0;i<n;i++)
	{
		
		if(z[i]+i==n && mx>=z[i])
		{
			for(int j=i;j<n;j++) cout<<res[j];
			ck=1;break;
		}
		mx=max(mx,z[i]);
		
	}
	
	if(ck==0) cout<<"Just a legend\n";
	
}

int main()
{
	string text,pattern,res;
	cin>>text;
	
	int plen = text.length();
	 zfun(text);
	

	
}





