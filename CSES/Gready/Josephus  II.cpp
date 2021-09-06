// Problem: Josephus Problem II
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/2163
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
int main()
{
   int T,cs=0;
   int n,k,u;
   oset<int>st;
   cin>>n>>k;
   vector<int>ans;
   for(int i =1;i<=n;i++)
   {
   	  st.insert(i);
   }
   
   int ck = 0;
   while(1)
   {
   	  if(st.empty()) break;
   	  int sz = st.size();
   	  ck+=k;
   	  ck%=sz;
   	  int id = ck;
   	  auto  val = st.find_by_order(id);
   	  ans.push_back(*val);
   	  st.erase(val);
   	  
   	  if(st.empty()) break;
   }
   
   for(auto it:ans)
   {
   	   cout<<it<<" ";
   }
   
   cout<<endl;
   
     
   
   /************ALEYA YOUSUF ************/
 
 /************ALLtAH IS ALMIGHTY ************/
return 0;
 
}