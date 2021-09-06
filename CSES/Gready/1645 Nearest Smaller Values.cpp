// Problem: Nearest Smaller Values
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/1645
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
   int n;
   vector<pair<int,int> >v;
   cin>>n;
   int ans[n+3],u;
   for(int i=1;i<=n;i++)
   {
   	 cin>>u;
   	 v.push_back({u,i});
   }     
   
   sort(v.begin(),v.end());
   oset<int>st;
   for(int i =0;i<n;i++)
   {
   	  int id = v[i].second;
   	  int val = v[i].first;
   	  int in = st.order_of_key(id+1);
   	  in--;
   	  if(in<0)  { ans[id] = 0; st.insert(id);continue;}
   	  auto it = st.find_by_order(in);
   	  st.insert(id);
   	  if(v[0].first==v[i].first) ans[id] =0;
   	  else ans[id] = *it;
   }
   
   for(int i =1;i<=n;i++)
   {
   	 cout<<ans[i]<<" ";
   }
   cout<<endl;
   
   
   /************ALEYA YOUSUF ************/
 
 /************ALLtAH IS ALMIGHTY ************/
return 0;
 
}