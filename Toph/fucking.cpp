#include<bits/stdc++.h>
using namespace std;
vector<int>sum;
vector<int>sub;
int main(){
    int A[1000],n,i,j;
    cin>>n;
    for(i=1;i<=n;i++)cin>>A[i];
    for(i=1;i<n;i++){
        for(j=i+1;j<=n;j++){
            sum.push_back(A[i]+A[j]);
            sub.push_back(abs(A[i]-A[j]));
        }
    }
    int len=n-1;
  len=(len*(len+1))/2;
    for(i=0;i<len;i++){
        cout<<sum[i]<<" ";
    }
    cout<<endl;
    for(i=0;i<len;i++){
        cout<<sub[i]<<" ";
    }
return 0;
}
