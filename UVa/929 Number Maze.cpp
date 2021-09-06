#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

ll fx[]={0,0,1,-1};

ll fy[]={1,-1,0,0};

ll cost[1000][1000];

ll dis[1000][1000];

struct node{

    ll N1;ll N2;ll W;

    node(ll a, ll b,ll c)
    {
        N1=a;
        N2=b;
        W=c;
    }

};



bool operator <(node a, node b)
{
    return a.W>b.W;
}

void dijkstra(ll s1,ll s2, ll r, ll c)
{

    dis[0][0]=cost[0][0];


   priority_queue<node> Q;

    Q.push(node(0,0,0));

    while(!Q.empty())
    {
        node u=Q.top();

        Q.pop();



        for(ll i=0;i<4;i++)
        {
            ll v1=u.N1+fx[i];

            ll v2=u.N2+fy[i];

            ll R=dis[u.N1][u.N2]+cost[v1][v2];

            if(v1>=0 && v2>=0 && v1<=r && v2<=c && R<dis[v1][v2])
            {


                 dis[v1][v2]=R;
                 Q.push((node(v1,v2,dis[v1][v2])));

            }
        }
    }


}

int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    ll t,n,e,r,c,u,v,x,y;

    cin>>t;

    for(ll i=1;i<=t;i++)
    {
        cin>>r>>c;

        for(ll j=0;j<r;j++)
        {
            for(ll k=0;k<c;k++)
            {
                cin>>cost[j][k];
                dis[j][k]=INT_MAX;
            }
        }
        r--;c--;

        dijkstra(0,0,r,c);

         cout<<dis[r][c]<<endl;

        memset(dis,0,sizeof(dis));

        memset(cost,0,sizeof(cost));








    }

}
