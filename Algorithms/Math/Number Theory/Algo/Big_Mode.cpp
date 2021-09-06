#include<bits/stdc++.h>
using namespace std;
typedef long long  ll;
ll Big_Mode(ll B, ll P, ll M)
{
    if(P==0)
    {
        return 1;
    }
    else if(P%2==0)
    {
        ll R=Big_Mode(B,P/2,M);
        return ((R%M)*(R%M))%M;

    }
    else
    {
        ll R=Big_Mode(B,P-1,M);
        return ((R%M)*(B%M))%M;
    }
}

int main()
{
    ll N,B,P,M;
    cin>>B>>P>>M;
    ll R=Big_Mode(B,P,M);
    cout<<R<<endl;
}
