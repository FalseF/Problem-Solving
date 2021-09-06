// Problem: MaxXOR
// Contest: Toph
// URL: https://toph.co/p/maxxor
// Memory Limit: 512 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;
typedef long  long ll;
const int max_node = 1e7+5;
ll trie[max_node][4];
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


vector<int> D_to_bi(ll n)
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

ll bi_to_D ( vector<int> v)
{
	ll sum= 0;
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
	
	int t;
	ll n;
	
	scanf("%lld",&n);
	unordered_map<ll,int> index;
	ll ar[n+5];
	for(int i = 1; i<=n; i++)
	{
		scanf("%lld",&ar[i]);
		index[ar[i]]=i;
		vector<int> bin;
		bin = D_to_bi(ar[i]);
		Insert(bin,32);
	}
	
	int q,cs=0;
	scanf("%d",&q);
	while(q--)
	{
	    cs++;
		scanf("%lld",&n);
		vector<int>bin;
		bin = D_to_bi(n);

		ll ans = bi_to_D ( Find(bin,32) );
		 n = ans ^ n;
		printf("Query %d: %d %lld\n",cs,index[n],ans);
	}
	
}