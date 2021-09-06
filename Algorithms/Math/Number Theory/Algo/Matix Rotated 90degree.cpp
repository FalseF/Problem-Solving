
      /*########  IN THE NAME OF ALLAH   ##########*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll ar[2000][2000];
void rotated(ll N)
{
    for(ll i=0;i<N/2;i++)
    {
        for(ll j=i;j<N-i-1;j++)
        {
            ll temp=ar[i][j];
            ar[i][j]=ar[N-1-j][i];
            ar[N-1-j][i]=ar[N-1-i][N-1-j];

            ar[N - 1 - i][N - 1 - j] = ar[j][N - 1 - i];
            ar[j][N - 1 - i] = temp;
        }
    }
}
ll temp[200][200];
void rotated2(ll N)
{
    for(ll i=0;i<N;i++)
    {
        for(ll j=0;j<N;j++)
        {
            temp[i][j]=ar[N-j-1][i];
        }
    }
}
int main()
{
   ll T,N,E,u,Q,v,i,j,k,sum=0,ck=0,x,y,cs=0;

   string S,S1;

   double d1,d2,d3;
   cin>>N;
   for(i=0;i<N;i++)
   {
       for(j=0;j<N;j++)
       {
           cin>>ar[i][j];
       }
   }
   rotated2(N);
   for(i=0;i<N;i++)
   {
       for(j=0;j<N;j++) cout<<temp[i][j]<<" ";
       cout<<endl;
   }



 /************ALEYA YOUSUF ************/


 /************ALLAH IS ALMIGHTY ************/
return 0;

}
