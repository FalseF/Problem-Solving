#include<bits/stdc++.h>
using namespace std;
#define READ(f) freopen(f,"r",stdin)
#define WRITE(f) freopen(f,"w",stdout)
int dp[34][1100],path[35][1100];
int capacity,N,t;
int weight[100],value[100];
vector<int>result;
int knapsack(int i, int w)
{
    if(i>=N) return 0;
    if(dp[i][w]!=-1) return dp[i][w];
    int p1=0;int p2=0;
    if(w+3*weight[i]*t<=capacity)
    {
        p1=value[i]+knapsack(i+1,w+3*weight[i]*t);
    }
    p2=knapsack(i+1,w);
    if(p1>p2) path[i][w]=1;
    else path[i][w]=2;
    dp[i][w]=max(p1,p2);
    return dp[i][w];
}

int printpath(int i, int w)
{
    if(path[i][w]==-1) return 0;
    if(path[i][w]==1)
    {
        result.push_back(i);
        return 1+printpath(i+1,w+weight[i]*3*t);
    }
    else {
            return printpath(i+1,w);
    }
}

int main()
{    //WRITE("1.txt");
       int ck=0;
    while(scanf("%d%d",&capacity,&t)==2){
             if(ck>0) printf("\n");
         scanf("%d",&N);
         memset(dp,-1,sizeof(dp));
         memset(path,-1,sizeof(path));
         result.clear();
         ck++;
          for(int i=0;i<N;i++)
          {
              scanf("%d%d",&weight[i],&value[i]);
          }

          int ans=knapsack(0,0);
          int R=printpath(0,0);
          printf("%d\n",ans);
          printf("%d\n",R);
          for(int i=0;i<result.size();i++)
          {
              printf("%d %d\n",weight[result[i]],value[result[i]]);
          }

    }
}
