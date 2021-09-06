#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

ll parent[1000],Rank[1000];

void initialize()
{
    for(ll i=1;i<=1000;i++) {parent[i]=i;Rank[i]=1;}
}

ll Find(ll r)
{
    if(parent[r]==r) return r;

    parent[r]=Find(parent[r]);

    return parent[r];
}
ll component,ans=0;
void Union(ll x, ll y)
{
    ll u=Find(x);

    ll v=Find(y);

    if(u!=v) {//cout<<"The are different Component so that the include in the same component";

              component--;//first a sob gula alada component e chilo ar ekhon ekoi component e ene dichi tai comonent num ek ek kore komachi

            if(Rank[v]>Rank[u]){Rank[v]+=Rank[u];parent[u]=v;} //zetar child beshi setar sathe new child add korchi abong mot child num add korchi

            else {Rank[u]+=Rank[v];parent[v]=u;}

           // ll mx=max(Rank[u],Rank[v]);

            // ans=max(ans,mx);

          //  cout<<"u ="<<Rank[u]<<endl;

            //cout<<"v= "<<Rank[v]<<endl;


//ekoi componet e rakhlam

    }
    else {// cout<<"The are same component";


    }
}

int  main()
{
    initialize();

    ll N,E,u,v;

    cin>>N;
    cin>>E;
    component=N;
    for(ll i=1;i<=E;i++)
    {
        cin>>u>>v;

        Union(u,v);
    }
    cout<<component-1<<endl;
    //cout<<ans<<endl;



}
