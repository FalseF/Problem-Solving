#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

ll parent[100005],Rank[100005];

void initialize(ll N)
{
    for(ll i=0;i<N;i++) {parent[i]=i;Rank[i]=1;}
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
    ll N,i,j,E;
    while(cin>>N>>E)
    {
        if(N==0 && E==0) return 0;
        initialize(N);
        ll u,ck;
        for(i=1;i<=E;i++)
        {
            ll k;
            cin>>u;
            for(j=1;j<=u;j++)
            {
            cin>>k;
            if(j==1) ck=k;
            else Union(ck,k);
            }
        }

         ll nm=Find(0);
  ll ans=0;
  for(i=0;i<N;i++)
  {
      if(Find(i)==nm) ans++;
  }
  cout<<ans<<endl;
    }


}
