#include<bits/stdc++.h>
using namespace std;
#define WRITE(f) freopen(f,"w",stdout)
struct node{
int u,v,cnt;
node(int a, int b, int c)
{
    u=a;
    v=b;
    cnt=c;
}
node()
{

}
} N;
int main()
{   WRITE("1.txt");
    int t,r,c;
    bool visited[301][301][4];
    cin>>t;
    while(t--)
    {
        memset(visited,false,sizeof(visited));
        cin>>r>>c;
        char ch[r+1][c+1];
        int s1,s2;
        int ck=0;
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                cin>>ch[i][j];
                if(ch[i][j]=='S') {s1=i;s2=j;}
            }
        }
        int fx[]={1,0,0,-1};
        int fy[]={0,1,-1,0};
      queue<node>q;
        visited[s1][s2][0]=true;
        q.push(node(s1,s2,0));
        while(!q.empty())
        {
            N=q.front();
            q.pop();
            if(ch[N.u][N.v]=='E')
            {
                cout<<N.cnt<<endl;
                ck=1;
                break;
            }

            for(int i=0;i<4;i++)
            {
                int ck1=1;
                int v1=N.u;
                int v2=N.v;
                for(int j=(N.cnt)%3;j>=0;j--)
                {
                    v1+=fx[i];
                     v2+=fy[i];
                    if(v1<0 || v2<0 || v1>=r || v2>=c || ch[v1][v2]=='#')
                    {
                        ck1=0;
                        break;
                    }
                }

                if(ck1==1 && !visited[v1][v2][(N.cnt+1)%3])
                {
                    visited[v1][v2][(N.cnt+1)%3]=true;
                    q.push(node(v1,v2,(N.cnt+1)));
                }
            }
        }
        if(ck==0) cout<<"NO"<<endl;

    }
}
