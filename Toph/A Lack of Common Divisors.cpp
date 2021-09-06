
#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll phi(ll N)
{
    ll res=N;
    for(ll i=2;i*i<=N;i++)
    {
        if(N%i) continue;
        while(N%i==0)
        {
            N/=i;
        }
        res-=res/i;
    }
    if(N>1) res-=res/N;
    return res;
}
int main()
{
    ll N;
    cin>>N;
    cout<<phi(N)<<endl;
}
