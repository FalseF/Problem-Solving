
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

ll A[3000005],B[3000005],C[3000005],visited[3000005],level[3000005];
char CH[1000][1000];
vector<ll>V,G;
char ar[100][100],ar1[100][100];
void tranpose(ll N)
{
    for(ll i=0;i<N;i++)
    {
        for(ll j=0;j<N;j++) ar[j][i]=ar1[i][j];

    }
    for(ll i=0;i<N;i++)
        for(ll j=0;j<N;j++) ar1[i][j]=ar[i][j];
}
void infun(ll N)
{
    for(ll i=0;i<N;i++)
    {
        for(ll j=0;j<N;j++)
        {
            ar1[i][j]=(ar1[i][j]-'0'+1)%10+'0';
        }
    }
}
void defun(ll N)
{
    for(ll i=0;i<N;i++)
    {
        for(ll j=0;j<N;j++)
        {
            ll ck=(ar1[i][j]-'0'-1)%10;
            if(ck<0) ck+=10;
            ar1[i][j]=ck+'0';

        }
    }
}
void Row(ll N,ll r,ll c)
{
    for(ll i=0;i<N;i++)
    {
        char ch=ar1[r][i];
        ar1[r][i]=ar1[c][i];
        ar1[c][i]=ch;
    }

}
void Col(ll N,ll r,ll c)
{
    for(ll i=0;i<N;i++)
    {
        char ch=ar1[i][r];
        ar1[i][r]=ar1[i][c];
        ar1[i][c]=ch;
    }

}
int main()
{
    WRITE("1.txt");
   ll T,N,E,u,Q,v,i,j,k,sum=0,ck=0,x,y,cs=0;

   string S,S1;

   double d1,d2,d3;
  cin>>T;
  while(T--)
  {
      cs++;
      cin>>N;
      for(i=0;i<N;i++)
      {
          for(j=0;j<N;j++) cin>>ar1[i][j];
      }
      cin>>E;
      ll l,r;
      while(E--)
      {
          cin>>S;
        if(S=="transpose") tranpose(N);
        else if(S=="inc") infun(N);
        else if(S=="dec") defun(N);
        else {
            cin>>l>>r;
            if(S=="row") Row(N,l-1,r-1);
            else Col(N,l-1,r-1);
        }
      }
      cout<<"Case #"<<cs<<endl;
      for(i=0;i<N;i++)
      {
          for(j=0;j<N;j++) cout<<ar1[i][j];nl;
      }
      nl;
  }


 /************ALEYA YOUSUF ************/


 /************ALLAH IS ALMIGHTY ************/
return 0;

}
