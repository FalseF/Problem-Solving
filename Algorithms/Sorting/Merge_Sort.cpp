#include<bits/stdc++.h>

using namespace std;

int ar[10000];

void Merge(int l, int mid, int r)
{

    int L[1000];
    int R[1000];
    int n1=mid-l+1;
    int n2=r-mid;
    for(int i=1;i<=n1;i++) L[i]=ar[l+i-1];
    for(int i=1;i<=n2;i++) R[i]=ar[mid+i];
    L[n1+1]=INT_MAX;
    R[n2+1]=INT_MAX;
    int i=1,j=1;
    for(int k=l;k<=r;k++)
    {
        if(L[i]<=R[j])
        {
            ar[k]=L[i];

            i++;
        }
       else
        {
            ar[k]=R[j];

            j++;
        }
    }

}
int Merge_sort(int l,int r)
{
    if(l<r)
    {
        int mid=(l+r)/2;

        Merge_sort(l,mid);

        Merge_sort(mid+1,r);

        Merge(l,mid,r);
    }
}
int main()
{
    int N;

    cin>>N;
    for(int i=1;i<=N;i++)
    {
        cin>>ar[i];
    }

    Merge_sort(1,N);

    for(int i=1;i<=N;i++) cout<<ar[i]<<" ";
}


