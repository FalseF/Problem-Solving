// Problem: Concert Tickets
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/1091
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
#define ull unsigned long long
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template<class T> using oset=tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
//less_equal (hobe jodi multiset er moto kaje korte chai tahole)
// less (hobe jodi set er moto kaj korte chai)
int main()
{
   int T,cs=0;
     int n,m,x;
     cin>>n>>m;
     
     multiset<int,greater<int> >st;
     for(int i=1;i<=n;i++)
     {
     	cin>>x;
     	st.insert(x);
     	
     }
    
     for(int i =1;i<=m;i++)
     {
     	cin>>x;
     	auto it=st.lower_bound(x);
     	if(it==st.end())
     	{
     		cout<<"-1"<<endl;
     	}
     	else {
     		cout<<*it<<endl;
     		st.erase(it);
     	}
     }
     // oset<ll>st;
     // cin>>n>>m;
     // for(int i =1;i<=n;i++)
     // {
     	// cin>>x;
     	// st.insert(x);
     // }
//      
     // for(int i =1;i<=m;i++)
     // {
     	// cin>>x;
     	// int id = st.order_of_key(x+1)-1;
     	// //cout<<id<<" ";
     	// auto it = st.find_by_order(id);
     	// //cout<<*it<<endl;
     	// ll val = *it;
     	// if(val<=x && id>=0) {cout<<val<<endl;st.erase(it);}
     	// else cout<<"-1"<<endl;
     // }
     
   
   /************ALEYA YOUSUF ************/
 
 /************ALLtAH IS ALMIGHTY ************/
return 0;
 
}