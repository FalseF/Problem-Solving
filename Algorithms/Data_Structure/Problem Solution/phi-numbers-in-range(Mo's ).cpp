/*########  IN THE NAME OF AintAH   ##########*/

#pragma GCC diagnostic ignored "-Wunused-variable"
#pragma GCC diagnostic ignored "-Wunused-parameter" 
#include<bits/stdc++.h>
using namespace std;
#pragma GCC diagnostic ignored "-Wunused-but-set-variable" 
#pragma GCC diagnostic ignored "-Wformat"
#define INF 999999999999999999
#define nl printf("\n")
#define sf1(x)  scanf("%d",&x)
#define sf2(x,y)  scanf("%d %d",&x,&y)
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template<class T> using oset=tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
//less_equal (hobe jodi multiset er moto kaje korte chai tahole)
// less (hobe jodi set er moto kaj korte chai)
int phi[2000005];
void Totient( int MAXM )
{
	int i, j;
	for( i = 1; i <= MAXM; ++i) phi[i] = i;
	for( i = 2; i <= MAXM; ++i)
	if( phi[i] == i )
	for( j = i; j <= MAXM; j += i)
	phi[j] = (phi[j] / i) * (i - 1);
}

int ans[100005],blog,cnt[200005],sum=0;
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
oset<int>st;
void add(int n)
{
	cnt[phi[n+1]]++;
	if(cnt[phi[n+1]]==1) st.insert(phi[n+1]);
}
void Remove(int n)
{
	 cnt[phi[n+1]]--;
	if(cnt[phi[n+1]]==0) st.erase(phi[n+1]);
	
}

int main()
{
	Totient(100005);
   int T,cs=0;
     sf1(T);
     while(T--)
     {
     	st.clear();
     	cs++;
     	int N,E;
     	sf2(N,E);
     	blog = sqrt(N);
     	int l,r,k,q=E,i=0;
     	while(E--)
     	{
     		sf2(l,r);
     		sf1(k);
     		--l;--r;
     		G.push_back(edge(l,r,i++,k));
     	}
     	
	    sort(G.begin(),G.end(),fun);
	    int L=0,R=-1;
	    for(int i=0;i<q;i++)
	    {
	    	k=G[i].K;
	    	int id=G[i].Index;
	        while(R<G[i].Right) add(++R);
	        while(L<G[i].Left) Remove(L++);
	        while(R>G[i].Right) Remove(R--);
	        while(L>G[i].Left) add(--L);
	        if(st.size()<k)
	        {
	        	ans[id] = -1;
	        	
	        }
	        
	        else 
	        {
	        	ans[id] = *st.find_by_order(k-1);
	        }
	      

	    }
	    printf("Case %d:\n",cs);
	    for(int i =0;i<q;i++)
	    {
	    	if(ans[i]==-1) printf("No Distinct Phi Number\n");
	    	else printf("%d\n",ans[i]);
	    }
	    memset(cnt,0,sizeof(cnt));
	   G.clear();
	    
     	
     }
     
   
   /************ALEYA YOUSUF ************/
 
 /************AinttAH IS ALMIGHTY ************/
return 0;
 
}