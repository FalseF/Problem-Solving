#include<bits/stdc++.h>
using namespace std;
#define READ(f) freopen(f,"r",stdin)
#define WRITE(f) freopen(f,"w",stdout)
const int max_node = 1e6+5;
int trie[max_node][5];
int cnt[max_node][5];
int root,id;
int level[max_node+2];
void inti()
{
	root=0;
	id=0;
	for(int i=0;i<max_node;i++)
	{
		for(int j=0;j<2;j++)
		{
			cnt[i][j]=0;
			trie[i][j]=-1;
			level[i]=0;
		}
	}
	
}
int Insert(char s[], int len)
{
	int now=root,ans=0;
	for(int i = 0;i<len; i++)
	{
		if( trie[now][s[i]-48] == -1)
		{
			trie[now][s[i]-48] = ++id;
			level[id]=level[now]+1;
		}
		
		now=trie[now][s[i]-48];
	
        cnt[now][s[i]-48]++;
        
       // cout<<id<<" "<<level[now]<<" "<<cnt[now][s[i]-48]<<endl;
        
        int n1 = level[now] * cnt[now][s[i]-48];
        
        ans = max(ans,n1);
		
	}
	
	return ans;
}

int main()
{
	
	int t,n;
	scanf("%d",&t);
	while(t--)
	{
		inti();
		
		scanf("%d",&n);
		
		int ans = 0;
		
		while(n--)
		{
			char s[204];
		    scanf("%s",s);
		   int len = strlen(s);
		   int ck = Insert(s,len);
		   
		   ans = max(ck,ans);
		   
		}
		
		printf("%d\n",ans);
		
		
		
	}
	
}