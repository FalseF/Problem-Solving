#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
vector <ll> primes;
#define MAX 2002

bool A[MAX+100];

ll ck[100000],prime[100000];
ll c=1;
void sieve()
{

     prime[2]=1;

    for(ll i=2;i<=MAX;i+=2)
        A[i]=1;
    for(ll i=3;i<=MAX;i+=2)
    {
        if(A[i]==0)
        {
                c++;
            primes.push_back(i);
            prime[i]=1;
            for(ll j=i*2 ;j<=MAX;j+=i)
                A[j]=1;
        }
    }

}


int main()
{
    sieve();

    ll N,i,j,T;

    freopen("output.txt","w",stdout);

    string S,ans;

    cin>>T;

    for(i=1;i<=T;i++)
    {
       cin>>S;

       ll L=S.length();

       sort(S.begin(),S.end());

       ll D;

       for(j=0;j<L-1;j++)
       {
          if(S[j]==S[j+1])
          {
             D=S[j];
             ck[D]++;
          }
          else
          {
             D=S[j];

             if(prime[ck[D]+1]==1) ans+=S[j];

          }

       }

       ck[S[L-1]]++;

       if(prime[ck[S[L-1]]]==1) ans+=S[L-1];

       ll ck1=ans.length();

       sort(ans.begin(),ans.end());



       if(ck1==0)cout<<"Case "<<i<<": empty"<<endl;

       else cout<<"Case "<<i<<": "<<ans<<endl;

       ans.clear();

       memset(ck,0,sizeof(ck));


    }



//    for(i=0;i<n;i++)
//    {
//        cout<<primes[i]<<" ";
//    }
}

