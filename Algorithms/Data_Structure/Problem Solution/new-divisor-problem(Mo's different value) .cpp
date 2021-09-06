// Problem: New Divisor Problem
// Contest: Toph
// URL: https://toph.co/p/new-divisor-problem
// Memory Limit: 512 MB
// Time Limit: 2000 ms
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
int ans1[1000009];
void SOD()
{
	for(int i=1000005;i>=1;i--)
	{
		for(int j=i;j<=1000005;j+=i)
		{
		  ans1[j]+=1;
		}
	}
}

int ans[100005],blog,cnt[1000006],sum=0,ar[100005],res[1000006];
struct edge{
 int Left,Right,Index,K;
 edge(int a, int b, int c,int k)
 {
     Left=a;
     Right=b;
     Index=c;
     K=k;
 }

};
vector<edge>G;
bool fun(edge a, edge b)
{
    int f=a.Left/blog;
    int s=b.Left/blog;
    if(f==s) return a.Right<b.Right;
    else return f<s;

}
void add(int n, int k)
{
	cnt[ar[n]]++;
	if(cnt[ar[n]]==1) 
	{
		res[ans1 [ar[n]]]++;
	}
}
void Remove(int n,int k)
{
	cnt[ar[n]]--;
	if(cnt[ar[n]]==0) 
	{
		res[ans1 [ar[n]]]--;
	}
	
}
int main()
{
	SOD();
   int T,cs=0,N;
     sf1(T);
     while(T--)
     {
     	cs++;
     	sf1(N);
     	blog = sqrt(N);
     	for(int i =0;i<N;i++)
     	{
     		sf1(ar[i]);
     		
     	}
     	
     	int q,l,r,k;
     	sf1(q);
     	for(int i =0;i<q;i++)
     	{
     		sf2(l,r);
     		sf1(k);
     		--l,--r;
     		G.push_back(edge(l,r,i,k));
     	}
     	sort(G.begin(),G.end(),fun);
	    int L=0,R=-1;
	    for(int i=0;i<q;i++)
	    {
	    	k=G[i].K;
	    	int id=G[i].Index;
	        while(R<G[i].Right) add(++R,k);
	        while(L<G[i].Left) Remove(L++,k);
	        while(R>G[i].Right) Remove(R--,k);
	        while(L>G[i].Left) add(--L,k);
	        ans[id] = res[k];
	    }
	    
	    printf("Case %d:\n",cs);
	    for(int i =0;i<q;i++)
	    {
	    	printf("%d\n",ans[i]);
	    }
	    
	    G.clear();
	    memset(cnt,0,sizeof(cnt));
	    memset(res,0,sizeof(res));
	    
     	
     }
     
   
   /************ALEYA YOUSUF ************/
 
 /************ALLtAH IS ALMIGHTY ************/
return 0;
 
}