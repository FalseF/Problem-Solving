// Problem: Crayons
// Contest: Toph
// URL: https://toph.co/p/crayons
// Memory Limit: 32 MB
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
#define ll long long
const int mx = 1e5+4;
int arr[mx+5];
int id[mx+2],sum=0,ans[mx+4],k,cnt[mx+4],dup[mx+3];
struct custom_hash {
	
    static uint64_t splitmix64(uint64_t x) {
        x += 0x9e3779b97f4a7c15;
        x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
        x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
        return x ^ (x >> 31);
    }
    size_t operator()(uint64_t x) const {
        static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
        return splitmix64(x + FIXED_RANDOM);
    }
};

 unordered_map<int,int,custom_hash> Mp;

struct edge{
 int Left,Right,Index;

 edge(int a, int b,int i)
 {
     Left=a;
     Right=b;
     Index=i;
 }

};
vector<edge>G;
bool fun(edge a, edge b)
{
    int f=a.Left/k;
    int s=b.Left/k;
    if(f==s) return a.Right<b.Right;
    else return f<s;

}

void add(int i){
	
	dup[cnt[i]]++;
    if(dup[cnt[i]]==1) sum++;

}

void Remove(int i){
    
	 if(dup[cnt[i]]==1) sum--;
	dup[cnt[i]]--;
  
}

int main()
{
    FastIO();
    int q,i,N,j;
  
    int E,m,ck=0;
    
    cin>>E>>m;
    for(int i =0;i<E;i++)
    {
    	cin>>arr[i];
    	if(Mp.find(arr[i])==Mp.end())
    	{
    		Mp[arr[i]] = ++ck;
    	}
    	
    	cnt[i] = Mp[arr[i]];
    }
    
    for(int i =0;i<E;i++) cout<<cnt[i]<<" ";cout<<endl;
    
   // cout<<E<<" "<<m<<endl;
    k=sqrt(E);
   int L=0,R=-1,l,r;
    char ch;
    for(i=0;i<m;i++)
    {
        cin>>l>>r;
        --l;--r;
        G.push_back(edge(l,r,i));
    }

    sort(G.begin(),G.end(),fun);
    for(i=0;i<m;i++)
    {
    	
        while(R<G[i].Right) add(++R);
        while(L<G[i].Left) Remove(L++);
        while(R>G[i].Right) Remove(R--);
        while(L>G[i].Left) add(--L);
       int n=G[i].Index;
      ans[n] = sum;
     
    }

    for(i=0;i<m;i++)
    {
       cout<<ans[i]<<endl;
    }
}

