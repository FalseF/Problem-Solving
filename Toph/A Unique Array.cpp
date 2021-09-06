
      /*########  IN THE NAME OF ALLAH   ##########*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
   int T,N,E,u,Q,v,n,i,j,k,sum=0,ck=0,x,y,cs=0;

    cin>>T;
    while(T--)
    {
        scanf("%d%d",&N,&Q);
        vector<int>ans;
        for(i=0;i<N;i++) {
            scanf("%d",&u);
            ans.push_back(u);
        }
        cs++;
        printf("Case %d:\n",cs);
        while(Q--)
        {
            scanf("%d%d",&x,&y);
            ans[x]=y;
            if((x-1)>=0 && (x+1)<N && ans[x-1]==ans[x] && ans[x]==ans[x+1])
            {
                ans.erase(ans.begin()+x);
                ans.erase(ans.begin()+x);
                N-=2;
            }
            else if((x-1)>=0 && ans[x-1]==ans[x])
            {
                ans.erase(ans.begin()+x-1);
                N-=1;
            }
            else if((x+1)<N && ans[x+1]==ans[x])
            {
                N-=1;
                ans.erase(ans.begin()+x+1);
            }
            printf("%d\n",N);
        }
    }

 /************ALEYA YOUSUF ************/


 /************ALLAH IS ALMIGHTY ************/
return 0;

}
