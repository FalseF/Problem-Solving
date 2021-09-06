
      /*########  IN THE NAME OF ALLHA   ##########*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define INF 99999999999999999
ll S[300005],A[300005];

int main()
{
    ll N,M,K;

    cin>>N>>M>>K;

    for(int i=1;i<=N;i++){
        cin>>A[i];
        S[i]=S[i-1]+A[i];
    }

    ll l=1,r=N;

    ll ans=INF*(-1);

    //for(int i=1;i<=N;i++) cout<<i<<" "<<S[i]<<endl;

    while(l<=r){
            //cout<<l<<" "<<r<<endl;
        ll d=r-l+1;
        ll x=d/M; if(d%M) x++;
        ll X=(S[r]-S[l-1])-K*x;

        ans=max(ans,X);

        //cout<<l<<" "<<r<<" "<<X<<endl;

        if(A[l]>A[r]){
            r--;
        }
        else{
            l++;
        }

    }

    ll jj=0;

    cout<<max(ans,jj)<<endl;

return 0;

}

