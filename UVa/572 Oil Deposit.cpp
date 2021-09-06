
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
ll fx[]={1,-1,0,0,1,-1,1,-1,};
ll fy[]={0,0,1,-1,1,-1,-1,1};

ll A[3000005],B[3000005],C[3000005],visited[300][300],level[3000005];
char CH[1000][1000];
vector<ll>V,G;

void bfs(ll s1, ll s2, ll N, ll E)
{
    visited[s1][s2]=1;
    queue<pair<ll,ll> >Q;
    Q.push(mp(s1,s2));
    //cout<<s1<<" parent "<<s2<<endl;
    while(!Q.empty())
    {
        ll u1=Q.front().first;
        ll u2=Q.front().second;
        Q.pop();
        //cout<<u1<<" parent "<<u2<<endl;
        for(ll i=0;i<8;i++)
        {
            ll v1=u1+fx[i];
            ll v2=u2+fy[i];

            if(v1>=0 && v2>=0 && v1<N && v2<E && visited[v1][v2]==0 && CH[v1][v2]=='@')
            {
                //cout<<v1<< " "<<v2<<endl;
                visited[v1][v2]=1;
                Q.push(mp(v1,v2));

            }
        }
    }
}

int main()
{
   ll T,N,E,u,Q,v,i,j,k,sum=0,ck=0,x,y,cs=0;

   string S,S1;

   double d1,d2,d3;
   while(sf2(N,E))
   {
       if(N==0 && E==0) r0;
       for(i=0;i<N;i++)
       {
           for(j=0;j<E;j++) visited[i][j]=0,cin>>CH[i][j];
       }
    ll ans=0;
       for(i=0;i<N;i++)
       {
           for(j=0;j<E;j++)
           {
               if(CH[i][j]=='@' && visited[i][j]==0)
               {
                   ans++;
                   bfs(i,j,N,E);
               }
           }
       }

       //pc(ck);
       pf1(ans);

   }

 /************ALEYA YOUSUF ************/


 /************ALLAH IS ALMIGHTY ************/
return 0;

}


4
4
2
3
1 4 2
2 1 3
