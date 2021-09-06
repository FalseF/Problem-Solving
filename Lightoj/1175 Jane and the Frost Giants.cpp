/*########  IN THE NAME OF ALLAH   ##########*/

#pragma GCC diagnostic ignored "-Wunused-variable"
#pragma GCC diagnostic ignored "-Wunused-parameter" 
#include<bits/stdc++.h>
using namespace std;
#pragma GCC diagnostic ignored "-Wunused-but-set-variable" 
#pragma GCC diagnostic ignored "-Wformat"
char CH[204][204],graph[204][204];
int fx[]={1,-1,0,0}; 
int fy[]={0,0,1,-1};
struct edge{
	
	int U,V,W;
	edge(int a, int b, int c){
		U=a;
		V=b;
		W=c;
	}
};

int visited[203][204],R,C;
void bfs_f()
{
	for(int i=0;i<R;i++)
	{
		for(int j=0;j<C;j++)
		{
			graph[i][j]=CH[i][j];
		}
	}
	
	for(int i=0;i<R;i++)
	{
		for(int j=0;j<C;j++)
		{
			if(CH[i][j]=='F')
			{
				for(int k=0;k<4;k++)
				{
					int u=i+fx[k];
					int v=j+fy[k];
					if(u>=0 && v>=0 && u<R && v<C && CH[u][v]=='.')
					{
						graph[u][v]='F';
					}
				}
				
			}
		}
	}
	
	for(int i=0;i<R;i++)
	{
		for(int j=0;j<C;j++)
		{
			CH[i][j]=graph[i][j];
			
		}
	}
}

int bfs(int s1, int s2)
{
	visited[s1][s2]=1;
	queue<edge>Q;
	Q.push(edge(s1,s2,0));
	int Time=0;
	while(!Q.empty())
	{
		int u=Q.front().U;
		int v=Q.front().V;
		int w=Q.front().W;
		
		//cout<<u<<" "<<v<<" "<<w<<endl;
		Q.pop();
	    
	    if(w==Time)
	    {
	    	Time++;
	    	bfs_f();
	    }
	    
	    if(u==R-1 || v==C-1 || u==0 || v==0) {
	    	
	    	//cout<<u<<" "<<v<<endl;
	    	return w+1;}
	    
	    for(int i=0;i<4;i++)
	    {
	    	int v1=u+fx[i];
	    	int v2=v+fy[i];
	    	if(v1>=0 && v2>=0 && v1<R && v2<C && visited[v1][v2]==0 && CH[v1][v2]=='.')
	    	{
	    		visited[v1][v2]=1;
	    		//cout<<v1<<" "<<v2<<endl;
	    		Q.push(edge(v1,v2,w+1));
	    	}
	    }
	}
	
	return -1;
}
int main()
{
   int T,N,E,u,v,n,i,j,k,sum=0,ck=0,x,y,cs=0;
 
   scanf("%d",&T);
   while(T--)
   {
   	 cs++;
   	 int s1,s2;
   	 scanf("%d%d",&R,&C);
   	 for(i=0;i<R;i++)
   	 {
   	 	for(j=0;j<C;j++)
   	 	{
   	 		cin>>CH[i][j];
   	 		if(CH[i][j]=='J')
   	 		{
   	 			s1=i;s2=j;
   	 		}
   	 		visited[i][j]=0;
   	 		
   	 	}
   	 }
   	 
   	 int ans=bfs(s1,s2);
   	 if(ans==-1)
   	 {
   	 	printf("Case %d: IMPOSSIBLE\n",cs);
   	 }
   	 else{
   	 	printf("Case %d: %d\n",cs,ans);
   	 }
   	 
   }
   

   
   /************ALEYA YOUSUF ************/
 
 
 /************ALLAH IS ALMIGHTY ************/
return 0;
 
}