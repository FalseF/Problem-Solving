
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define WRITE(f) freopen(f,"w",stdout)
vector<ll>value1,value2;
ll ar[200000];
void bfs1(ll sum, ll l, ll r)
{
    if(l==r)
    {
        value1.push_back(sum);
        return ;
    }
    for(ll i=0;i<3;i++)
    {
        bfs1(sum+ar[l]*i,l+1,r);
    }
}
void bfs2(ll sum, ll l, ll r)
{
    if(l==r)
    {
        value2.push_back(sum);
        return ;
    }
    for(ll i=0;i<3;i++)
    {
        bfs2(sum+ar[l]*i,l+1,r);
    }
}
int main()
{
    //WRITE("1.txt");
    ll T;
    cin>>T;
    ll cs=0;
    while(T--)
    {
        value1.clear();
         value2.clear();
        cs++;
        ll N,make_coin;
        cin>>N>>make_coin;
    ll l=N>>1;
    ll  r=N-l;
    // array ta ke 2ta part e vag korchi
    for(ll i=0;i<N;i++)
    {
        cin>>ar[i];
    }
    bfs1(0,0,l);
    bfs2(0,l,N);
    ll fk=0;
    sort(value2.begin(),value2.end());
    for(ll i=0;i<value2.size();i++) cout<<value2[i]<<" ";
    for(ll i=0;i<value1.size();i++)
    {
        ll ck=make_coin-value1[i];
        //cout<<ck<<endl;
        ll index=upper_bound(value2.begin(),value2.end(),ck)-value2.begin();
        if(value2[index-1]==ck){
            fk=1;
            break;
        }
    }
    cout<<"Case "<<cs<<": ";
    if(fk==1) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;


    }

}
