#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll max(ll x,ll y) {if(x>y) return x; else return y;}
ll min(ll x,ll y) {if(x<y) return x; else return y;}
ll pow(ll Base,ll Power) { ll S=1; for(ll i=1;i<=Power;i++) S=S*Base; return S;}
ll Parent[100000],Rank[100000];
int fx4[]={1,-1,0,0}; int fy4[]={0,0,1,-1};
#define WRITE(f) freopen(f,"w",stdout)
struct edge{
    ll U,V;
    ll W;
};
edge Graph[755*755];
bool fun(edge a, edge b){return a.W<b.W;}

ll Find(ll N)
{
    if(Parent[N]==N) return N;
    else return Parent[N]=Find(Parent[N]);
}
ll Union(ll x, ll y)
{
    ll u=Find(x);

    ll v=Find(y);

    if(u!=v) {//cout<<"The are different Component so that the include in the same component";

             //first a sob gula alada component e chilo ar ekhon ekoi component e ene dichi tai comonent num ek ek kore komachi

            if(Rank[v]>Rank[u]){Rank[v]+=Rank[u];Parent[u]=v;} //zetar child beshi setar sathe new child add korchi abong mot child num add korchi

            else {Rank[u]+=Rank[v];Parent[v]=u;}
            return 1;

    }
    else {// cout<<"The are same component";

     return 0;
    }
}

int main()
{
    //WRITE("1.txt");
    ll ck=0,n,a,b,c=0,s=0,v,u,w,N,E;
    ll T;
    cin>>T;
    while(T--)
    {
    cin>>N;
    for(ll i=1;i<=N;i++) Parent[i]=i,Rank[i]=1;
    ll x[N+3],y[N+4];
    ll cnt=0;
    for(ll i=1;i<=N;i++)
    {

        cin>>x[i]>>y[i];

    }
    cin>>E;
    for(ll i=1;i<=E;i++)
    {
        cin>>u>>v;
         cnt+=Union(u,v);

    }
        if(cnt==(N-1))
        {
            cout<<"No new highways need"<<endl;

        }
        else{
    ll fk=0;
    for(ll i=1;i<=N;i++)
    {
        for(ll j=i+1;j<=N;j++)
        {
            Graph[fk].U=i;
            Graph[fk].V=j;
            Graph[fk].W=(x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]);
            fk++;

        }
    }
     sort(Graph,Graph+fk,fun);
     for(ll i=0;i<fk;i++)
     {
         if(Union(Graph[i].U,Graph[i].V))
         {
             cout<<Graph[i].U<<" "<<Graph[i].V<<endl;
         }
     }

    }

    if(T) cout<<endl;

    }

return 0;
}

/*
2
9
1 5
0 0
3 2
4 5
5 1
0 4
5 2
1 2
5 3
3
1 3
9 7
1 2

*/
