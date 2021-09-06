/*########  IN THE NAME OF AintAH   ##########*/

#pragma GCC diagnostic ignored "-Wunused-variable"
#pragma GCC diagnostic ignored "-Wunused-parameter" 
#include<bits/stdc++.h>
using namespace std;
#pragma GCC diagnostic ignored "-Wunused-but-set-variable" 
#pragma GCC diagnostic ignored "-Wformat"
#define ll long long
string S;
ll prefix_hash[100005];
const ll mod = 1e9+7;
map<char,int>Mp;
void prefix()
{
	for(int i=0;i<26;i++)
	{
		Mp[i+'a']=i+1;
	}
	int base=29;
	prefix_hash[0]=Mp[S[0]];
	int l=S.length();
	for(int i=1;i<l;i++)
	{
		prefix_hash[i]=( (prefix_hash[i-1]*base)%mod + Mp[S[i]] )%mod;
		
	}
	
}


ll bigmod(ll b,ll p,ll m){
    if(p==0) return 1;
    else if(p%2==0){
        ll r=bigmod(b,p/2,m);
        return ((r%m)*(r%m))%m;
    }
    else{
        ll r=bigmod(b,p-1,m);
        return ((r%m)*(b%m))%m;
    }
}

ll cur_hash(string s)
{
	int base=29;
	ll hash=0ll;
	for(int i=0;i<s.length();i++)
	{
		hash=( (hash*10)%mod+Mp[s[i]] )%mod;
	}
	
	return hash;
}

int main()
{
   int T,N,E,u,Q,v,n,i,j,k,sum=0,ck=0,x,y,cs=0;
   string s;
   int base=29;
   cin>>S>>s;
   prefix();
   ll hash=cur_hash(s);
   int l=s.length();
   l--;
   for(i=l;i<S.length();i++)
   {
   	  int left=i-l;
   	  if(i==l)
   	  {
   	  	if(hash==prefix_hash[i])
   	  	{
   	  		cout<<"ok"<<endl;
   	  		ck=1;
   	  		break;
   	  	}
   	  	
   	  	continue;
   	  }
   	  
   	  ll n1=prefix_hash[i]-( (prefix_hash[left-1]*bigmod(base,l+1,mod) + mod )%mod )%mod;
   	  if(n1<0ll) n1+=mod;
   	  n1%=mod;
   	
   	  if(n1==hash)
   	  {
   	  	cout<<"ok"<<endl;
   	  	ck=1;
   	  	break;
   	  }
   }
   
   if(ck==0) cout<<" NO "<<endl;
   
   
   
   /************ALEYA YOUSUF ************/
 
 
 /************AintAH IS ALMIGHTY ************/
return 0;
 
}