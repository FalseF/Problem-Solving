#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll arr[100000];
vector<ll>tree[400005];
void initialize(ll node, ll b, ll e)
{
    if(b==e)
    {
        tree[node].push_back(arr[b]);
        return;
    }
    ll left=node*2;
    ll right=node*2+1;
    ll mid=(b+e)/2;
    initialize(left,b,mid);
    initialize(right,mid+1,e);
    //tree[node]=merge(tree[left],tree[right]);
    merge(tree[left].begin(),tree[left].end(),tree[right].begin(),tree[right].end(),back_inserter(tree[node]));

}

ll query(ll node, ll b, ll e, ll i, ll j, ll k)
{
    if(b>j || i>e) return 0;
    if(i<=b && j>=e)
    {
        return lower_bound(tree[node].begin(),tree[node].end(),k)-tree[node].begin();
    }
    ll left=node*2;
    ll right=node*2+1;
    ll mid=(b+e)/2;
    ll p1=query(left,b,mid,i,j,k);
    ll p2=query(right,mid+1,e,i,j,k);
    return p1+p2;
}

int main()
{
    ll N,i,q,k,l,r;
    cin>>N;
    for(i=1;i<=N;i++) cin>>arr[i];
    initialize(1,1,N);
    for(i=1;i<=4*N;i++)
    {
        cout<<tree[i][0]<<endl;
    }
    cin>>q;
    while(q--)
    {
        cin>>l>>r>>k;
        cout<<query(1,1,N,l,r,k)<<endl;

    }

    return 0;
}

