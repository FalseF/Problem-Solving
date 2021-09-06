#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll fx[]={0,0,1,-1};
ll fy[]={1,-1,0,0};
ll G[1005][1005];
ll visited[1005][1005];
ll level[1005][1005];
ll r,c;
ll bfs(ll s1, ll s2, ll d1, ll d2)
{
    ll u1,u2;
    visited[s1][s2]=1;
    level[s1][s2]=0;
    queue<pair<ll,ll> >Q;
    Q.push(make_pair(s1,s2));
    while(!Q.empty())
    {
         u1=Q.front().first;
         u2=Q.front().second;
        Q.pop();
        for(ll i=0;i<4;i++)
        {
            ll v1=u1+fx[i];
            ll v2=u2+fy[i];
            if(v1>=0 && v1<r && v2>=0 && v2<c && G[v1][v2]!=-1 && visited[v1][v2]==0)
            {
                visited[v1][v2]=1;
                level[v1][v2]=level[u1][u2]+1;
                Q.push(make_pair(v1,v2));
                if(visited[d1][d2]==1) return level[d1][d2];
            }
        }
    }
}

int main()
{
    ll i,n,m,x,y,k,l,r1,c1,s1,s2,d1,d2;
    while(cin>>r>>c)
    {
        if(c==0 && r==0) {return 0;}
        cin>>m;
        for(i=1;i<=m;i++)
        {
            cin>>r1>>c1;
            for(ll j=0;j<c1;j++)
            {
                cin>>y;
                G[r1][y]=-1;

            }
        }
        cin>>s1>>s2;
        cin>>d1>>d2;
        ll R=bfs(s1,s2,d1,d2);
        cout<<R<<endl;
        memset(G,0,sizeof(G));
        memset(level,0,sizeof(level));
        memset(visited,0,sizeof(visited));


    }
}
