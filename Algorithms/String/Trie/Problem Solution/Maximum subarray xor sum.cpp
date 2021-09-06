#include<bits/stdc++.h>
using namespace std;
const int max_node = 1e6+5;
int trie[max_node][4];
int root,id;
void inti()
{
	root=0;
	id=0;
	for( int i = 0; i<2; i++)
	{
		trie[root][i]=-1;
	}
}
void Insert(vector<int>v, int len)
{
	int now=root;
	for(int i = 0;i<len; i++)
	{
		if( trie[now][v[i]] == -1)
		{
			trie[now][v[i]] = ++id;
			
			for( int j =0 ; j<2; j++)
			{
				trie[id][j] = -1;
			}
		}
		
		now=trie[now][v[i]];
		
	}
}

vector<int> Find(vector<int>v, int len)
{
	int now = root;
	vector<int>ans;
	for(int i =0 ;i<len; i++)
	{
		if(v[i]==0)
		{
			if(trie[now][1] !=-1)
			{
				ans.push_back(1);
				now = trie[now][1];
			}
			else if(trie[now][0] !=-1)
			{
				ans.push_back(0);
				now = trie[now][0];
			}
			else return ans;
		}
		
		else if(v[i]==1)
		{
			if(trie[now][0] !=-1)
			{
				ans.push_back(1);
				now = trie[now][0];
			}
			else if(trie[now][1] !=-1)
			{
				ans.push_back(0);
				now = trie[now][1];
			}
			else return ans;
		}
	}
	
	return ans;
}


vector<int> D_to_bi(int n)
{
	vector<int>v;
	int cnt = 0;
	while(n!=0)
	{
		int rem = n % 2;
		n/=2;
		v.push_back(rem);
		cnt++;
	}
	
	for(int i = cnt ; i<32; i++) v.push_back(0);
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
	inti();
	
	int t,n;
	
	scanf("%d",&n);
	int ar[n+5];
	int pre_xor[n+5]={0};
	for(int i = 1; i<=n; i++)
	{
		scanf("%d",&ar[i]);
		
		pre_xor[i] = pre_xor[i-1] ^ ar[i];
	}
	
	for(int i =1 ;i<=n;i++) cout<<pre_xor[i]<<" ";
	cout<<endl;
	
	int ans = pre_xor[1];
	
	vector<int>bin;
	bin = D_to_bi(ans);
	
	Insert(bin,32);
	
	for(int i=2;i<=n;i++)
	{
		
		ans = max( ans, pre_xor[i] );
		
		bin = D_to_bi(pre_xor[i]);
		
		int res = bi_to_D ( Find (bin,32) );
	
		ans = max(ans,res);
		
		Insert(bin,32);
	}
	
	printf("Maximum subarray xor is %d\n",ans);
	
	
}








