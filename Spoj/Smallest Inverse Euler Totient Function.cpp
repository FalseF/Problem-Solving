// Problem: B. Partial Replacement
// Contest: Codeforces - Codeforces Round #710 (Div. 3)
// URL: https://codeforces.com/contest/1506/problem/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)


/*########  IN THE NAME OF AintAH   ##########*/

#pragma GCC diagnostic ignored "-Wunused-variable"
#pragma GCC diagnostic ignored "-Wunused-parameter" 
#include<bits/stdc++.h>
using namespace std;
#pragma GCC diagnostic ignored "-Wunused-but-set-variable" 
#pragma GCC diagnostic ignored "-Wformat"
#define ll long long
#define INF 999999999999999999
#define nl printf("\n")
#define  r0 return 0
#define  r1 return 1
#define sf1(x)  scanf("%d",&x)
#define sf2(x,y)  scanf("%d %d",&x,&y)
#define sf3(x,y,z)  scanf("%d %d %d",&x,&y,&z)
#define pf1(x)  printf("%d\n",x)
#define pf2(x,y)  printf("%d %d\n",x,y)
#define pf3(x,y,z)  printf("%d %d %d\n",x,y,z)
#define yes  printf("YES\n")
#define no  printf("NO\n")
#define pc(x,y)  printf("Case %d: %d\n",x,y)
#define pcn(x,y)  printf("Case %d:\n",x)
#define pb push_back
#define mp make_pair
#define pa pair<int,int>
#define mem(a,b) memset(a,b,sizeof(a))
#define MIN  -99999999999999999
#define READ(f) freopen(f,"r",stdin)
#define WRITE(f) freopen(f,"w",stdout)
#define pi 2.0*acos(0.0)
#define vs(v) (v.begin(),v.end())
//int max(int a,int b) {if(a>b) return a; else return b;}  min(int a,int b) {if(a<b) return a; else return b;}
int power(int B,int P){ if(P==0) return 1; int X=power(B,P/2); if(P%2==0) return X*X; else return B*X*X;}
int fx[]={1,-1,0,0}; int fy[]={0,0,1,-1};

#define MAXM 202918035
#define MAXN 100000000
int phi[MAXM+1];
int minv[MAXN+1];
void totient()
{
  int i, j;
  for( i = 1; i <= MAXM; ++i) phi[i] = i;
  for( i = 2; i <= MAXM; ++i)
    if( phi[i] == i )
      for( j = i; j <= MAXM; j += i)
        phi[j] = (phi[j] / i) * (i - 1);
        
        for(i=1;i<=MAXM;i++)
        {
        	if(phi[i]<=MAXN && minv[phi[i]]==0)
        	{
        		minv[phi[i]]=i;
        	}
        }
  
}

int main()
{
	totient();
   int T,N,E,u,Q,v,n,i,j,k,sum=0,ck=0,x,y,cs=0;
 
     sf1(T);
     while(T--)
     {
         sf1(N);
         if(minv[N]==0)
         {
         	printf("-1\n");
         }
         else 
         {
         	printf("%d\n",minv[N]);
         } 
     	
     }

   
   /************ALEYA YOUSUF ************/
 
 
 /************AintAH IS ALMIGHTY ************/
return 0;
 
}

