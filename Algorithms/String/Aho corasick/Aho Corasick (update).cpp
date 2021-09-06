#include<bits/stdc++.h>
using namespace std;
const int max_node = 1e6+6;
int trie[max_node][28],endpoint[max_node],fail[max_node];
int trans[max_node],pat_end[max_node],sub_cnt[max_node];
vector<int>index[max_node];
int root,id;
void init()
{
	 root=0;
	 id=0;
	 //first e root theke kono char edge nai bujate -1 diya define korchi 
	 //eta memset diya o kora jeto but tate time besi lagbe 
	for(int i=0;i<26;i++)
	{
		trie[root][i]=-1;
	}
}

void Insert(string pat,int len, int p_id)
{
	int now  = root;
	
	for(int i=0;i<len;i++)
	{
		int v = trie[now][pat[i]-'a'];
		if(v==-1)
		{
			trie[now][pat[i]-'a']=++id;// now node theke id ar valu te ekta edge dilam
			for(int j=0;j<26;j++)
			{
				trie[id][j]=-1;// new je node ta add korchi tar theke 
				//ekhono kono new path ber na hoya bujate -1 define kore dichi
			}
		}
		
		now = trie[now][pat[i]-'a'];// mani chil node ke ekhon paren banaia dilam
	}
	endpoint[now]++;
	
	pat_end[p_id] = now;// p_id th  patt kon node e shes hoiche tar node 
	// num save kore rakchi 
	
}

void build_fail()
{
	// root er fail root nije. 	
	root = 0;
	queue<int>q;
	for(int i=0;i<26;i++)
	{
		int v = trie[root][i];
	   	if(v!=-1)
	   	{
	   		q.push(v);//root er joto adj ache sob gulo fail hobe root
	// root er adj gulo aghe  queue te push kore se gulo niya process korbo

	   		
	   		if(pat_end[v])trans[v] = v;// ekta pat kon node sesh hoiche seta save kore 
	   		// rakchi karon pore fail fun dore jokhon agabo tokhon protita substrign e 
	   		// na jaiya amra sudo je khane ekta pat end hoiche sekhane jabo
	   	}
	   	else
	   	{
	   		// root theke je sob char er kono path nai mani je sob char kono pattern
	   		// er e prefix na se sob char gulor fail node hisebe root ke dhore neoya jay
	   		
	   		trie[root][i]=root;
	   		
	   	}
	}
	
	
	while(!q.empty())
	{
		int u = q.front();
		
		q.pop();
		for(int i=0;i<26;i++)
		{
			int v = trie[u][i];
			if(v!=-1)
			{
				// jodi u the v te ekta path thake tahole v er failar hobe
				// u er failar theke ith edge er noder value ar jodi path na ;
				
				
				fail[v] = trie[fail[u]][i];
				q.push(v);
				
				
				// jodi v te ekta pat end hoy tahole seta save kore rakhbo
				// na hole tar fail e kono pat sesh hoiche ki na seta save korbo
				if(endpoint[v]) trans[v] = v;
				else trans[v]=trans[fail[v]];
			}
			else {
				// jodi u the ith node kono path na thake tahole
				//  u er parent er fail e jabo je khane theke must be ith
				// char e path ache karon seta root proti ta noder jonno kore aschi
				// abong tar node num cur u and  ith position a bosabo
				// parent er fail e 
				trie[u][i] = trie[fail[u]][i];
			}
			
		}
	} 
	
}

void Search(string text)
{
	int now = root;
	int len = text.length();
	for(int i=0;i<len;i++)
	{
		 now = trie[now][text[i]-'a'];
		 if(now==-1) now = root;
		 int temp=trans[now];
		 // now node dhore jotu gulo pat er end point e jaoya 
		 // se koy bar jabo abong  chaile sub string cnt kore rakah jay 
		 while(temp)
		 {
		 	sub_cnt[temp]++;
		 	temp=trans[fail[temp]];// root eer ag porjonto neoyar try korbo 
		 	// 
		 	
		 }
		 
		
	}
}
int main()
{
	init();
	int n,m;
	string text,pat[10000];
	cin>>text>>m;
	for(int i=0;i<m;i++)
	{
		cin>>pat[i];
		Insert(pat[i],pat[i].length(),i);
	}
	build_fail();
	Search(text);
	
	for(int i=0;i<m;i++)
	{
		cout<<pat[i]<< " ache "<<sub_cnt[pat_end[i]]<<endl;
	}
	
}