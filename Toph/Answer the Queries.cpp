#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll tree[400005],arr[400005],ans[400005];
unordered_map<ll,vector<ll> >Ans;
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
    tree[node]=max(tree[left],tree[right]);

}

ll query(ll node, ll b, ll e, ll i, ll j)
{
    if(b>j || i>e) return -999999999999999;
    if(i<=b && j>=e)
    {
       return tree[node];
    }
    ll left=node*2;
    ll right=node*2+1;
    ll mid=(b+e)/2;
    ll p1=query(left,b,mid,i,j);
    ll p2=query(right,mid+1,e,i,j);
     return max(p1,p2);
}

int main()
{
    ll t,l,r,u,v,q,n,cs=0;
    scanf("%lld",&t);
    while(t--)
    {
        cs++;
        Ans.clear();
        scanf("%lld%lld",&n,&q);

        for(ll i=1;i<=4*n;i++) tree[i]=0;

        for(ll i=1;i<=n;i++)
        {
            scanf("%lld",&arr[i]);
            Ans[arr[i]].push_back(i);

        }
        printf("Case %lld:\n",cs);
        initialize(1,1,n);

        while(q--)
        {
            scanf("%lld%lld",&l,&r);
            ll num=query(1,1,n,l+1,r+1);
            ll ck1=upper_bound(Ans[num].begin(),Ans[num].end(),r+1)-Ans[num].begin();
            ll ck2=lower_bound(Ans[num].begin(),Ans[num].end(),l+1)-Ans[num].begin();
            //cout<<ck1<<" "<<ck2<<endl;
            printf("%lld\n",(ck1-ck2));

        }
    }

}
