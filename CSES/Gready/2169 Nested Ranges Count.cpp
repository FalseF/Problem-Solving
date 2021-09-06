// Problem: Nested Ranges Count
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/2169
// Memory Limit: 512 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

/*########  IN THE NAME OF ALLAH   ##########*/

#pragma GCC diagnostic ignored "-Wunused-variable"
#pragma GCC diagnostic ignored "-Wunused-parameter" 
#include<bits/stdc++.h>
using namespace std;
#pragma GCC diagnostic ignored "-Wunused-but-set-variable" 
#pragma GCC diagnostic ignored "-Wformat"
#define ll long long
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template<class T> using oset=tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
//less_equal (hobe jodi multiset er moto kaje korte chai tahole)
// less (hobe jodi set er moto kaj korte chai)
struct edge
{
	int L,R,id;
	edge(int a, int b, int c)
	{
		L=a;
		R=b;
		id=c;
	}
};

bool fun(edge a, edge b)
{
	if(a.L==b.L) return a.R>b.R;
	else return a.L<b.L;
}
int main()
{
   int T,cs=0;
    int n,l,r;
   vector<edge>v;
   cin>>n;
   int ans1[n+3],ans2[n+3];
    for(int i =1;i<=n;i++)
    {
    	cin>>l>>r;
    	v.push_back(edge(l,r,i));
    }
     
     sort(v.begin(),v.end(),fun);
     oset< pair<int,int > >st1,st2;
     for(int i =0,j=n-1;i<n;i++,j--)
     {
     	int v1=v[j].R;
     	int index1 = st1.order_of_key({v1+1,-1});
     	ans1[v[j].id] =index1;
     	int v2 = v[i].R;
     	int index2 = i-st2.order_of_key({v2,-1});
     	ans2[v[i].id] = index2; 
     	
     	st1.insert({v1,index1});
     	st2.insert({v2,index2});
     }
     
     for(int i =1;i<=n;i++) cout<<ans1[i]<<" ";cout<<endl;
     for(int i =1;i<=n;i++) cout<<ans2[i]<<" ";cout<<endl;
     
     
    
    
    
     
   
   /************ALEYA YOUSUF ************/
 
 /************ALLtAH IS ALMIGHTY ************/
return 0;
 
}