/*########  IN THE NAME OF ALLAH   ##########*/

#pragma GCC diagnostic ignored "-Wunused-variable"
#pragma GCC diagnostic ignored "-Wunused-parameter" 
#include<bits/stdc++.h>
using namespace std;
#pragma GCC diagnostic ignored "-Wunused-but-set-variable" 
#pragma GCC diagnostic ignored "-Wformat"
#define ll long long
const int mx = 1e5+5;
int ar[mx+3],blog;
int segment[mx+2];
void preproses(int n)
{
	int cnt = 0;
	blog = sqrt(n);
	for(int i = 1;i<=n;i++)
	{
		if(i%blog==0)
		{
			cnt++;
		}
		
		segment[cnt]+=ar[i]; 
		
	}
}

void update(int id,int v)
{
	int blg_n = blog/id;
	segment[blg_n]-=ar[id];
	segment[blg_n]+=v;
	ar[id] = v;
	
	
}

int query(int l , int r)
{
	int sum = 0;
	while(l<r &&  l % blog!=0)
	{
		sum+=ar[l];
		l++;
	}
	
	while(l+blog<=r)
	{
		sum+=segment[ l / blog ];
		
		l+=blog;
		
	}
	
	while(l<=r)
	{
		sum+=ar[l];
		l++;
	}
	
	return sum;
}
int main()
{
  
     int q,n;
     scanf("%d%d",&n,&q);
     for(int i =1;i<=n;i++) scanf("%d",&ar[i]);
    
     int l,r,ck,v;
     preproses(n);
     while(q--)
     {
     	scanf("%d",&ck);
     	if(ck==1)
     	{
     		scanf("%d%d",&l,&r);
     		int ans = query(l,r);
     		printf("%d\n",ans);
     	}
     	else 
     	{
     		scanf("%d%d",&l,&v);
     		update(l,v);
     	}
     	
     }
   
   /************ALEYA YOUSUF ************/
 
 /************ALLtAH IS ALMIGHTY ************/
return 0;
 
}
