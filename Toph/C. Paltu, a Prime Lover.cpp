
#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll arr[100005];

ll tree_mn[400005];
ll tree_mx[400005];
bool pck[10000000+100]={0};
vector<ll>primes;
void sieve()
{
    primes.push_back(2);
       for(ll i=3; i*i<=10000000; i+=2)
        {
            if(!pck[i])
            {
                for(ll j=i*i; j<=10000000; j+=i*2)
                {
                    pck[j]=1;
                }
            }
        }

        for(ll i=3;i<=10000000;i+=2)
        {
            if(!pck[i])
            {
                primes.push_back(i);
            }
        }
}


void initialize(ll node, ll b, ll e)
{
    if(b==e)
    {
        tree_mx[node]=arr[b];
        tree_mn[node]=arr[b];
        return;
    }

    ll left=node*2;
    ll right=node*2+1;
    ll mid=(b+e)/2;
    initialize(left,b,mid);
    initialize(right,mid+1,e);
    tree_mx[node]=max(tree_mx[left],tree_mx[right]);
    tree_mn[node]=min(tree_mn[left],tree_mn[right]);

}

ll query_mx(ll node, ll b, ll e, ll i, ll j)
{
    if(b>j || i>e) return 0;
    if(i<=b && j>=e) return tree_mx[node];
    ll left=node*2;
    ll right=node*2+1;
    ll mid=(b+e)/2;
    ll p1=query_mx(left,b,mid,i,j);
    ll p2=query_mx(right,mid+1,e,i,j);
    return max(p1,p2);
}
ll query_mn(ll node, ll b, ll e, ll i, ll j)
{
    if(b>j || i>e) return 9999999999;
    if(i<=b && j>=e) return tree_mn[node];
    ll left=node*2;
    ll right=node*2+1;
    ll mid=(b+e)/2;
    ll p1=query_mn(left,b,mid,i,j);
    ll p2=query_mn(right,mid+1,e,i,j);
    return min(p1,p2);
}
void update(ll node, ll b, ll e, ll i, ll x)
{
   if(b>i || i>e) return;
  if(i<=b && i>=e) {tree_mn[node]=x;tree_mx[node]=x;return;}
    ll left=node*2;
    ll right=node*2+1;
    ll mid=(b+e)/2;
    update(left,b,mid,i,x);
    update(right,mid+1,e,i,x);
    tree_mn[node]=min(tree_mn[left],tree_mn[right]);
    tree_mx[node]=max(tree_mx[left],tree_mx[right]);

}

int main()
{
    sieve();
     ll N,E;
     cin>>N>>E;
     ll u,v,l,r,z;
     for(ll i=1;i<=N;i++){ cin>>arr[i];}
     initialize(1,1,N);
     while(E--)
     {
         cin>>u;
         if(u==2)
         {
             cin>>l>>r;
             ll ck1=query_mn(1,1,N,l,r);
             cout<<ck1<<endl;
             ll ck2=query_mx(1,1,N,l,r);
             cout<<ck2<<endl;
             ll ans=upper_bound(primes.begin(),primes.end(),ck2)-primes.begin();
             ll ans1=lower_bound(primes.begin(),primes.end(),ck1)-primes.begin();
             cout<<ans-ans1<<endl;
         }
         else{
            cin>>l>>r;
            update(1,1,N,l,r);
         }
     }

}
