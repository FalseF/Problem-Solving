#include<bits/stdc++.h>
using namespace std;
#define READ(f) freopen(f,"r",stdin)
#define WRITE(f) freopen(f,"w",stdout)
const int max_node = 1e6+5;
int trie[max_node][12];
int end_point[max_node];
int cnt[max_node][12];
int root,id;

void inti()
{
	root=0;
	id=0;
	for(int i=0;i<max_node;i++)
	{
		for(int j=0;j<10;j++)
		{
			cnt[i][j]=0;
			trie[i][j]=-1;
			end_point[i]=0;
		}
	}
	
}
int Insert(char s[], int len)
{
	int now=root;
	for(int i = 0;i<len; i++)
	{
		if( trie[now][s[i]-48] == -1)
		{
			trie[now][s[i]-48] = ++id;
		}
		
		now=trie[now][s[i]-48];
	
        cnt[now][s[i]-48]++;
		
		if(end_point[now]) return 0;
		
	}
	
	end_point[now]++;
	
	if(cnt[now][s[len-1]-48]>1) return 0;
 else return 1;
}

int main()
{
	
	int t,n;
	scanf("%d",&t);
	while(t--)
	{
		inti();
		
		scanf("%d",&n);
		
		int ans =4;
		
		while(n--)
		{
			char s[104];
		    scanf("%s",s);
		   int len = strlen(s);
		   
		   if(ans==0) continue;
		   int ck = Insert(s,len);
		   
		   ans = min(ck,ans);
		   
		}
		
		if(ans==0) printf("NO\n");
		else printf("YES\n");
		
		
	}
	
}