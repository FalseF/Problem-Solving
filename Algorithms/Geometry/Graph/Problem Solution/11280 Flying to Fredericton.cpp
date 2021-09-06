


#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

ll ans[100000];


map<string ,ll>level;

map<string , ll>dis;

struct edge{

    string V;
    ll W;

    edge(string b, ll c)
    {
        V=b;W=c;
    }

};
map<string, vector<edge> >G;

 string s="Calgary";

  string  d="Fredericton";

void dijkstra(ll n)
{
    dis[s]=0;
    level[s]=0;

    queue<string>Q;

    Q.push(s);

    while(!Q.empty())
    {
        string S=Q.front();
        Q.pop();
        for(ll i=0;i<G[S].size();i++)
        {
            string v=G[S][i].V;
            ll c=G[S][i].W;

            if((dis[S]+c)<dis[v] && (level[S])<=n)
            {
                dis[v]=dis[S]+c;
                Q.push(v);
                level[v]=level[S]+1;
                if(v==d)ans[n]=dis[v];

            }
        }
    }
}
int main()
{
     freopen("output.txt","w",stdout);
    ll N,E,c,T;

       string u,v,d;
       string S[1000];

    cin>>T;

    for(ll i=1;i<=T;i++)

    {

    cin>>N;

    for(ll j=0;j<N;j++) {cin>>S[j]; dis[S[j]]=INT_MAX;}



    cin>>E;

    for(ll j=1;j<=E;j++)
    {
        cin>>u>>v>>c;

        G[u].push_back(edge(v,c));
        //G[v].push_back(edge(u,c));
    }


    ll A,n;

    cin>>A;

    cout<<"Scenario #"<<i<<endl;

    while(A--)
    {
       cin>>n;
       for(ll j=0;j<N;j++) {dis[S[j]]=INT_MAX;}
        memset(ans,-1,sizeof(ans));


         dijkstra(n);

       if(ans[n]==-1){cout<<"No satisfactory flights"<<endl;}


       else {cout<<"Total cost of flight(s) is $"<<ans[n]<<endl;}


    }

    G.clear();
    level.clear();
    dis.clear();

    if(i!=T) cout<<endl;




    }

}
