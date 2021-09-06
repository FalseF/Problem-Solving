

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

string S="IEHOVA",ans;
ll d2,d1,s1,s2;
ll visited[1000][1000];
char CH[1000][1000];
void bfs(ll r, ll c)
{
    visited[s1][s2]=1;
    queue<pair<ll,ll>>Q;
    Q.push(mp(s1,s2));
    ll ck=0;
    while(!Q.empty())
    {
        ll u1=Q.front().first;
        ll u2=Q.front().second;
        Q.pop();
        for(ll i=0;i<4;i++)
        {
            ll v1=u1+fx[i];
            ll v2=u2+fy[i];
            if(visited[v1][v2]==0 && v1>=0 && v2>=0 && v2<c && v1<r && S[ck]==CH[v1][v2])
            {
                ck++;
                visited[v1][v2]=1;

                Q.push(mp(v1,v2));
                if(v1<u1) ans+="forth ";
                else if(v1==u1)
                {
                    if(u2>v2) ans+="left ";
                    else ans+="right ";
                }

            }
            if(v1==d1 && v2==d2 && ck==S.length())
            {
                ck++;
                if(v1<u1) ans+="forth ";
                else if(v1==u1)
                {
                    if(u2>v2) ans+="left ";
                    else ans+="right ";
                }
            }

        }
    }
}

int main()
{
    WRITE("1.txt");
   ll T,N,E,u,Q,v,i,j,k,sum=0,ck=0,x,y,cs=0;
   cin>>T;
   while(T--)
   {
       cin>>N>>E;
       memset(visited,0,sizeof(visited));
       for(i=0;i<N;i++)
       {
           for(j=0;j<E;j++)
           {
               cin>>CH[i][j];
               ck=0;
               ll l=S.length();
               if(CH[i][j]=='@') {s1=i;s2=j;}
               if(CH[i][j]=='#'){d1=i;d2=j;continue;}
               for(k=0;k<S.length();k++)
               {
                   if(CH[i][j]!=S[k]) ck++;
               }
               if(ck==l) visited[i][j]=1;
           }
       }

       bfs(N,E);
       ans.pop_back();
       cout<<ans<<endl;
       ans.clear();
   }



 /************ALEYA YOUSUF ************/


 /************ALLAH IS ALMIGHTY ************/
return 0;

}
