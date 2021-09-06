// Problem: Traffic Lights
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/1163
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
#define INF 999999999999999999
#define nl printf("\n")
#define sf1(x)  scanf("%d",&x)
#define sf2(x,y)  scanf("%d %d",&x,&y)
#define sf3(x,y,z)  scanf("%d %d %d",&x,&y,&z)
#define pf1(x)  printf("%d\n",x)
#define pf2(x,y)  printf("%d %d\n",x,y)
#define pf3(x,y,z)  printf("%d %d %d\n",x,y,z)
#define pc(x,y)  printf("Case %d: %d\n",x,y)
#define pcn(x)  printf("Case %d:\n",x)
#define pb push_back
#define mp make_pair
#define pa pair<int,int>
#define mem(a,b) memset(a,b,sizeof(a))
#define MIN  -99999999999999999
#define READ(f) freopen(f,"r",stdin)
#define WRITE(f) freopen(f,"w",stdout)
#define pi 2.0*acos(0.0)
#define pi2 acos(-1.0)
#define vs(v) (v.begin(),v.end())
mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());
ll power(ll B,ll P){ if(P==0) return 1; ll X=power(B,P/2); if(P%2==0) return X*X; else return B*X*X;}
int fx[]={1,-1,0,0}; int fy[]={0,0,1,-1};
int main()
{
     int x,n,ans=1,mx=0,u;
     
     cin>>x>>n;
     set<int>st;
      st.insert(0);
     st.insert(x);
     multiset<int>mst;
     mst.insert(x);
     for(int i =1;i<=n;i++)
     {
     	cin>>u;
     	auto it = st.lower_bound(u);
     	auto it2=it;
     	it2--;
     	
     	//cout<<*it2<<" "<<*it<<endl;
     	
     	mst.erase(mst.find(*it-*it2));
     	mst.insert(u-*it2);
     	mst.insert(*it-u);
     	st.insert(u);
     	cout<<*--mst.end()<<" ";
     }
     
   
   /************ALEYA YOUSUF ************/
 
 /************ALLtAH IS ALMIGHTY ************/
return 0;
 
}