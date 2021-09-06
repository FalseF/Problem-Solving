
      /*########  IN THE NAME OF ALLAH   ##########*/

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

ll A[300005],B[300005],C[300005],visited[300005],level[300005];

char CH[1000][1000],ch;

vector<ll>G;

struct struc{

string S1;

double G;

struc(string s,double d)
{
    S1=s;

    G=d;
}

};
vector<struc>V;

bool fun(struc a, struc b)
{
   if(a.G>b.G) return 1;
   if(a.G<b.G) return 0;

   if(a.S1<b.S1) return 1;
   if(a.S1>b.S1) return 0;
}

int main()
{
    WRITE("output.txt");
    ll ck=0,n,m,a,b,c=0,s=0;

    ll T;
    double d;

    string S;

    cin>>T;

    for(ll i=0;i<T;i++)
    {
        cin>>S>>d;

        V.pb(struc(S,d));
    }
      sort(V.begin(),V.end(),fun);

      cout<<"1."<<V[0].S1<<endl;

      ck=1;

        for(ll j=1;j<T;j++)
        {
            if(V[j].G!=V[j-1].G) ck++;

            cout<<ck<<"."<<V[j].S1<<endl;


        }

return 0;
}
