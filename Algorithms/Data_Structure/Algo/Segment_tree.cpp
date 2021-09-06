#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll arr[100000];

ll tree[400000];

void initialize(ll node, ll b, ll e)
{
    if(b==e)
    {
        tree[node]=arr[b];
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
    return 0;


}
