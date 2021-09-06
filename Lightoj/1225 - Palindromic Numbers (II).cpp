#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{

    ll ck=0,n,m,a,b,c=0,k;
//    string S;
//  scanf("%lld",&n);
//    for(ll i=1;i<=n;i++)
//    {
//        cin>>S;
//        a=S.length();
//        ll j;
//        ck=0;
//
//        for(j=0,k=a-1;j<a/2;j++,k--)
//        {
//            if(S[j]!=S[k])
//            {
//                printf("Case %lld: No\n",i);
//                ck=1;
//                break;
//            }
//
//
//        }
//        if(ck==0)printf("Case %lld: Yes\n",i);
//    }
    ck=1;

for(ll i=1;i<21;i++)
{
    ck*=i;
    cout<<ck<<endl;

}
cout<<ck;



return 0;
}

