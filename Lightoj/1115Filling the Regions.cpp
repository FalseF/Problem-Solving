/*########  IN THE NAME OF ALLAH   ##########*/

#pragma GCC diagnostic ignored "-Wunused-variable"
#pragma GCC diagnostic ignored "-Wunused-parameter" 
#include<bits/stdc++.h>
using namespace std;
#pragma GCC diagnostic ignored "-Wunused-but-set-variable" 
#pragma GCC diagnostic ignored "-Wformat"
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
#define pc(x,y)  printf("Case %lld: %lld\n",x,y)
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
ll fx[]={1,-1,0,0}; 
ll fy[]={0,0,1,-1};
char CH[60][62];
int visited[60][60];
int R,C;
void bfs(char ch)
{
	memset(visited,0,sizeof(visited));
	queue<pair<int,int> >Q;
	for(int i=0;i<C;i++)
	{
		if(CH[0][i]!=ch)
		{
			visited[0][i]=1;
			Q.push(make_pair(0,i));
		}
		if(CH[R-1][i]!=ch)
		{
			visited[R-1][i]=1;
			Q.push(make_pair(R-1,i));
		}
	}
	for(int i=1;i<R-1;i++)
	{
		if(CH[i][0]!=ch)
		{
			visited[i][0]=1;
			Q.push(make_pair(i,0));
		}
		if(CH[i][C-1]!=ch)
		{
			visited[i][C-1]=1;
			Q.push(make_pair(i,C-1));
		}
	}
	while(!Q.empty())
	{
		int u1=Q.front().first;
		int u2=Q.front().second;
		Q.pop();
		for(int i=0;i<4;i++)
		{
			int v1=u1+fx[i];
			int v2=u2+fy[i];
			//cout<<u1<<" "<<u2<<" "<<v1<<" "<<v2<<endl;
			if(v1<0 || v2<0 || v1>=R || v2>=C || visited[v1][v2]==1) continue;
			if(CH[v1][v2]==ch) continue;

			if(visited[v1][v2]==0)
			{
				visited[v1][v2]=1;
				Q.push(make_pair(v1,v2));
			}
			
		}
	}
	
	for(int i=0;i<R;i++)
	{
		for(int j=0;j<C;j++)
		{
			if(visited[i][j]==0)
			{
				CH[i][j]=ch;
			}
		}
	}
}
int main()
{
   int T,N,E,u,Q,v,n,i,j,k,sum=0,ck=0,x,y,cs=0;
 
     string S,S1;
 
     double d1,d2,d3;
     scanf("%d",&T);
     while(T--)
     {
     	scanf("%d%d",&R,&C);
     	 int mark[29]={0};
     	 for(i=0;i<R;i++)
     	 {
     	 	for(j=0;j<C;j++)
     	 	{
     	 		cin>>CH[i][j];
     	 	  
     	 	  mark[CH[i][j]-'A']=1;
     	 				
     	 	}
     	 }
     	 
     	 for(i=0;i<26;i++)
     	 {
     	 	if(mark[i]==1)
     	 	{
     	 		char ch=i+'A';
     	 		bfs(ch);
     	 	}
     	 }
     	 
     	 printf("Case %d:\n",++cs);
     	 
     	 for(i=0;i<R;i++)
     	 {
     	 	for(j=0;j<C;j++) cout<<CH[i][j];
     	 	cout<<endl;
     	 }
     	 
     }
   
   /************ALEYA YOUSUF ************/
 
 
 /************ALLAH IS ALMIGHTY ************/
return 0;
 
}