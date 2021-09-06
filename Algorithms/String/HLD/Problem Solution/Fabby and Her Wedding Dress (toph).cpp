/*########  IN THE NAME OF AintAH   ##########*/

#pragma GCC diagnostic ignored "-Wunused-variable"
#pragma GCC diagnostic ignored "-Wunused-parameter" 
#include<bits/stdc++.h>
using namespace std;
#pragma GCC diagnostic ignored "-Wunused-but-set-variable" 
#pragma GCC diagnostic ignored "-Wformat"
#define ll long long
const int mod = 2e9+63, base = 1e9+181,sq=80;
void FastIO(){
  ios_base :: sync_with_stdio (false);
    cin.tie(0);
  cout.precision(20);
}
unordered_map<int,int> cnt;
vector<int>t_id;
string text[200000+3];
void Hash(string s,int len,int temp)
{
	 ll h1 = 0;
	 for(int i=0;i<len;i++)
	 {
	 	h1 = ( h1 * base + s[i]-'a' + 1 ) % mod;
	 	
	   if(temp)
	   {
	   	  cnt[h1]++;
	   }
	   else 
	   {
	   	 cnt[h1]--;
	   	 if(cnt[h1]<=0) cnt.erase(h1);
	   }
	 }
	
}
void query()
{
	int n,typ;
	int ans=0;
	cin>>n;
	for(int i =1;i<=n;i++)
	{
		ans = 0;
		cin>>typ;
		if(typ==1)
		{
			int id,j;
			char ch;
			cin>>id>>j>>ch;
			 int len = text[id].length();
			 if(len<sq)
			 {
			    Hash(text[id],len,0);
			 	text[id][j-1]=ch;
			    Hash(text[id],len,1);
			
			 }
			 
			 else
			 {
			 	text[id][j-1] = ch;
			 }
		}
		
		else 
		{
			ans = 0;
			string s;
			cin>>s;
			int len = s.length();
			if(len<sq)
			{
				ll  h1 =0;
			    for(int j =0; j<len;j++)
			    {
			    	h1 = (h1 * base + s[j]-'a' + 1) % mod;
			    	
			    }
			    ans+=cnt[h1]; 	
			}
			
				for(auto in:t_id)
				{
					string temp = text[in];
					int t_l=temp.length();
					if(t_l<len) continue;
					int ck=1;
					for(int j =0;j<len;j++)
					{
						if(temp[j]!=s[j]) {ck=0;break;}
					}
					
					ans+=ck;
				}
			
			cout<<ans<<endl;
		}
		
	}
}
int main()
{
	FastIO();
   int T,id=0;
   cin>>T;
   while(T--)
   {
   	   id++;
   	  cin>>text[id];
   	  int len = text[id].length();
   	  if(len<sq)
   	  {
   	  	  Hash(text[id],len,1);
   	  	
   	  }
   	  
   	  else t_id.push_back(id);
   	 
   }
   
   query();
     
   
   /************ALEYA YOUSUF ************/
 
 
 /************AintAH IS ALMIGHTY ************/
return 0;
 
}