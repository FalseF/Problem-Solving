#include<bits/stdc++.h>
using namespace std;
const int max_node = 1e6+5;
int trie[max_node][28];
int end_point[max_node];
int cnt[max_node][28];
int root,id;

void inti()
{
	root=0;
	id=0;
	for( int i = 0; i<26; i++)
	{
		trie[root][i]=-1;
	}
}
void Insert(char s[], int len)
{
	int now=root;
	for(int i = 0;i<len; i++)
	{
		if( trie[now][s[i]-'a'] == -1)
		{
			trie[now][s[i]-'a'] = ++id;
			
			for( int j =0 ; j<26; j++)
			{
				trie[id][j] = -1;
			}
		}
		
		cnt[now][s[i]-'a']++;
		now=trie[now][s[i]-'a'];
		
	}
	
	end_point[now]++;
}

int Find(char s[], int len)
{
	int now = root;
	for(int i =0 ;i<len; i++)
	{
		if( trie[now][s[i]-'a'] ==-1 || cnt[now][s[i]-'a']==0) return -1;
		now = trie[now][s[i]-'a'];
	}
	
	return end_point[now];
}

void Dell(char s[], int len)
{
     int now = root;
     for(int i =0 ; i<len; i++)
     {
     	cnt[now][s[i]-'a']--;
     	now = trie[now][s[i]-'a'];
     }
     
     end_point[now]--;
     
}

int main()
{
	inti();
	
	int t,n;
	scanf("%d",&t);
	while(t--)
	{
		char s[1000];
		scanf("%s",s);
		int len = strlen(s);
		Insert(s,len);
	}
	
	scanf("%d",&n);
	while(n--)
	{
		char f[1000];
		scanf("%s",f);
		int len = strlen(f);
		int ck = Find(f,len);
		
		if(ck==-1)
		{
			cout<<f<<" ->trie te prefix hisabe o  nai \n";
		}
		else if(ck>0)
		{
			cout<<f<<" -> trie te total string tao ache  abar prefix hisabeo ache \n";
		}
		else
		{
			cout<<" only prefix hisabe ache but total find string  trie nai\n ";
		}
		
	}
	
	
}