
using namespace std;
#include <bits/stdc++.h>
#define ll long long
#define WRITE(f) freopen(f,"w",stdout)

//#define MAX 10000000
//typedef long long ll;
//bool A[MAX+100]={0};
//ll prime[10000004],ck;
//void sieve()
//{
//       ck=1;
//       prime[ck]=2;
//       for(ll i=3; i*i<=MAX; i+=2)
//        {
//            if(!A[i])
//            {
//                for(ll j=i*i; j<=MAX; j+=i*2)
//                {
//                    A[j]=1;
//                }
//            }
//        }
//
//        for(ll i=3;i<=MAX;i+=2)
//        {
//            if(!A[i])
//            {
//                ck++;
//                prime[ck]=i;
//            }
//        }
//}
//
//
//ll phi(ll val)
//{
//    ll res=val;
//    for(ll i=1;i<=ck && prime[i]*prime[i]<=val;i++)
//    {
//        if (val % prime[i] == 0) {
//            res /= prime[i];
//            res *= prime[i] - 1;
//            while (val % prime[i] == 0) val /= prime[i];
//            }
//
//        if (val > 1) {
//            res /= val;
//            res *= val - 1;
//        }
//    }
//    return res;
//}

ll phi(ll N)
{
    ll res=N;
    for(ll i=2;i*i<=N;i++)
    {
        if(N%i) continue;
        while(N%i==0)
        {
            N/=i;
        }
        res-=res/i;
    }
    if(N>1) res-=res/N;
    return res;
}

int main()
{
   // WRITE("1.txt");
    //sieve();
    ll T,N,E,cs=0;
    cin>>T;
    while(T--)
    {
        cs++;
        cin>>N>>E;
        vector<pair<ll,ll> >vc;
        for(ll i=1;i*i<=N;i++)
        {
            if(N%i==0)
            {
                vc.push_back(make_pair(i,phi(N/i)));
                vc.push_back(make_pair(N/i,phi(i)));
            }
        }

        //cout<<"Asche  "<<endl;

        sort(vc.begin(),vc.end());
        for(ll i=1;i<vc.size();i++)
        {
            vc[i].second+=vc[i-1].second;

        }
        ll u,v;
        cout<<"Case "<<cs<<endl;
       while (E--) {
            cin>>u;
            ll lo = 0, hi = vc.size() - 1, pos = -1;
            while (lo <= hi) {
                ll mid = (lo + hi) / 2;
                if (vc[mid].first <= u) {
                    lo = mid + 1;
                    pos = mid;
                }
                else hi = mid - 1;
            }
            if (pos == -1) cout<<"0"<<endl;
            else cout<<vc[pos].second<<endl;
        }
    }
}
