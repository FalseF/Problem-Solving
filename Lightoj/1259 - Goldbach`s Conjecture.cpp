

      /*########  IN THE NAME OF ALLAH   ##########*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sf1(x)  scanf("%lld",&x)
#define sf2(x,y)  scanf("%lld %lld",&x,&y)
#define sf3(x,y,z)  scanf("%lld %lld %lld",&x,&y,&z)
#define pf1(x)  printf("%lld\n",x)
#define pf2(x,y)  printf("%lld %lld\n",x,y)
#define pf3(x,y,z)  printf("%lld %lld %lld\n",x,y,z)
#define yes  printf("YES\n")
#define no  printf("NO\n")
#define pc(x)  printf("Case %lld:",x)
#define WRITE(f) freopen(f,"w",stdout)


vector<ll>V;

vector<ll>G;

vector <ll> primes;

#define MAX 10000000

bool A[MAX+10];

void sieve()
{

    primes.push_back(2);

    for(ll i=2;i<=MAX;i+=2)

        A[i]=1;

        A[2]=0;

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


int main()
{
    sieve();

   ll T,N,E,u,v,i,j,k,C=0,sum=0,ck=0,x,y;

   string S,S1;

   double d1,d2,d3;


   WRITE("1.txt");

   sf1(T);

   for(i=1;i<=T;i++)
   {
       sf1(N);

       ll ans=0;

       ck=primes.size();

       for(j=0;j<ck;j++)
       {
           ll num=N-primes[j];


           if(num<primes[j]) {break;}

           if(A[num]==0) ans++;
       }

       pc(i);printf(" %lld\n",ans);



   }


 /************ALEYA YOUSUF ************/


 /************ALLAH IS ALMIGHTY ************/
return 0;

}
