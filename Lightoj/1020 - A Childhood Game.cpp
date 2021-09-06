#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{

    ll ck=0,T,m,a,b;
    string S;
    cin>>T;
    for(ll i=1;i<=T;i++)
    {
        cin>>m;
        cin>>S;
        if(S=="Alice")
        {
            if(m%3==0 || m%3==2)
            {
                printf("Case %lld:  Alice\n",i);
            }
            else printf("Case %lld:  Bob\n",i);
        }
         else
        {
            if(m%3==0)
            {
                printf("Case %lld:  Alice\n",i);
            }
            else printf("Case %lld:  Bob\n",i);
        }

    }





return 0;
}

