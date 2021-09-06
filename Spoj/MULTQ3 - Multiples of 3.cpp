
#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll tree[400000][3],lazy[40000000];

ll swap1(ll node)
{
   ll ck=tree[node][0];
   tree[node][0]=tree[node][2];
   tree[node][2]=tree[node][1];
   tree[node][1]=ck;


}

ll swap2(ll node)
{
    ll ck=tree[node][2];
    tree[node][2]=tree[node][0];
    tree[node][0]=tree[node][1];
    tree[node][1]=ck;
}

void initialize(ll node, ll b, ll e)
{
    if(b==e)
    {
        tree[node][0]=1;
        tree[node][1]=0;
        tree[node][2]=0;
        return;
    }

    ll left=node*2;
    ll right=node*2+1;
    ll mid=(b+e)/2;
    initialize(left,b,mid);
    initialize(right,mid+1,e);
    tree[node][1]=0;
    tree[node][2]=0;
    tree[node][0]=tree[left][0]+tree[right][0];

}

void update(ll node , ll b, ll e, ll l, ll r)
{

    if(lazy[node]!=0)
    {
        if(b!=e)
        {    lazy[node*2]=(lazy[node]+lazy[node*2])%3;
           lazy[node*2+1]=(lazy[node]+lazy[node*2+1])%3;
        }

        if(lazy[node]==1)
        {
           swap1(node);

        }

        if(lazy[node]==2)
        {
            swap2(node);
        }

        lazy[node]=0;
    }
    if (b>e || b>r || e<l) return;
    if(b>=l && e<=r)
    {

        if(b!=e)
        {
             lazy[node*2]=(lazy[node*2]+1)%3;
             lazy[node*2+1]=(lazy[node*2+1]+1)%3;

        }
        swap1(node);

        return;
    }

    ll left=node*2;
    ll right=node*2+1;
    ll mid=(b+e)/2;
    update(left,b,mid,l,r);
    update(right,mid+1,e,l,r);
    tree[node][0]=tree[left][0]+tree[right][0];
    tree[node][1]=tree[left][1]+tree[right][1];
    tree[node][2]=tree[left][2]+tree[right][2];
}
ll query(ll node ,ll b, ll e, ll l, ll r)
{
     if (b>e || b>r || e<l) return 0;

    if(lazy[node]!=0)
    {
        if(b!=e)
        {    lazy[node*2]=(lazy[node]+lazy[node*2])%3;
           lazy[node*2+1]=(lazy[node]+lazy[node*2+1])%3;
        }

        if(lazy[node]==1)
        {
            swap1(node);
        }

        if(lazy[node]==2)
        {
            swap2(node);
        }

        lazy[node]=0;
    }
    if(b>=l && e<=r)
    {
        return tree[node][0];
    }

     ll left=node*2;
    ll right=node*2+1;
    ll mid=(b+e)/2;

    ll p1=query(left,b,mid,l,r);
    ll p2=query(right,mid+1,e,l,r);
    return p1+p2;

}

int main()
{
    ll N, Q,u,v,ck,l,r;
    scanf("%lld",&N);
    if(N!=0) initialize(1,1,N);
    scanf("%lld",&Q);
    while(Q--)
    {
        scanf("%lld",&ck);
        if(ck==1) {  scanf("%lld%lld",&l,&r);printf("%lld\n",query(1,1,N,l+1,r+1));}
        else {scanf("%lld%lld",&l,&r);update(1,1,N,l+1,r+1);}

    }
}

