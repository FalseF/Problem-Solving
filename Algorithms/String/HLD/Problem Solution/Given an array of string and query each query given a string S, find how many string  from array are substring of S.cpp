
#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
const int max_node = 1e6+5;
int trie[max_node][28];
int end_point[max_node];
int cnt[max_node][28];
int root,id;

// Trie
void inti()
{
	root=0;
	id=0;
	for( int i = 0; i<26; i++)
	{
		trie[root][i]=-1;
	}
}
void Insert(string s, int len)
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

int Find(string s, int len)
{
	int now = root;
	for(int i =0 ;i<len; i++)
	{
		if( trie[now][s[i]-'a'] ==-1 || cnt[now][s[i]-'a']==0) return -1;
		now = trie[now][s[i]-'a'];
	}
	
	return end_point[now];
}

string S[1000006];

// Hasing 
const ull  mxl = 1000007,base = 131 ;
vector<ull> powr(mxl+10);
ull  pre_hash[mxl+20];
void computepower()
{
    
   powr[0] = 1;
    for(int i = 1; i <= 1000006; i++)
    {
        powr[i] = ( powr[i - 1] * base);
    }
}

void Rollinghash (string s, int len)
{   
     pre_hash[0]=0;
	for(int i=1;i<=len;i++)
	{
			
	     pre_hash[i] =(pre_hash[i-1] * base + (s[i-1]-'a'+1) );
	    
	}
}

ull cal_pre_hashval(int l , int r )
{
	if(l>r) return 0;
	 else return ( pre_hash[r] - ( pre_hash[l - 1] * powr[r - l + 1]));
}

struct custom_hash {
	
    static uint64_t splitmix64(uint64_t x) {
        // http://xorshift.di.unimi.it/splitmix64.c
        x += 0x9e3779b97f4a7c15;
        x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
        x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
        return x ^ (x >> 31);
    }
    size_t operator()(uint64_t x) const {
        static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
        return splitmix64(x + FIXED_RANDOM);
    }
};

int main()
{
	inti();
	
	computepower();
	
	int n;
	scanf("%d",&n);
	
	 unordered_map<ull,int,custom_hash> cnt;
	int l = 0;
	for(int i = 0; i < n; i++)
	{
		cin>>S[i];
		l+=(S[i].length());
	}
	
	int rang = sqrt(l);	
	
	cout<<l<<" "<<rang<<endl;
	
	for(int i=0; i < n;i++)
	{
		ull h1 = 0;
		
		int len = S[i].length();
		
		if(len < rang)
		{
			// light string 
			Insert(S[i],len);
		}
		
		else 
		{
			//heavy string
			Rollinghash(S[i],len);
			ull h = pre_hash[len];
			cnt[h]++;
			
		}
	}
	
	string q;
	
	int ans = 0 ;
	
	cin>>q;
	
	int len = q.length();
	// light string cnt
	for(int i =0 ; i<len; i++)
	{
		string temp = "";
		for( int j =1;j < rang;j++)
		{
			//if( (j+i-1) >=len) break;
			temp+= q [j + i -1];
			
			if( Find ( temp , j ) > 0 ) {
				//cout<<temp<<endl;
				 ans++;
				}
		}
	}

	// heavy string er cnt;
	
	cout<<"Light string e ache "<<ans<<endl;
	
	Rollinghash(q,len);
	
	int lo,up;
	int ans1 = 0; 
	for(int i = 1; i <= len; i++)
	{
		for(int j = rang; (j+i-1)<= len; j++)
		{
			lo = i ;
			up = j + i -1;
			ull h = cal_pre_hashval(lo,up);
			
			if(cnt.find(h) !=cnt.end() ) ans1++;
		}
	}
	
	cout<<"Heavy string e ache "<<ans1<<endl;
	
	cout<<"total ache "<< ans + ans1<<endl;
	
	
}