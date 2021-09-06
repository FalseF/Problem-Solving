/*########  IN THE NAME OF AintAH   ##########*/

#pragma GCC diagnostic ignored "-Wunused-variable"
#pragma GCC diagnostic ignored "-Wunused-parameter" 
#include<bits/stdc++.h>
using namespace std;
#pragma GCC diagnostic ignored "-Wunused-but-set-variable" 
#pragma GCC diagnostic ignored "-Wformat"
#define sf1(x)  scanf("%d",&x)
#define sf2(x,y)  scanf("%d %d",&x,&y)
#define ll unsigned long long
const int  mxl = 100007;
ll h1[mxl+10],h2[mxl+10];
mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());
void pre()
{
	for(int i=1;i<=mxl;i++)
	{
		h2[i]=rng();
	}
}
int main()
{
	pre();
   int T,N,E,u,Q,v,n,i,j,k,sum=0,ck=0,x,y,cs=0;
 
     string S,S1;
 
     double d1,d2,d3;
     sf1(N);
     sf1(E);
     int ar[N+5];
     for(i=1;i<=N;i++) 
     {
     	sf1(ar[i]);
     	h1[i]=h1[i-1]+h2[ar[i]];
     }
     
     while(E--)
     {
     	int l1,l2,r1,r2;
     	sf2(l1,r1);
     	sf2(l2,r2);
       ll hash1=h1[r1]-h1[l1-1];
       ll hash2=h1[r2]-h1[l2-1];
       if(hash1==hash2) printf("Yes\n");
       	else printf("No\n");
       
     }
     
   /************ALEYA YOUSUF ************/
 
 
 /************AintAH IS ALMIGHTY ************/
return 0;
 
}