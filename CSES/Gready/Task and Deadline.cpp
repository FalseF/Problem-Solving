// Problem: Tasks and Deadlines
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/1630
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

int main()
{
   ll T,cs=0,l,r;
     cin>>T;
     vector <pair<ll,ll> >v;
     while(T--)
     {
     	cin>>l>>r;
     	v.push_back({l,r});
     	
     }
     sort(v.begin(),v.end());
     ll start = 0;
     ll sum =0;
     
     for(auto it:v)
     {
     	start+=it.first;
     	sum+=(it.second - start);
     } 
     
     cout<<sum<<endl;
     
   
   /************ALEYA YOUSUF ************/
 
 /************ALLtAH IS ALMIGHTY ************/
return 0;
 
}