#include<bits/stdc++.h>
using namespace std;
vector<int>ans;
int ar[2000],N;
void bfs(int sum, int l, int r)
{
    if(l==r) {
        ans.push_back(sum);
        return ;
    }
    for(int i=0;i<3;i++)
    bfs(sum+ar[l]*i,l+1,r);
}
int  main()
{

   cin>>N;
   for(int i=0;i<N;i++)
   {
       cin>>ar[i];
   }
   bfs(0,0,N);
   for(int i=0;i<ans.size();i++) cout<<ans[i]<<" ";
}
