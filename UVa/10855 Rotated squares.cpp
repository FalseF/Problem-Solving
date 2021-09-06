
      /*########  IN THE NAME OF ALLAH   ##########*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
char ar[2000][2000];
char ar1[2000][2000];
map<string,ll>mp;
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

ll Find(ll N, ll E)
{
    ll ans=0;
    for(ll i=0;i<N;i++)
    {
        for(ll j=0;j<N;j++)
        {
            if(i+E<=N && j+E<=N)
            {
                ll cnt=0;
                for(ll k=0;k<E;k++)
                {
                    for(ll m=0;m<E;m++)
                    {
                        if(ar1[i+k][j+m]==ar[k][m]) cnt++;
                    }
                }
                if(E*E==cnt) ans++;

            }
        }
    }
    return ans;
}
int main()
{
   ll T,N,E,u,Q,v,i,j,k,sum=0,ck=0,x,y,cs=0;

   string S,S1;

   double d1,d2,d3;
   while(cin>>N>>E)
   {
       if(N==0 && E==0) return 0;
   for(i=0;i<N;i++)
   {
       for(j=0;j<N;j++)
       {
           cin>>ar1[i][j];
       }
   }
     for(i=0;i<E;i++)
     {
         for(j=0;j<E;j++)
         {
             cin>>ar[i][j];
         }
     }
     for(i=0;i<4;i++)
     {
         if(i) cout<<" ";
         ll ans=Find(N,E);
         cout<<ans;
        rotated(E);
     }
     cout<<endl;
   }

 /************ALEYA YOUSUF ************/


 /************ALLAH IS ALMIGHTY ************/
return 0;

}
