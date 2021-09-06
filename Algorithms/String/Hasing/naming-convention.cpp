// Problem: Naming Convention
// Contest: Toph
// URL: https://toph.co/p/naming-convention
// Memory Limit: 512 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;
void FastIO(){
  ios_base :: sync_with_stdio (false);
    cin.tie(0);
  cout.precision(20);
}
int dp[104],len;
string s;
typedef unsigned long long ull;
set<ull>cnt;
const int base = 131;
int fun(int pos)
{
	if(pos==len) return 1;
	if(dp[pos]!=-1) return dp[pos];
	ull h1 =0;
	ull res = 0;
	for(int i = pos; i<len;i++)
	{
		h1 = h1* base + s[i];
		if(cnt.count(h1))
		{
			res |= fun(i+1);
		}
	}
	
	return dp[pos] = res;
}
bool cmp( pair<int, string > &a, pair<int , string> &b)
{
	return a.second.size() < b.second.size();
}
int main()
{
	FastIO();
	
	int n;
	vector< pair <int,string> > v, ans ;
	cin>>n;
	for(int i=1; i<=n;i++)
	{
		cin>>s;
		v.push_back({i,s});
	}
	
	sort(v.begin(),v.end(),cmp);
	 
	 for(int i=0 ;i<n; i++)
	 {
	 	len = v[i].second.size();
	 	int index = v[i].first;
	 	s = v[i].second;
	 	ull h1 = 0;
	 	fill(dp,dp+len+1,-1);
	 	if(fun(0)==1)
	 	{
	 		ans.push_back({index,s});
	 	}
	 	
	 	for(int j =0; j<len; j++)
	 	{
	 		h1 = h1 * base + s[j];
	 	}
	 	
	 	cnt.insert(h1);
	 }
	 
	 if(ans.size()==0)
	 {
	 	printf("No solution\n");
	 	return 0;
	 }
	 
	 sort(ans.begin(),ans.end());
	 cout<<ans[0].second;
	 for(int i=1; i<ans.size();i++)
	 {
	 	cout<<" "<<ans[i].second;
	 }
	 
	 cout<<"\n";
	 
}






