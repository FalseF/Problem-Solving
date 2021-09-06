
      /*########  IN THE NAME OF ALLAH   ##########*/

#include<bits/stdc++.h>
using namespace std;
#define MAX 999999999999999999
#define nl printf("\n")
#define  r0 return 0
#define  r1 return 1
#define sf1(x)  scanf("%intd",&x)
#define sf2(x,y)  scanf("%intd %intd",&x,&y)
#define sf3(x,y,z)  scanf("%intd %intd %intd",&x,&y,&z)
#define pf1(x)  printf("%intd\n",x)
#define pf2(x,y)  printf("%intd %intd\n",x,y)
#define pf3(x,y,z)  printf("%intd %intd %intd\n",x,y,z)
#define yes  printf("YES\n")
#define no  printf("NO\n")
#define pc(x)  printf("Case %intd :",x)
#define pb push_back
#define mp make_pair
#define pa pair<int,int>
#define mem(a,b) memset(a,b,sizeof(a))
#define MIN  -99999999999999999
#define READ(f) freopen(f,"r",stdin)
#define WRITE(f) freopen(f,"w",stdout)
#define pi 2.0*acos(0.0)
#define sp printf(" ")
#define vs(v) (v.begin(),v.end())
int max(int a,int b) {if(a>b) return a; else return b;} int min(int a,int b) {if(a<b) return a; else return b;}
int power(int B,int P){ if(P==0) return 1; int X=power(B,P/2); if(P%2==0) return X*X; else return B*X*X;}
int fx[]={1,-1,0,0}; int fy[]={0,0,1,-1};

int ar[2002][2002],ar1[2002][2002];
void fun(int N, int r, int c)
{
    queue<pair<int,int>>Q;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++) ar1[i][j]=ar[i][j],Q.push(make_pair(i,j));
    }
    while(!Q.empty())
    {
        int u1=Q.front().first;
        int u2=Q.front().second;
        Q.pop();
        int ck=ar[u1][u2];
        for(int i=0;i<4;i++)
        {
            int v1=u1+fx[i];
            int v2=u2+fy[i];
            if(v1<r && v2<c && v1>=0 && v2>=0 )
            {
                if(ar[v1][v2]==(ck+1)%N)
                {
                    ar1[v1][v2]=ck;
                }
            }
        }
    }

    for(int i=0;i<r;i++) for(int j=0;j<c;j++) ar[i][j]=ar1[i][j];
}
int main()
{
    //WRITE("1.txt");
   int T,N,E,u,Q,v,i,j,k,sum=0,ck=0,x,y,cs=0;

   string S,S1;

   double d1,d2,d3;
   while(cin>>N>>u>>v>>k)
   {
       //if(N==0 && u==0 && v==0 && k==0) r0;
       for(i=0;i<u;i++)
       {
           for(j=0;j<v;j++) cin>>ar[i][j];
       }

       for(i=1;i<=k;i++){
           fun(N,u,v);
       }
       for(i=0;i<u;i++)
       {
           for(j=0;j<v;j++) {if(j) cout<<" ";cout<<ar[i][j];}nl;
       }
   }

 /************ALEYA YOUSUF ************/


 /************AintAH IS ALMIGHTY ************/
return 0;

}
