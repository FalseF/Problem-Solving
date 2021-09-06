#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll upperbound(ll n)
{
    ll l=1,r=n;

    ll mid,ans;

    ll mn=999999999999999999;

    while(l<=r)
    {
        mid=(l+r)/2;

        ll d=mid*mid;

        if((d-n)>0 && (d-n)<mn)
        {
            mn=d-n;

            ans=mid;
        }

        if(d==n) return mid;

        if(d>n)
        {
            r=mid-1;
        }
        else
        {
            l=mid+1;
        }
    }

    return ans;

}

ll lowerbound(ll n)
{
    ll l=1,r=n;

    ll mid,ans=1;

    ll mn=999999999999999999;

    while(l<=r)
    {
        mid=(l+r)/2;

        ll d=mid*mid;

       if(d<n)
       {
           if(mid>ans)
           {
               ans=mid;
           }
       }

        if(d==n) return mid;

        if(d>n)
        {
            r=mid-1;
        }
        else
        {
            l=mid+1;
        }
    }

    return ans;

}


int main()
{
    ll n,m;

    cin>>n>>m;

    cout<<lowerbound(n)<<endl;


    cout<<upperbound(m)<<endl;

    cout<<upperbound(m)-lowerbound(n)+1<<endl;
}
