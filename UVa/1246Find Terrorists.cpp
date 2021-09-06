

      /*########  IN THE NAME OF ALLAH   ##########*/

#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define WRITE(f) freopen(f,"w",stdout)
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
#define pc(x,y)  printf("Case %lld: %lld\n",x,y)
#define pb push_back
bool pck[100000+100]={0};
ll prime_ck[200000];
void sieve()
{
      ll ck=1;
      prime_ck[2]=1;
       //primes.pb(2);
       for(ll i=3; i*i<=10000; i+=2)
        {
            if(!pck[i])
            {
                for(ll j=i*i; j<=10000; j+=i*2)
                {
                    pck[j]=1;
                }
            }
        }

        for(ll i=3;i<=10000;i+=2)
        {
            if(!pck[i])
            {
                ck++;
                prime_ck[i]=1;
            }
        }
}
int main()
{
    //WRITE("1.txt");
   ll T,N,E,u,Q,v,n,i,j,k,sum=0,ck=0,x,y,cs=0;

   string S,S1;
   sieve();

   //sort(primes.begin(),primes.end());
   cin>>T;
   while(T--)
   {
       cin>>x>>y;
       if(y==1 || y==0)
       {
           cout<<"-1"<<endl;
           continue;
       }
       ll cnt=0,fk=0;
       for(i=x;i<=y;i++)
       {
           cnt=0;
           for(j=1;j*j<=i;j++)
           {
               if(i%j==0)
               {
                   cnt++;
                   ll ck1=i/j;
                   if(ck1!=j) cnt++;
               }
           }
           if(prime_ck[cnt]==1)
           {
               fk=1;
               if(ck==0) cout<<i;
               else {cout<<" "<<i;}
               ck++;
           }
       }
       if(fk==0) cout<<"-1";
              cout<<endl;
              ck=0;
              fk=0;
   }


 /************ALEYA YOUSUF ************/


 /************ALLAH IS ALMIGHTY ************/
return 0;

}
