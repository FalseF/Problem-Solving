#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
struct st{
    int height, weight;
    long long income;
    st(ll h,ll w, ll in)
    {
        height=h;
        weight=w;
        income=in;
    }


};
vector<st>V;

bool compare( st a, st b ) {
    if( a.income == b.income ) {
    //jodi income soman hoy tahole height dekhbo abong ta o same hole tahole jar nam er lenth km seta dekhbo*/
        if( a.height == b.height ) {
         return a.weight < b.weight;
        }else return a.height > b.height;
    }else return a.income > b.income;
}
int main()
{
   ll h,w,in,a;
   string s;
   for(ll i=0;i<5;i++)
   {
       cin>>h>>w>>in;
       V.push_back(st(h,w,in));
   }

   sort(V.begin(),V.end(),compare);
   for(ll i=0;i<5;i++)
   {
       cout<<V[i].income<<endl;

   }
}

