
      /*########  IN THE NAME OF ALLHA   ##########*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 999999999999999999
#define nl cout<<endl
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
#define pc(x)  printf("Case %lld:",x)
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

ll fx[]={1,-1,0,0}; ll fy[]={0,0,1,-1};



char CH[1000][1000],ch;

vector<ll>V;

vector<ll>G;



int N,A[1000],I[1000],D[1000];

void LBS()
{
    I[1]=1;

    for(int i=1;i<=N;i++)
    {
        for(int j=i+1;j<=N;j++)
        {
            if(A[j]>A[i])
            {
                if(I[j]<I[i]+1)
                {
                    I[j]=I[i]+1;
                }
            }
        }
    }

    for(int i=1;i<=N;i++) cout<<I[i]<<" ";nl;

    D[N]=1;

    for(int i=N;i>=1;i--)
    {
        for(int j=i-1;j>=1;j--)
        {
            if(A[j]>A[i])
            {
                if(D[j]<D[i]+1)
                {
                    D[j]=D[i]+1;
                }
            }
            //else D[j]=D[i];
        }
    }

     for(int i=1;i<=N;i++) cout<<D[i]<<" ";nl;

    int ans=0;

    int LIS,LDS,idx;

    for(int i=1;i<=N;i++)
    {
        int X=I[i]+D[i]-1; //cout<<I[i]<<" "<<D[i]<<endl;

        if(X>ans)
        {
            ans=X;
            LIS=I[i];
            LDS=D[i];
            idx=i;
        }
    }

    vector<int> seq1,seq2;

    for(int i=idx;i>=1;i--)
    {
        if(I[i]==LIS)
        {
            seq1.push_back(A[i]);
            LIS--;
        }
    }

    LDS--;

    for(int i=idx+1;i<=N;i++)
    {
        if(D[i]==LDS)
        {
            seq2.push_back(A[i]);
            LDS--;
        }
    }

    reverse(seq1.begin(),seq1.end());

    for(int i=0;i<seq1.size();i++) cout<<seq1[i]<<" ";

    for(int i=0;i<seq2.size();i++) cout<<seq2[i]<<" "; cout<<endl;
}



int main()
{
    cin>>N;

    for(int i=1;i<=N;i++) cin>>A[i];

    LBS();
}
