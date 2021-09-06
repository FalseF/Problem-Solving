
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

ll A[3000005],B[3000005],C[3000005],visited[3000005];
char CH[1000][1000];

ll bfs(string s1, string s2, map<string , vector<string>>graph)
{
    queue<string>Q;
    Q.push(s1);
    map<string,ll>level;
    while(!Q.empty())
    {
        string u=Q.front();
        Q.pop();
        for(ll i=0;i<graph[u].size();i++)
        {
            string v=graph[u][i];
            if(level[v]==0)
            {
                level[v]=level[u]+1;
                Q.push(v);
                if(level[s2]>0) return level[s2];
            }
        }
    }
    return 0;
}

int main()
{
    WRITE("1.txt");
   ll T,N,E,u,Q,v,i,j,k,sum=0,ck=0,x,y,cs=0;

   string S,S1;

   double d1,d2,d3;
   cin>>T;
   cout<<"SHIPPING ROUTES OUTPUT"<<endl<<endl;
   for(i=1;i<=T;i++)
   {
       cin>>N>>E>>Q;
       map<string,vector<string> >graph;
       string s1[N+4],s2,s3;
       for(j=0;j<N;j++) cin>>s1[j];
       while(E--)
       {
           cin>>s2>>s3;
           graph[s2].pb(s3);
           graph[s3].pb(s2);
       }
       string s4,s5;
       cout<<"DATA SET  "<<i<<endl<<endl;
       ll ans=0;
       while(Q--)
       {
           cin>>u>>s4>>s5;
            ans=bfs(s4,s5,graph);
           if(ans==0)
           {
               cout<<"NO SHIPMENT POSSIBLE"<<endl;
           }
           else cout<<"$"<<ans*u*100<<endl;
       }
       nl;
       if(i==T) cout<<"END OF OUTPUT"<<endl;

   }



 /************ALEYA YOUSUF ************/


 /************ALLAH IS ALMIGHTY ************/
return 0;

}
