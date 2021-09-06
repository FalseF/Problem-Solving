#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<ll>value1,value2;
int main()
{
    ll N,ar[100],ar1[50],ar2[50];
    cin>>N;
    ll l=N-N/2;
    ll r=N/2;
    // array ta ke 2ta part e vag korchi
    for(ll i=0;i<l;i++)
    {
        cin>>ar1[i];
    }
    for(ll i=0;i<r;i++) cin>>ar2[i];
    for(ll i=0;i<(1<<l);i++)
    {
        ll ck=0;
        for(ll j=0;j<l;j++)
        {
            if(i&(1<<j))
            {
                ck+=ar1[j];
            }
        }
        value1.push_back(ck);
    }
    for(ll i=0;i<(1<<r);i++)
    {
        ll ck=0;
        for(ll j=0;j<r;j++)
        {
            if(i&(1<<j))
            {
                ck+=ar2[j];
            }
        }
        value2.push_back(ck);
    }
    sort(value2.begin(),value2.end());

    ll make_coin;
    cin>>make_coin;
    for(ll i=0;i<value2.size();i++) cout<<value2[i]<<" ";cout<<endl;
    for(ll i=0;i<value1.size();i++)
    {
        ll ck=make_coin-value1[i];
        //cout<<ck<<endl;
        ll index=upper_bound(value2.begin(),value2.end(),ck)-value2.begin();
       // cout<<index<<endl;
        if(value2[index-1]==ck)
        {
            cout<<"YES banano jabe"<<endl;
        }

    }

}
