#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll ar[10000005],num[10000005],tree[40000006];
void sieve() {
	for( ll i = 2 ; i <= 10000000 ; i ++ ) {
		num[ i ] = 1 ;
	}
	for( ll i = 2 ; i <= 10000000 ; i ++ ) {
		for( ll j = i * i ; j <= 10000000 ; j += i ) {
			num[ j ] = 0 ;
		}
	}
}
void initialize(ll node, ll b, ll e)
{
    if(b==e)
    {
        tree[node]=ar[b];
        return;
    }

    ll left=node*2;
    ll right=node*2+1;
    ll mid=(b+e)/2;
    initialize(left,b,mid);
    initialize(right,mid+1,e);
    tree[node]=tree[left]+tree[right];

}

ll query(ll node, ll b, ll e, ll i, ll j)
{
    if(b>j || i>e) return 0;
    if(i<=b && j>=e) return tree[node];
    ll left=node*2;
    ll right=node*2+1;
    ll mid=(b+e)/2;
    ll p1=query(left,b,mid,i,j);
    ll p2=query(right,mid+1,e,i,j);
    return p1+p2;
}
void update(ll node, ll b, ll e, ll i, ll x)
{
   if(b>i || i>e) return;
  if(i<=b && i>=e) {tree[node]=x;return;}
    ll left=node*2;
    ll right=node*2+1;
    ll mid=(b+e)/2;
    update(left,b,mid,i,x);
    update(right,mid+1,e,i,x);
    tree[node]=tree[left]+tree[right];

}


int main()
{
    sieve();
    ll N,l,r,ck,q,u;
    scanf("%lld",&N);
    for(ll i=1;i<=N;i++)
    {
        scanf("%lld",&u);
        if(num[u]==1) ar[i]=1;
        else ar[i]=0;
    }

    initialize(1,1,N);
    scanf("%lld",&q);

    while(q--)
    {
        scanf("%lld %lld %lld",&ck,&l,&r);
        if(ck==1) printf("%lld\n",query(1,1,N,l,r));
        else { if(num[r]==1) update(1,1,N,l,1);
               else update(1,1,N,l,0);}

    }
}
