
      /*########  IN THE NAME OF ALLAH   ##########*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 999999999999999999
//#define nl printf("\n")
#define  r0 return 0
#define  r1 return 1
#define sf1(x)  scanf("%lld",&x)
#define sf2(x,y)  scanf("%lld %lld",&x,&y)
#define WRITE(f) freopen(f,"w",stdout)
bool pck[10000000+100]={0};
ll primes[32001],ck;
void sieve()
{
       ck=1;
       primes[ck]=2;
       for(ll i=3; i*i<32001; i+=2)
        {
            if(!pck[i])
            {
                for(ll j=i*i; j<32001; j+=i*2)
                {
                    pck[j]=1;
                }
            }
        }

        for(ll i=3;i<32001;i+=2)
        {
            if(!pck[i])
            {
                ck++;
                primes[ck]=i;
            }
        }
}
ll p;
vector<ll>v[2000];
void fun(ll a,ll b)
    {
        ll i=0;
        p=-1;
        //cout<<"DD " <<b<<" "<<prime[i]<<endl;
        while(i<=ck && primes[i]<=b){
            //cout<<"HJ"<<endl;
            //v.clear();
            //c=0;
            if(a>primes[i]){i++;continue;}
            if( (primes[i+1]-primes[i]==primes[i+2]-primes[i+1]) && primes[i+1]<=b && primes[i+2]<=b){
                //c=1;
                ll t=primes[i+1]-primes[i];
                //printf("%d %d %d",prime[i],prime[i+1],prime[i+2]);
                p++;
                v[p].push_back(primes[i]);
                v[p].push_back(primes[i+1]);
                v[p].push_back(primes[i+2]);
                i+=2;
                while(primes[i+1]-primes[i]==t){
                    v[p].push_back(primes[i+1]);

                    i++;
                }
                            }
            else i++;
        }

    }
int main()
{
    //WRITE("1.txt");
    sieve();
    fun(0,32000);
   ll T,N,E,u,Q,i,j,k;
   while(cin>>N>>E)
   {
       if(N==0 && E==0) return 0;
       ll mx,mn;
       if(E>=N) {
        mx=E;
        mn=N;
       }
       else{
        mx=N;
        mn=E;
       }
       for(i=0;i<=p;i++)
       {
           ll sz=v[i].size()-1;
           if(v[i][0]>=mn && v[i][sz]<=mx)
           {
               cout<<v[i][0];
               for(j=1;j<=sz;j++)
               {
                   cout<<" "<<v[i][j];
               }
               cout<<endl;
           }
       }
   }

 /************ALEYA YOUSUF ************/


 /************ALLAH IS ALMIGHTY ************/
return 0;

}
