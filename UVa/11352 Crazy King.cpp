
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
ll power(ll B,ll P){ if(P==0) return 1; ll X=power(B,P/2); if(P%2==0) return X*X; else return B*X*X;}

ll fx[]={-1,-2,-1,-2,1,2,1,2};

ll fy[]={-2,-1,2,1,-2,-1,2,1};

ll ux[]={0,-1,0,1,-1,1,-1,1};

ll vy[]={1,0,-1,0,-1,1,1,-1};

vector<ll>V;

vector<ll>G;

char CH[1000][1000];

ll visited[1005][1005];
ll level[1005][1005];

void bfs(ll s1, ll s2,ll d1, ll d2)
{

   memset(visited,0,sizeof(visited));
   memset(level,0,sizeof(level));

    visited[s1][s2]=1;

    level[s1][s2]=0;

    queue<pair<ll,ll> >Q;

    Q.push(mp(s1,s2));

    while(!Q.empty())
    {
        ll u1=Q.front().first;

        ll u2=Q.front().second;

        Q.pop();



        for(ll i=0;i<8;i++)
        {
            ll v1=ux[i]+u1;

            ll v2=vy[i]+u2;

           //cout<<v1<<" "<<v2<<endl;

            if(CH[v1][v2]=='X') continue;

            if(v1>=0 && v2>=0 && v1<d1 && v2<d2 && visited[v1][v2]==0)
            {
                visited[v1][v2]=1;

                cout<<v1<<" "<<v2<<endl;

                level[v1][v2]=level[u1][u2]+1;

                Q.push(mp(v1,v2));


            }
        }
    }

}

int main()
{
   ll T,N,E,u,v,i,j,k,C=0,sum=0,ck=0,x,y;

   string S,S1;

   cin>>T;

   for(i=1;i<=T;i++)
   {
       cin>>N>>E;

       for(j=0;j<N;j++)
       {
           for(k=0;k<E;k++)
           {
               cin>>CH[j][k];
           }
       }

       ll s1,s2,d1,d2;

       for(j=0;j<N;j++)
       {
           for(k=0;k<E;k++)
           {

               if(CH[j][k]=='A') {s1=j;s2=k;}

               if(CH[j][k]=='B') {d1=j;d2=k;}

               if(CH[j][k]=='Z')
               {

                   CH[j][k]='X';

                   for(ll h=0;h<8;h++)
                   {
                       ll u1=fx[h]+j;

                       ll u2=fy[h]+k;

                       if(u1>=0 && u2>=0 && u1<N && u2<E && CH[u1][u2]=='.')
                       {
                           CH[u1][u2]='X';
                       }
                   }
               }
           }
       }

//       for(j=0;j<N;j++)
//       {
//           for(k=0;k<E;k++) cout<<CH[j][k];nl;
//       }

       bfs(s1,s2,N,E);

//       for(j=0;j<N;j++)
//       {
//           for(k=0;k<E;k++) cout<<level[mp(j,k)]<<endl;
//       }

       if(level[d1][d2]==0)
       {
           cout<<"King Peter, you can't go now!"<<endl;
       }

       else cout<<"Minimal possible length of a trip is "<<level[d1][d2]<<endl;
   }

 /************ALEYA YOUSUF ************/


 /************ALLAH IS ALMIGHTY ************/
return 0;

}
