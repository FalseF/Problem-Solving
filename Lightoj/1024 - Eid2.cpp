
      /*########  IN THE NAME OF ALLAH   ##########*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl cout<<endl
#define  r0 return 0
#define  r1 return 1
#define sf1(x)  scanf("%lld",&x)
#define sf2(x,y)  scanf("%lld %lld",&x,&y)
#define sf3(x,y,z)  scanf("%lld %lld %lld",&x,&y,&z)
#define pf1(x)  printf("%lld\n",x)
#define pf2(x,y)  printf("%lld %lld\n",x,y)
#define pf3(x,y,z)  printf("%lld %lld %lld\n",x,y,z)
#define yes  printf("YES\n")
#define no  printf("NO\n")
#define pc(x)  printf("Case %lld:",x)
#define pb push_back
#define mp make_pair
#define pa pair<ll,ll>
#define mem(a,b) memset(a,b,sizeof(a))
#define MIN  -99999999999999999
#define READ(f) freopen(f,"r",stdin)
#define WRITE(f) freopen(f,"w",stdout)
#define pi 2.0*acos(0.0)
#define sp printf(" ")
#define vs(v) (v.begin(),v.end())
ll max(ll a,ll b) {if(a>b) return a; else return b;} ll min(ll a,ll b) {if(a<b) return a; else return b;}
ll power(ll B,ll P){ if(P==0) return 1; ll X=power(B,P/2); if(P%2==0) return X*X; else return B*X*X;}
ll fx[]={1,-1,0,0}; ll fy[]={0,0,1,-1};

ll B[300005],visited[300005],level[300005];

vector<ll>G;

vector <ll> primes;
#define MAX 10000000

bool A[MAX+100];

void sieve()
{
    primes.push_back(2);

    for(ll i=2;i<=MAX;i+=2)
        A[i]=1;
    for(ll i=3;i<=MAX;i+=2)
    {
        if(A[i]==0)
        {
            primes.push_back(i);
            for(ll j=i*2 ;j<=MAX;j+=i)
                A[j]=1;
        }
    }

}

string fun(string S,ll N){

         ostringstream str1;

          str1 << N;

        string  S1= str1.str();
    reverse(S.begin(),S.end()); reverse(S1.begin(),S1.end());
    int l1=S.length(); int l2=S1.length();
    for(int i=l2;i<l1;i++){
        S1+='0';
    }
    vector<ll> V[1000];

        ll M=0;

        for(int i=0;i<l2;i++){
            ll d=S1[i]-48;
            ll carry=0;

            for(int j=0;j<i;j++) V[i].pb(0);

            for(int j=0;j<l1;j++){
                ll d1=S[j]-48;
                ll m=d*d1+carry;
                V[i].pb(m%10);
                carry=m/10;
            }
            if(carry) V[i].pb(carry);
            M=max(M,V[i].size());
        }

        for(int i=0;i<l2;i++){
            for(int j=V[i].size();j<M;j++) V[i].pb(0);
        }

        vector<ll> ans;

        ll carry=0;
        for(int i=0;i<M;i++){
                ll d=carry;
            for(int j=0;j<l2;j++){
                d+=V[j][i];
            }
            //cout<<d<<endl;
            ans.pb(d%10);
            carry=d/10;
        }
        if(carry) ans.pb(carry);
        reverse(ans.begin(),ans.end());

        string ss;
        for(int i=0;i<ans.size();i++) ss+=(ans[i]+48);
        return ss;
}

int main()
{
    sieve();
   ll T,N,E,u,v,i,j,k,sum=0,ck=0,x,y;

   string S,S1;

   double d1,d2,d3;

   cin>>T;

   for(i=1;i<=T;i++)
   {
       cin>>N;

       set<ll>num;

       ll C[N+5];

       for(j=0;j<N;j++)
       {
           cin>>C[j];
       }

       ll P[10006]={0};

       for(k=0;k<N;k++)
       {
           ll cnt=0;

           for(u=0;primes[u]*primes[u]<=C[k];u++)
           {
               if(C[k]%primes[u]) continue;

               cnt=0;

               while(C[k]%primes[u]==0)
               {
                   cnt++;

                   C[k]=C[k]/primes[u];
               }

               P[primes[u]]=max(cnt,P[primes[u]]);

               num.insert(primes[u]);
           }

           if(C[k]!=1)
           {
               P[C[k]]=max(1,P[C[k]]);

               num.insert(C[k]);
           }
       }

       string ans="1";

       for(auto it=num.begin();it!=num.end();it++)
       {
           ll n=power(*it,P[*it]);
           ans=fun(ans,n);
       }

       pc(i);cout<<" "<<ans<<endl;


   }









 /************ALEYA YOUSUF ************/


 /************ALLAH IS ALMIGHTY ************/
return 0;

}
