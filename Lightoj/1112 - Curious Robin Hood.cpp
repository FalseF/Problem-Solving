#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll arr[100002];
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
   // WRITE("output.txt");
    ll N,u,v,E,T,x,ck;
    scanf("%lld",&T);
    for(ll i=1;i<=T;i++)
    {
    scanf("%lld%lld",&N,&E);
    for(ll j=1;j<=N;j++)
    {
       scanf("%lld",&x);arr[j]=x;
    }

    //fun(N);

    initialize(1,1,N);
    printf("Case %lld:\n",i);


    for(ll k=1;k<=E;k++)
    {

    scanf("%lld",&ck);
    if(ck==1) {scanf("%lld",&u);printf("%lld\n",arr[u+1]); arr[u+1]=0;update(1,1,N,u+1,0);continue;}

    if(ck==2) {scanf("%lld%lld",&u,&v);arr[u+1]+=v;update(1,1,N,u+1,arr[u+1]); continue;}

    scanf("%lld%lld",&u,&v);

    ll ans=query(1,1,N,u+1,v+1);

    printf("%lld\n",ans);


    }



}
    return 0;


}


