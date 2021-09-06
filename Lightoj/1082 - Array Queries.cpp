#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define WRITE(f) freopen(f,"w",stdout)
map<ll,ll>arr;
map<ll,ll>tree;

void fun(ll N) {for(ll i=1;i<=3*N;i++) tree[i]=999999999999;}

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
    tree[node]=min(tree[left],tree[right]);

}

ll query(ll node, ll b, ll e, ll i, ll j)
{
    if(b>j || i>e) return 9999999999;
    if(i<=b && j>=e) return tree[node];
    ll left=node*2;
    ll right=node*2+1;
    ll mid=(b+e)/2;
    ll p1=query(left,b,mid,i,j);
    ll p2=query(right,mid+1,e,i,j);
    return min(p1,p2);
}

int main()
{
    //WRITE("output.txt");
    ll N,u,v,E,T,x;
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

    scanf("%lld%lld",&u,&v);

    ll ans=query(1,1,N,u,v);

    printf("%lld\n",ans);


    }

}
    return 0;


}

