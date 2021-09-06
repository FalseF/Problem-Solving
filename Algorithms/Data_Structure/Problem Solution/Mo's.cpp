// Problem: B. Little Elephant and Array
// Contest: Codeforces - Codeforces Round #136 (Div. 1)
// URL: https://codeforces.com/contest/220/problem/B
// Memory Limit: 256 MB
// Time Limit: 4000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mx = 2e5+2000;


ll ans[201000+5],k,sum=0,cnt[200000+5],N;
vector<ll>arr;
struct edge{
 ll Left,Right,Index;
 edge(ll a, ll b, ll c)
 {
     Left=a;
     Right=b;
     Index=c;
 }

};
vector<edge>G;
bool fun(edge a, edge b)
{
    ll f=a.Left/k;
    ll s=b.Left/k;
    if(f==s) return a.Right<b.Right;
    else f<s;

}

void add(ll x)
{
    ll tmp=arr[x-1];
    if(tmp>N)return ;
    ll tmp2=cnt[tmp];
    if(tmp==tmp2)
        sum--;
        cnt[tmp]++;
    tmp2=cnt[tmp];
    if(tmp2 == tmp)
		sum++;
}
void Remove(ll x)
{
     ll tmp=arr[x-1];
     if(tmp>N)return ;
    ll tmp2=cnt[tmp];
    if(tmp==tmp2)
        sum--;
        cnt[tmp]--;
    tmp2=cnt[tmp];
    if(tmp2 == tmp)
		sum++;
 
}



int main()
{
    ll q,i,j;
    cin>>N>>q;
    k=sqrt(N);
    for(i=1;i<=N;i++)
    {
        cin>>j;
        arr.push_back(j);
    }
    ll L=0,R=-1,l,r;

    for(i=0;i<q;i++)
    {
        cin>>l>>r;
        G.push_back(edge(l,r,i));
    }

    sort(G.begin(),G.end(),fun);
    for(i=0;i<q;i++)
    {
        while(R<G[i].Right) add(++R);
        while(L<G[i].Left) Remove(L++);
        while(R>G[i].Right) Remove(R--);
        while(L>G[i].Left) add(--L);
        ans[G[i].Index]=sum;
        //cout<<sum<<endl;
    }

    for(i=0;i<q;i++)
    {
        cout<<ans[i]<<endl;
    }
}
