// Problem: A Toy Company
// Contest: LightOJ
// URL: https://lightoj.com/problem/a-toy-company
// Memory Limit: 64 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)


/*########  IN THE NAME OF ALLAH   ##########*/

#pragma GCC diagnostic ignored "-Wunused-variable"
#pragma GCC diagnostic ignored "-Wunused-parameter" 
#include<bits/stdc++.h>
using namespace std;
#pragma GCC diagnostic ignored "-Wunused-but-set-variable" 
#pragma GCC diagnostic ignored "-Wformat"
#define ll long long
//#define WRITE(f) freopen(f,"w",stdout)
int fx[] = {0, 0, 1, 0, 0, -1};
int fy[] = {0, 1, 0, 0, -1, 0};
int fz[] = {1, 0, 0, -1, 0, 0};
int visited[50][50][50];
int level[50][50][50];
void bfs(int f1,int f2, int f3)
{
	   
	   queue<int>Q;
	      Q.push(f1);
     	Q.push(f2);
     	Q.push(f3);
     	visited[f1][f2][f3]=1;
     	while(!Q.empty())
     	{
     		int n1=Q.front();
     		Q.pop();
     		int n2=Q.front();
     		Q.pop(); 
     		int n3=Q.front();
     		Q.pop();
     		for(int i=0;i<6;i++)
     		{
     			int a=(n1+fx[i])%26;
     			int b=(n2+fy[i])%26;
     			int c=(n3+fz[i])%26;
     			if(a<0) a+=26;
     			if(b<0) b+=26;
     			if(c<0) c+=26;
     			
     			if(visited[a][b][c]==0)
     			{
     				visited[a][b][c]=1;
     				level[a][b][c]=level[n1][n2][n3]+1;
     				Q.push(a);
     				Q.push(b);
     				Q.push(c);
     			}
     		}
     	}
}
int main()
{
	//WRITE("1.txt");
   int  T,N,E,u,v,n,i,j,k,sum=0,ck=0,x,y,cs=0;
 
     string S,S2;
 
     double d1,d2,d3;
    cin>>T;
     while(T--)
     {
     	
     	memset(level,0,sizeof(level));
     	memset(visited,0,sizeof(visited));
     	cin>>S>>S2>>N;
     	for(i=1;i<=N;i++)
     	{
     		string a1,b1,c1;
     	cin>>a1>>b1>>c1;
     		for(j=0;j<a1.length();j++)
     		{
     			for(k=0;k<b1.length();k++){
     				for(int m=0;m<c1.length();m++)
     				{
     					visited[a1[j]-'a'][b1[k]-'a'][c1[m]-'a']=1;
     				}
     			}
     		}
     		//visited[a1-'a'][b1-'a'][c1-'a']=1;
     	}
     	
     	if(visited[S[0]-'a'][S[1]-'a'][S[2]-'a'] == 1)
		{
			printf("Case %d: %d\n", ++cs, -1);
			continue;
		}
     	
     	int f1=S[0]-'a';
     	int f2=S[1]-'a';
     	int f3=S[2]-'a';	
     	
     	bfs(f1,f2,f3);
     	
     	if(visited[S2[0]-'a'][S2[1]-'a'][S2[2]-'a']==1)
     	{
     		printf("Case %d: %d\n",++cs,level[S2[0]-'a'][S2[1]-'a'][S2[2]-'a']);
     	}
     	
     	else{
     		printf("Case %d: -1\n",++cs);
     	}
     }
   
   
   /************ALEYA YOUSUF ************/
 
 
 /************ALLAH IS ALMIGHTY ************/
return 0;
 
}