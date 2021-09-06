
      /*########  IN THE NAME OF ALLAH   ##########*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define pa pair<ll,ll>
#define mem(a,b) memset(a,b,sizeof(a))
#define MIN  -99999999999999999
#define READ(f) freopen(f,"r",stdin)
#define WRITE(f) freopen(f,"w",stdout)

map<string,ll>visited;
map<string,string>ans;
void bfs(string s1, string s2, map<string,vector<string>>graph)
{
    queue<string>Q;
    Q.push(s1);
    visited[s1]=1;
    while(!Q.empty())
    {
        string u=Q.front();
        if(u==s2) break;
        Q.pop();
        for(ll i=0;i<graph[u].size();i++)
        {
            string v=graph[u][i];
            if(!visited.count(v))
            {
                visited[v]=visited[u]+1;
                Q.push(v);
                ans[v]=u;
            }
        }
    }

}

void print(string d, string s)
{
    if(s==d) {cout<<s[0];return ;}
    else
    {
        print(ans[d],s);
        cout<<d[0];
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
       if(sum>0) cout<<endl;
       sum++;
       cin>>N>>E;
       string s1,s2;
       map<string ,vector<string> >graph;
       for(i=1;i<=N;i++)
       {
           cin>>s1>>s2;
           graph[s1].pb(s2);
           graph[s2].pb(s1);
       }
       string s3,s4;
       for(j=1;j<=E;j++)
       {
           cin>>s3>>s4;
           visited.clear();
           ans.clear();
           bfs(s3,s4,graph);
           print(s4,s3);
           cout<<endl;
       }
   }



 /************ALEYA YOUSUF ************/


 /************ALLAH IS ALMIGHTY ************/
return 0;

}
