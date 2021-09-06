#include<bits/stdc++.h>
using namespace std;

vector<int> D_to_bi(int n)
{
	vector<int>v;
	while(n!=0)
	{
		int rem = n % 2;
		n/=2;
		v.push_back(rem);
	}
	reverse(v.begin(),v.end());
	
	return v;
}

int bi_to_D ( vector<int> v)
{
	int sum= 0;
	int len = v.size()-1;
	for(int i=0;i<v.size();i++)
	{
		sum = sum + v[i] * pow(2,len-i);
	}
	
	return sum;
}
int main()
{
	int n;
	scanf("%d",&n);
	
	vector<int>bin;
	
	bin = D_to_bi(n);
	int De = bi_to_D(bin);
	
	cout<<De<<endl;
	
}