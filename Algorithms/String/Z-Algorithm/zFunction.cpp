
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
	
	for(int i=0;i<n;i++)
	{
		cout<<z[i]<<" ";
		
	}
	cout<<endl;
}

int main()
{
	string text,pattern,res;
	cin>>text>>pattern;
	
	int plen = pattern.length();
	res=pattern;
	res+='#';
	res+=text;
	 zfun(res);
	

	
}





