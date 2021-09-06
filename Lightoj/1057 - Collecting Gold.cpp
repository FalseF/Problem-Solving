
      /*########  IN THE NAME OF ALLAH   ##########*/

#include<bits/stdc++.h>
using namespace std;
deque<pair<int,int>>Q;
int MAX=1<<30;
int dp[1<<15+3][16];
int dist(int i, int j)
{
    int x1=Q[i].first;
    int y1=Q[i].second;
    int x2=Q[j].first;
    int y2=Q[j].second;
    int ck=max(abs(x1-x2),abs(y1-y2));
    return ck;
}
int fun(int mask,int pos)
{
    if(dp[mask][pos]!=-1) return dp[mask][pos];
    if(mask==((1<<Q.size())-1)) return dp[mask][pos]=dist(pos,0);
    int ans=MAX;
    for(int i=0;i<Q.size();i++)
    {
        if (!((mask >> i) & 1))
        {
            int ck=fun((mask |(1<<i)),i);
            ans=min(ans,ck+dist(pos,i));
        }
    }
    return dp[mask][pos]=ans;
}
int main()
{
   int T,N,E,u,i,j,cs=0;
   char ch1;
   cin>>T;
   while(T--)
   {
       cin>>N>>E;
       memset(dp,-1,sizeof(dp));
       for(i=1;i<=N;i++)
       {
           for(j=1;j<=E;j++)
           {
               cin>>ch1;
               if(ch1=='x')
               {
                   Q.push_front(make_pair(i,j));
               }
               else if(ch1=='g') Q.push_back(make_pair(i,j));
           }
       }
       int ans=fun(1,0);
       cout<<"Case "<<++cs<<": "<<ans<<endl;
       Q.clear();
   }

 /************ALEYA YOUSUF ************/


 /************ALLAH IS ALMIGHTY ************/
return 0;

}
