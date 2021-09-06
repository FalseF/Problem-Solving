#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
vector <ll> primes;
#define MAXP 100005
bool num[MAXP+100];
void sieve()
{

    primes.push_back(2);

    for(ll i=2;i<=MAXP;i+=2)
        num[i]=1;
    for(ll i=3;i<=MAXP;i+=2)
    {
        if(num[i]==0)
        {

                primes.push_back(i);

            for(ll j=i*2 ;j<=MAXP;j+=i)
                num[j]=1;
        }
    }

}
ll phi[200000];

ll lim=100000;

ll arr[400006];

void F()
{
    for(ll i=1;i<=lim;i++) phi[i]=i;

    ll x=primes.size();

    for(ll i=0;i<x;i++)
    {
        ll U=primes[i];

        for(ll j=U;j<=lim;j+=U)
        {
            phi[j]=(phi[j]*(U-1))/U;
        }
    }

}

ll tree[400005];
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
    sieve();
    F();
    ll N,Q,ans,u,v,l,r;
    scanf("%lld%lld",&N,&Q);
    for(ll i=1;i<=N;i++) cin>>v,arr[i]=phi[v];
    initialize(1,1,N);
    while(Q--)
    {
           scanf("%lld%lld%lld",&u,&l,&r);
            if(u==1) update(1,1,N,l,phi[r]);
            else {ans=query(1,1,N,l,r);
            printf("%lld\n",ans);
            }
    }

}

