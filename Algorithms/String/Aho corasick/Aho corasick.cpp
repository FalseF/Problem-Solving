#include<bits/stdc++.h>
using namespace std;
const int max_node = 1e6+5;
int trie[max_node][28];
int end_point[max_node];
int substrcnt[max_node][28];
int root,id;
int fail[max_node];
int pat_end[max_node];
void inti()
{
	root=0;
	id=0;
	//negative value diya define korchi karon amr root 0 diya start korchi
	for( int i = 0; i<26; i++)
	{
		trie[root][i]=-1;
	}
}
void Insert(string s, int len, int index)
{
	int now=root;
	for(int i = 0;i<len; i++)
	{
		//current node theke s[i] th node kono path na thekle new
		// path add korchi
		if( trie[now][s[i]-'a'] == -1) // 2d array first hoche node ar second hoche str ith char er int type
		{
			trie[now][s[i]-'a'] = ++id;
			
			
			for( int j =0 ; j<26; j++)
			{
				// new je node ta add korchi tar theke ekhono kono 
				// child ber hoy nai bujate -1 diya define korchi
				trie[id][j] = -1;
			}
		}
		
		substrcnt[now][s[i]-'a']++;//substring count kore rakchi 
		now=trie[now][s[i]-'a'];//now hoche ekhon current node
		// next new path start hole ekhan theke hobe 
		
	}
	
	end_point[now]++;// ekhane ekta pattern sesh hoiche 
	pat_end[index]=now;// ans ber korar jonno end point gulo save kore rakchi
	
}

void fail_fun()
{
	queue<int>q;
	//root er adj node er fail always root
	// tai age se gulo queqe te push kore rakchi 
	for(int i=0;i<26;i++)
	{
		if(trie[0][i]!=-1)
		{
			q.push(trie[0][i]);
		}
	}
	
	while(!q.empty())
	{
		int u = q.front();
		q.pop();
		for(int i=0;i<26;i++)
		{
			int v = trie[u][i];
			if(v==-1) continue;
			q.push(v);
			//sob node er fail node ber korbo jotokhon porjonto 
			// onno pattern e match na pai,
			// ar eta korar jonno je noder fail ber korbo tar parent
			//node jabo then tar fail e jabo e rokom jete jete jodi match hoy 
			// tahole sei node hobe current noder fail node or root hobe faile node 
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
int pat_cnt[max_node];
void search(string t)
{
	int len = t.length();
	int now = 0;
	for(int i=0;i<len;i++)
	{
		// jodi root na hoy ar current je node e achi sekhan theke 
		// t[i] th char tar mismatch hole tar fail e jabo sekhan theke o match na 
		// hole abar tar fail e jabo e vabe continue korbo
		//kothao na match hole root e jaiya off hobe
		while(now && trie[now][t[i]-'a']==-1)
		{
	         now = fail[now];		
		}
		now = trie[now][t[i]-'a'];
		if(now==-1) now=0;
		int temp = now;
		//protitar fail e jabo abong substring 1 kore barabo
		while(temp)
		{
			pat_cnt[temp]++;
			temp=fail[temp];
		}
	}
}
int main()
{
	int n,m;
	scanf("%d%d",&n,&m);
	string text,pat[1000];
	inti();
	cin>>text;
	for(int i=0;i<m;i++)
	{
		cin>>pat[i];
		int len = pat[i].length();
		Insert(pat[i],len,i);
	}
	
	
	fail_fun();
	search(text);
	
	for(int i=0;i<m;i++)
	{
		cout<<pat[i]<<" string ache "<<pat_cnt[pat_end[i]]<<" bar "<<endl;
	}
	
	
}