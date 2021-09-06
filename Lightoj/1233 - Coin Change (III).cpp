#include<bits/stdc++.h>
using namespace std;
int N,E,dp[100005],num_coin[10000],value[100005];
 int ck_coin[1000005];
int main()
{
    int cs=0;
    int T;
    cin>>T;
    while(T--)
    {
        cs++;
        cin>>N>>E;
        for(int i=0;i<N;i++)
        {
            cin>>value[i];

        }
        for(int i=0;i<N;i++)
        {
             cin>>num_coin[i];
        }
        dp[0]=1;

        for(int i=0;i<E+2;i++)
        {
            dp[i]=0;
            ck_coin[i]=INT_MAX;
        }
        ck_coin[0]=0;
        int cnt=0;
        dp[0]=1;
        for(int i=0;i<N;i++)
        {
            for(int j=value[i];j<=E;j++)
            {
                if(dp[j]==0 && dp[j-value[i]]==1 && ck_coin[j-value[i]]+1<=num_coin[i])
                {
                    dp[j]=1;
                    cnt++;
                    ck_coin[j]=ck_coin[j-value[i]]+1;
                }
            }

            for(int j=0;j<=E;j++)  ck_coin[j]=0;
        }

        cout<<"Case "<<cs<<": "<<cnt<<endl;

    }
}
