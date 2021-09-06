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
char CH[202][202];
int visited[202][202];
int level[202][202];
int bfs(int s1, int s2, int d1, int d2, int N)
{
	memset(visited,0,sizeof(visited));
	memset(level,0,sizeof(level));
	queue<pair<int,int> >Q;
	Q.push(make_pair(s1,s2));
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
			if(CH[v1][v2]>CH[d1][d2]) continue;
			if(v1<0 || v2<0 || v1>=N || v2>=N) continue;
			
			if(CH[v1][v2]!='#' && visited[v1][v2]==0)
			{
				visited[v1][v2]=1;
				level[v1][v2]=level[u1][u2]+1;
				Q.push(make_pair(v1,v2));
			}
			
			if(visited[d1][d2]==1) return level[d1][d2];
		}
	}
	
	return 0;
}
int main()
{
   int T,N,E,u,Q,v,n,i,j,k,sum=0,ck=0,x,y,cs=0;
 
     string S,S1;
 
     double d1,d2,d3;
     scanf("%d",&T);
     while(T--)
     {
     	scanf("%d",&N);
     	
     	vector<char>vc;
     	int marx[50]={0};
     	int mary[50]={0};
     	 for(i=0;i<N;i++)
     	 {
     	 	for(j=0;j<N;j++)
     	 	{
     	 		cin>>CH[i][j];
     	 		if(CH[i][j]>='A' && CH[i][j]<='Z'){
     	 			vc.push_back(CH[i][j]);
     	 			marx[CH[i][j]-'A']=i;
     	 			mary[CH[i][j]-'A']=j;
     	 			
     	 		}
     	 	}
     	 }
     	 
     	 sort(vc.begin(),vc.end());
     	 ck=0;
     	 printf("Case %d: ",++cs);
     	 for(int i=0;i<vc.size()-1;i++)
     	 {
     	 	int s1=marx[vc[i]-'A'];
     	 	int s2=mary[vc[i]-'A'];
     	 	int d1=marx[vc[i+1]-'A'];
     	 	int d2=mary[vc[i+1]-'A'];
     	 	//cout<<s1<<" "<<s2<<" "<<d1<<" "<<d2<<endl;
     	 	int ans=bfs(s1,s2,d1,d2,N);
     	 	//cout<<ans<<endl;
     	 	sum+=ans;
     	 	if(ans==0)
     	 	{
     	 		printf("Impossible\n");
     	 		ck=1;
     	 		break;
     	 	}
     	 }
     	 
     	 if(ck==0) printf("%d\n",sum);
     	 sum=0;	
     }
   
   /************ALEYA YOUSUF ************/
 
 
 /************ALLAH IS ALMIGHTY ************/
return 0;
 
}