#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Max 100005
ll ST[24][Max];
ll A[Max];
void Compute_ST(ll N)
{
    for (ll i=0;i<N;i++) ST[0][i] = A[i];
    for (ll k = 1;(1 << k)<N; k++)
    {
        for (ll i=1;i+(1<<k)<=N;i++)
        {
            ll x = ST[k-1][i];
            ll y = ST[k-1][i+(1<<k-1)];
            ST[k][i]=min(x,y);
        }
    }
}
 
ll RMQ(ll i, ll j)
{
    ll k = log2(j-i);
    ll x = ST[k][i];
    ll y = ST[k][j-(1<<k)+1];
    return min(x,y);
}
 
int main()
{
    ll N;
    cin>>N;
    for(ll i=0;i<N;i++)
    {
        cin>>A[i];
    }
    Compute_ST(N);
    ll Q;
    cin>>Q;
    while(Q--)
    {
        ll x,y;
        cin>>x>>y;
        // Row 0 based and colum 0 based index;
        x--;
        y--;
        cout<<RMQ(x,y)<<endl;
    }
    return 0;
}
