/*########  IN THE NAME OF AintAH   ##########*/

#pragma GCC diagnostic ignored "-Wunused-variable"
#pragma GCC diagnostic ignored "-Wunused-parameter" 
#include<bits/stdc++.h>
using namespace std;
#pragma GCC diagnostic ignored "-Wunused-but-set-variable" 
#pragma GCC diagnostic ignored "-Wformat"

#define ll long long
const ll mod = 1000058831, base = 129;
const ll mxl = 1000007;
vector<ll> powr(mxl+10);

void ComputePower()
{
    
   powr[0] = 1ll;
    for(int i = 1; i <= 1000006; i++)
    {
        powr[i] = (1ll * powr[i - 1] * base) % mod;
    }
}


struct Rollinghash
{
	    vector<ll> text_prefix_hash, text_r_prefix_hash;
	    
	    vector<ll> pattern_prefix_hash, pattern_r_prefix_hash;
	    int n,m;
	    //intialize kora 
	    void init(int _n,int _m)
	     {
	     	n = _n;
            m = _m;
	        text_prefix_hash.clear();
	        text_r_prefix_hash.clear();
	        
	        pattern_prefix_hash.clear();
	        pattern_r_prefix_hash.clear();
	        
	        pattern_prefix_hash.resize(m + 3);
	        pattern_r_prefix_hash.resize(m + 3);
	        
	        text_prefix_hash.resize(n + 3);
	        text_r_prefix_hash.resize(n + 3);
	        
	    }
	    
	    //computes single hasval for a string
	    ll compute_hash(string s)
	    {
	        int len=s.length();
	         ll num=0ll;
	        for(int i=0;i<len;i++)
	        {
	            num = ( (ll) num*base + s[i])%mod;
	        }
	        return num;
	    }
	    
	    
	    //prefix hash and reverse prefix hash 
	    void rolling_hash(string s, bool flag)
	    {
	    	if(flag)
	    	{
	    		text_prefix_hash[0] = 0ll ;
	    		text_r_prefix_hash[0] = 0ll ;
	    	   // 1 base index niya kaj korchi
	    	   int l=s.length()-1;
	    		for(int i = 1; i <= s.length(); i++)
	    		{
	    			text_prefix_hash[i]=( (ll) text_prefix_hash[i-1]*base+(s[i-1]))%mod;
	    			text_r_prefix_hash[i]=( (ll) text_r_prefix_hash[i-1]*base+(s[l--]))%mod;
	    			
	    			
	    		}
	    		
	    	}
	    	
	    	else
	    	{
	    		pattern_prefix_hash[0] = 0ll ;
	    		pattern_r_prefix_hash[0] = 0ll ;
	    		 int l=s.length()-1;
	    		
	    		for(int i = 1; i <= s.length(); i++ )
	    		{
	    			pattern_prefix_hash[i]=( (ll) pattern_prefix_hash[i-1]*base + (s[i-1]))%mod;
	    			pattern_r_prefix_hash[i]=( (ll) pattern_r_prefix_hash[i-1]*base + (s[l--]))%mod;
	    			
	    		}
	    	}
	    }
	    
	    ll cal_hashval ( int l, int r, bool flag )
	    {
	    	
	    	ll pre_hash_val ;
	    	
	    	if(flag)
	    	{
	    		pre_hash_val = ( text_prefix_hash[r] - ( (ll) text_prefix_hash[l - 1] * powr[r - l + 1]) % mod + mod) % mod;
	    		
	    		if(pre_hash_val < 0ll ) pre_hash_val+=mod;
	    		
	
	    	}
	    	
	    	else
	    	{
                pre_hash_val = (pattern_prefix_hash[r] - ( (ll) pattern_prefix_hash[l - 1] * powr[r-l + 1]) % mod + mod) % mod;
	    		
	    		if(pre_hash_val < 0ll ) pre_hash_val+=mod;
	    		
	    	}
	    	
	    	return pre_hash_val;
	    }
    
    
	  ll cal_r_hashval ( int l, int r, bool flag )
	    {
	    	ll r_pre_hash_val ;
	    	
	    	if(flag)
	    	{
	    		r_pre_hash_val = (text_r_prefix_hash[r] - ( (ll) text_r_prefix_hash[l - 1] * powr[r -  l + 1]) % mod + mod) % mod;
	    		
	    		if(r_pre_hash_val < 0ll ) r_pre_hash_val+=mod;
	    		
	
	    	}
	    	
	    	else
	    	{
                r_pre_hash_val = (pattern_r_prefix_hash[r] - ( (ll) pattern_r_prefix_hash[l - 1] * powr[r - l + 1]) % mod + mod) % mod;
	    		
	    		if(r_pre_hash_val < 0ll ) r_pre_hash_val+=mod;
	    		
	    	}
	    	
	    	return r_pre_hash_val;
	    }
    
    
	    void solve (string text, string pattern )
	     {
	        int a = compute_hash(pattern);//pattern string er hash value ber kora
	        
	    
	        rolling_hash(text, true); // text string er prefix hash ber kora
	        rolling_hash(pattern, false);//pattern string er prefix hash ber kora
	          
	          
	          int l,r;//1 base index dhore nilam;
	          cin>>l>>r;
	          
	          
	        ll ans1 = cal_hashval(l,r,true);//text string er l theke r porjonto hash valu ber kora
	        ll ans2 = cal_hashval(l,r,false);//pattern string er 2 theke 4 porjonto hash valu ber kora
	           
	        int lo=pattern.size()-r+1;
            int up=pattern.size()-l+1;
	         
	         ll ans4=cal_r_hashval(lo,up,false);//pattern er reverse hash ber kora
	         
	        if(ans2==ans4)
	        {
	        	cout<<"Palindrome"<<endl;
	        }
	        else 
	        {
	        	cout<<"Not Palindrome"<<endl;
	        }
	   }
    
};
		
int main()
{
	
	ComputePower();
	
	int t,cs=0;
	cin>>t;
	for(int i =0; i<t; i++)
	{
		string text, pattern;
		
		cin>>text>>pattern;
		Rollinghash rh;
		
		rh.init(text.size(),pattern.size());
		
		rh.solve(text, pattern);
	}
  
   /************ALEYA YOUSUF ************/
 
 
 /************AintAH IS ALMIGHTY ************/
return 0;
 
}