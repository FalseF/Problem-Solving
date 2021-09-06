// Problem: Substring Frequency (II)
// Contest: LightOJ
// URL: https://lightoj.com/problem/substring-frequency-ii
// Memory Limit: 128 MB
// Time Limit: 3000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;
const int max_node = 1000006;
char text[max_node];
int pat_cnt[max_node],pat_end[max_node],fail[max_node];
int root,node,id;
int trie[1000006][60];
void init()
{
	root = 0;
	node = 0;
	id = 0;
	for(int i=0;i<max_node;i++) 
	pat_cnt[i]=0,pat_end[i]=0,fail[i]=0;
	for(int i=0;i<58;i++)
	{
		trie[root][i]=-1;
	}
}
void Insert(char pat[],int len , int index)
{
	int now = root;
	for(int i=0;i<len;i++)
	{
		if(trie[now][pat[i]-'A']==-1)
		{
			trie[now][pat[i]-'A']=++id;
			for(int j=0;j<58;j++)
			{
				trie[id][j]=-1;
			}
		}
		now = trie[now][pat[i]-'A'];
		
	}
	pat_end[index] = now;
}

void fail_fun()
{
	queue<int>q;
	for(int i=0;i<58;i++)
	{
		if(trie[root][i]!=-1) q.push(trie[root][i]);
	}
	
	while(!q.empty())
	{
		int u = q.front();
		q.pop();
		for(int i=0;i<58;i++)
		{
			int v = trie[u][i];
			if(v==-1) continue;
			q.push(v);
			
			int failar = fail[u];
			while(failar && trie[failar][i]==-1)
			{
				failar = fail[failar];
			}
			
			if(trie[failar][i]==-1) fail[v]=0;
			else fail[v]=trie[failar][i]; 
		}
	}
}

void Search()
{
	int now = root;
	int len=strlen(text);
	for(int i=0;i<len;i++)
	{
		while(now && trie[now][text[i]-'A']==-1)
		{
			now = fail[now];
		}
		
		now = trie[now][text[i]-'A'];
		if(now==-1) now = 0;
		int temp = now;
		while(temp)
		{
			pat_cnt[temp]++;
			temp = fail[temp];
		}
	}
}


int main()
{
	int t,cs=0,n;
	scanf("%d",&t);
	while(t--)
	{
		init();
		
		scanf("%s",text);
		scanf("%d",&n);
		char pattern[1007];
		for(int i=0;i<n;i++)
		{
			scanf("%s",pattern);
			int len = strlen(pattern);
			Insert(pattern,len,i);
		}
		fail_fun();
		Search();
		for(int i=0;i<n;i++)
		{
			if(pat_cnt[pat_end[i]]) printf("y\n");
			else printf("n\n");
		}
		
	}
}