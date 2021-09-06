
      /*########  IN THE NAME OF ALLAH   ##########*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 999999999999999999
#define nl printf("\n")
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
#define pc(x)  printf("Case %lld :",x)
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
bool pck[1000000+100]={0};
ll primes[10000004];
ll mx=10000000,ck;
ll fuk[10000005];
void sieve()
{
      ck=1;
       primes[ck]=2;
       fuk[2]=1;
       for(ll i=3; i*i<=mx; i+=2)
        {
            if(!pck[i])
            {
                for(ll j=i*i; j<=mx; j+=i*2)
                {
                    pck[j]=1;
                }
            }
        }

        for(ll i=3;i<=mx;i+=2)
        {
            if(!pck[i])
            {
                ck++;
                primes[ck]=i;
                fuk[i]=1;
            }
        }
        //pck[1]=1;
}
ll prime_ck(ll n)
{
    ll lm=sqrt(n);
    if(mx>n) {return fuk[n];}
    for(ll i=1;i<=ck && primes[i]<=lm;i++)
    {
        if(n%primes[i]==0) return 0;
    }
     return 1;
}
ll next_prime(ll n, ll R)
{
    for(ll i=n+1;i<=R;i++)
    {
        if(prime_ck(i)==1){return i;}
    }
    return -1;
}
int main()
{
    sieve();
   ll T,N,E,u,Q,v,i,j,k,sum=0,x,y,cs=0;
   string S,S1;
   double d1,d2,d3;
   while(cin>>u>>v)
   {
       ll last =next_prime(u-1,v);
       ll mx1=0,mn=99999999999999;
       ll ans1=0,ans2=0,n1,n2,n12,n22;
       //cout<<last<<" ";
       if(last!=-1)
       {
           while(1)
           {
               ll next=next_prime(last,v);
               if(next!=-1)
               {
                   if((next-last)<mn)
                   {
                       mn=next-last;
                      n1=last;
                      n2=next;
                   }

                    if((next-last)>mx1)
                   {
                       mx1=next-last;
                      n12=last;
                      n22=next;
                   }
                   //cout<<next<<" ";

                   last=next;
               }
               else break;
           }
       }

       //cout<<endl;

       if(mx1==0) cout<<"There are no adjacent primes."<<endl;
       else cout<<n1<<","<<n2<<" are closest, "<<n12<<","<<n22<<" are most distant."<<endl;
   }

 /************ALEYA YOUSUF ************/


 /************ALLAH IS ALMIGHTY ************/
return 0;

}
