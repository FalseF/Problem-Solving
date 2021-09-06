#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{

    ll N,A,B;
    cin>>N;
    cin>>A>>B;
    ll x=A+B-2;
    ll y=2*N-(A+B);
    if(x<=y) cout<<"White";
    else cout<<"Black";






return 0;
}

