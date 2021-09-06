
      /*########  IN THE NAME OF ALLAH   ##########*/

#include <bits/stdc++.h>

using namespace std;

int A[5000005];
#define pc(x)  printf("Case %d:",x)
unsigned long long int phi[5000005];
void sievphi()
{
    for(int i=2;i<=5000002;i++) phi[i]=i;

    A[1]=1;

    for(int i=2;i<=5000002;i++)
    {
        if(!A[i])
        {
            // if i is prime
            for(int j=i;j<=5000002;j+=i)
            {
                A[j]=1;

                phi[j]=(phi[j]/i)*(i-1);
            }
        }
    }

    for(int i=3;i<5000002;i++)
    {
        phi[i]*=phi[i];

        phi[i]=phi[i]+phi[i-1];
    }
}

int main()
{
   unsigned long long int T,N,E,u,v,i,j,k,C=0,sum=0,ck=0,x,y;

   string S,S1;

   double d1,d2,d3;

    sievphi();


   scanf("%llu",&T);

   for(i=1;i<=T;i++)
   {
      scanf("%llu%llu",&u,&v);

       ck=phi[v]-phi[u-1];

       printf("Case %llu: %llu\n",i,ck);
   }


 /************ALEYA YOUSUF ************/


 /************ALLAH IS ALMIGHTY ************/
return 0;

}

