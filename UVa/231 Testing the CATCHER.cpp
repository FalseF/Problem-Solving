#include<bits/stdc++.h>
using namespace std;
int Index[1000005],ar[1000005];
int fun(int N)
{
    int mid,low=0,high=0,mx=0;

    for(int i=0;i<N;i++)
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
        }
    }

    return mx;

}

int main()
{    int ck=0,cs=0,u,v;
    while(scanf("%d",&u))
    {

        if(u==-1 && ck==0) return 0;
        if(u==-1) {
                cs++;
            reverse(ar,ar+ck);

            int ans=fun(ck);
            ck=0;
            if(cs>1) printf("\n");
            printf("Test #%d:\n",cs);
            printf("  maximum possible interceptions: %d\n",ans);
            continue;
        }
          ar[ck]=u;
         if(ck==0) Index[ck]=-99999999999999999;
         else Index[ck]=99999999999999999;
          ck++;
    }
}
