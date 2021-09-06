// Problem: Spam Me Not
// Contest: Toph
// URL: https://toph.co/p/spam-me-not
// Memory Limit: 512 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;
const int max_node = 5e6+5;
int trie[max_node][30];
int end_point[max_node][30];
int root,id;
void inti()
{
	root=0;
	id=0;
	for( int i = 0; i<27; i++)
	{
		trie[root][i]=-1;
	}
}
void Insert(char s[], int len, int val)
{
	int now=root,ch;
	for(int i = 0;i<len; i++)
	{
		 ch = s[i]-'a';
		if(s[i]=='.') { ch=26;}
		if( trie[now][ch]==-1)
		{
			trie[now][ch]=++id;
			
			for( int j =0 ; j<27; j++)
			{
				trie[id][j] = -1;
			}
		}
		
		now=trie[now][ch];
		
		if(s[i+1]=='.') end_point[val][ch]=1; 
		
	}
	
	end_point[val][ch]=1;
}

int Find(char s[], int len, int val)
{
	int now = root,ch;
	for(int i =0 ;i<len; i++)
	{
		 ch = s[i]-'a';
		if(s[i]=='.') ch = 26;
		if(trie[now][ch]==-1) return 0; 
		if( (i+1) < len && s[i+1]=='.' && end_point[val][ch]==0) return 0;
		now=trie[now][ch];
	}
	
	if(end_point[val][ch]==0) return 0;
	
	return 1;
}

void Dell(char s[], int len, int val)
{
     int now = root,ch;
     for(int i =0 ; i<len; i++)
     {
     	 ch = s[i]-'a';
     	if(s[i]=='.') ch = 26;
     	if(s[i+1]=='.' && (i+1) < len) end_point[val][ch]=0;
     }
     
     end_point[val][ch]=0;
     
}

int main()
{
	inti();
	
	int t,n;
	scanf("%d",&t);
	while(t--)
	{
		char s[60],ch;
		cin>>ch>>n;
		scanf("%s",s);
		int len = strlen(s);
		if(ch=='+') Insert(s,len,n);
		else if(ch=='-') Dell(s,len,n);
		else
		{
			int ck = Find(s,len,n);
			if(ck) printf("Yes\n");
			else printf("No\n");
		}
	}
	
	
}