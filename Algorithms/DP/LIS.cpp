#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll ar[3000005],Index[20000005];
ll result[100004];
ll fun(ll N)
{
    ll mid,low=0,high=0,mx=0;
    for(ll i=0;i<N;i++)
    {
        low=0;
        high=mx;
        while(low<=high)
        {
            mid=(low+high)/2;
            if(Index[mid]<ar[i]) low=mid+1;
            else high=mid-1;
        }

        Index[low]=ar[i];
        if(mx<low)
        {
            mx=low;
            result[mx]=ar[i];
        }
    }

    return mx;

}

int main()
{
    ll N;
    cin>>N;
    Index[0]=-9999999999999999;
    for(ll i=1;i<=N;i++)
    {
        Index[i]=9999999999999999;
        cin>>ar[i-1];
    }

    ll ans=fun (N);

    cout<<"The Longest Increasing Subsequence is "<<ans<<endl;

    for(ll i=1;i<=ans;i++) cout<<result[i]<<" ";
}

