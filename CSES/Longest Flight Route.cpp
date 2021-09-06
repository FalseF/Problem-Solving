/*########  IN THE NAME OF AintAH   ##########*/

#pragma GCC diagnostic ignored "-Wunused-variable"
#pragma GCC diagnostic ignored "-Wunused-parameter" 
#include<bits/stdc++.h>
using namespace std;
#pragma GCC diagnostic ignored "-Wunused-but-set-variable" 
#pragma GCC diagnostic ignored "-Wformat"
#define ll long long
#define pb push_back
int visited[200005],dis[200005];
stack<int>st;
int parent[200005];
vector<int>graph[200005],r_graph[200005];
void topsort(int s)
{
	visited[s]=1;
	
	for(auto it:graph[s])
	{
		if(visited[it]==0)
		{
			dis[it]=dis[s]+1;
			parent[it]=s;
			topsort(it);
			
		}
	}
	
	st.push(s);
	return;
	
}
int main()
{
   int T,N,E,u,Q,v,n,i,j,k,sum=0,ck=0,x,y,cs=0;
 
     string S,S1;
 
     double d1,d2,d3;
     cin>>N>>E;
     for(i=1;i<=E;i++)
     {
     	cin>>u>>v;
     	graph[u].pb(v);
     	r_graph[v].pb(u);
     }
     
     topsort(1);
     if(visited[N]==0)
     {
     	cout<<"IMPOSSIBLE"<<endl;
     	return 0;
     }
     
     while(!st.empty())
     {
     	u=st.top();
     	st.pop();
     	for(auto it:r_graph[u])
     	{
     		if(dis[u]<dis[it]+1)
     		{
     			dis[u]=dis[it]+1;
     			parent[u]=it;
     		}
     	}
     }
     
     cout<<dis[N]+1<<endl;
     vector<int>ans;
     ans.pb(N);
     int prev=parent[N];
     while(prev>0)
     {
     	ans.pb(prev);
     	prev=parent[prev];
     }
     reverse(ans.begin(),ans.end());
     for(auto it:ans)
     {
     	cout<<it<<" ";
     }
   
   /************ALEYA YOUSUF ************/
 
 
 /************AintAH IS ALMIGHTY ************/
return 0;
 
}