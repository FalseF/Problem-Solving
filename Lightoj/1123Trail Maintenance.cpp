#include <bits/stdc++.h>
using namespace std;
int Parent[202];
struct edge{
    int U,V,W;
    edge (int a,int b,int c)
    {
        U=a;
        V=b;
        W=c;
    }

};
vector<edge>Graph,temp;

bool fun(edge a, edge b)
{
	return a.W<b.W;
}
void ini(int N)
{
    for(int i=1;i<=N;i++)
    {
        Parent[i]=i;
    }

}
int F(int N)
{
    if(Parent[N]==N) return N;
    
    else return Parent[N]=F(Parent[N]);
}
int Node,component;
int MST()
{
    sort(Graph.begin(),Graph.end(),fun);
    int S=0;
    component=0;
    for(int i=0;i<Graph.size();i++)
    {
        int u=Graph[i].U;
        int v=Graph[i].V;
        int C=Graph[i].W;
        int px=F(u);
        int py=F(v);
        if(px!=py)
        {
        	temp.push_back(edge(u,v,C));
        	component++;
            S+=C;
            Parent[py]=px;
        }
        
        if(component==(Node-1)) {
        	Graph.clear();
        	Graph=temp;
        	temp.clear();
        	break;
        }
        

    }
    return S;
}



int main()
{
   
    int T,cs=0,u,v,w,E;
    scanf("%d",&T);
    while(T--)
    {
    	cs++;
    	scanf("%d%d",&Node,&E);
    	Graph.clear();
    	temp.clear();
    	printf("Case %d:\n",cs);
    	for(int i=0;i<E;i++)
    	{
    		scanf("%d%d%d",&u,&v,&w);
    		Graph.push_back(edge(u,v,w));
    		ini(Node);
    		int ans=MST();
    		if(component==(Node-1))
    		{
    			printf("%d\n",ans);
    		}
    		else
    		{
    			printf("-1\n");
    		}
    		
    	
    	}
    }

return 0;
}
