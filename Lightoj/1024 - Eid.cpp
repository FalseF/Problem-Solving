#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define INF 999999999999999999
#define pb push_back
#define mp make_pair
#define MOD 1000000007
#define PI 2*acos(0.0)
#define MAXX 10000000
#define WRITE(f) freopen(f,"w",stdout)
vector <ll> Primes;
ll status[MAXX/32];
bool check(ll N,ll pos){
    return (bool) (N & (1<<pos));
}
ll SET(ll N,ll pos){
    return (N | (1<<pos));
}
void Bitwise_seive(){
    Primes.push_back(2);
    for(ll i=3;i<=MAXX;i+=2){
        if(check(status[i/32],i%32)==0){
            Primes.push_back(i);
            for(ll j=i*i;j<=MAXX;j+= i*2){
                status[j/32]=SET(status[j/32],j%32);
            }
        }
    }
}
////double mysqrt(ll N){
//    double high,low,mid; high=(double)N;low=0.0;for(ll i=1;i<=64;i++){ mid=(high+low)/2; if(mid*mid>N) high=mid; else low=mid;}
//    return mid;}
//ll mod(ll B,ll M){ll X=B%M; if(X>=0) return X; else return M+X;}
//ll bigmod(ll B,ll P,ll M){ if(P==0) return 1; else if(P%2==0) { ll R=bigmod(B,P/2,M); return ((R%M)*(R%M))%M;}
//    else { ll R=bigmod(B,P-1,M); return ((R%M)*(B%M))%M;}
//}
///cin.ignore();
ll max(ll a,ll b) {if(a>b) return a; else return b;} ll min(ll a,ll b) {if(a<b) return a; else return b;}
ll power(ll B,ll P){ if(P==0) return 1; ll X=power(B,P/2); if(P%2==0) return X*X; else return B*X*X;}
ll fx4[]={1,-1,0,0}; ll fy4[]={0,0,1,-1};

string  F(string S, ll N)
{

    ll ans[100000]={0};

     ostringstream str1;

          str1 << N;

        string  S1= str1.str();


     ll l1=S.length();

     string R1;

     ll ck=0;

       ll l2=S1.length();

       ll C;

       ll carry=0;

       C=0;


       if(l1>l2)
       {
           for(ll i=l2-1;i>=0;i--)
           {
               ll n1=S1[i]-48;

               carry=0;

               C++;

               ck=C;


               for(ll j=l1-1;j>=0;j--)
               {
                   ll n2=S[j]-48;

                   ll m=(n2*n1+carry+ans[ck])%10;

                   carry=(n2*n1+carry+ans[ck])/10;

                    ans[ck]=m;

                   ck++;

               }

               if(carry!=0) {ans[ck]=carry;} else ck--;
           }
       }

       else
       {

       for(ll i=l1-1;i>=0;i--)
           {
               ll n1=S[i]-48;

               carry=0;

               C++;

               ck=C;


               for(ll j=l2-1;j>=0;j--)
               {
                   ll n2=S1[j]-48;

                   ll m=(n2*n1+carry+ans[ck])%10;

                   carry=(n2*n1+carry+ans[ck])/10;

                    ans[ck]=m;

                   ck++;

               }

               if(carry!=0) {ans[ck]=carry;} else ck--;
           }

       }

       ll i,j;

       for(i=ck,j=0;i>=1;i--,j++) {R1+=ans[i]+48;ans[i]=0;}

       return R1;



}

int main()
{
    Bitwise_seive();

   // WRITE("output.txt");

    //freopen("C:/Users/Md Faizul Haque/Desktop/Solving/input.txt","r",stdin);
    //freopen("C:/Users/Md Faizul Haque/Desktop/Solving/output.txt","w",stdout);

    ll T,N,M,X,Y,W,K,Q,R,P;

    cin>>T;

    for(ll C=1;C<=T;C++){
        cin>>N;
        ll A[N+5];
        for(int i=1;i<=N;i++) cin>>A[i];
        string ans;
        ll cnt[10006]={0};
        set<ll> S;
        for(int i=1;i<=N;i++){
            for(int j=0;Primes[j]*Primes[j]<=A[i];j++){
                if(A[i]%Primes[j]) continue;
                ll cntr=0;
                while(A[i]%Primes[j]==0){
                    cntr++;
                    A[i]/=Primes[j];
                }
                S.insert(Primes[j]);
                if(cnt[Primes[j]]<cntr){
                    cnt[Primes[j]]=cntr;
                }
            }
            if(A[i]!=1){
                S.insert(A[i]);
                cnt[A[i]]=max(cnt[A[i]],1);
            }
        }
        ans="1";
        for(auto it=S.begin();it!=S.end();it++){
            X=power(*it,cnt[*it]);
            ans=F(ans,X);
        }
        printf("Case %lld: ",C);
        cout<<ans<<endl;
    }

    return 0;
}
