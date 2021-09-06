/*########  IN THE NAME OF AintAH   ##########*/

#pragma GCC diagnostic ignored "-Wunused-variable"
#pragma GCC diagnostic ignored "-Wunused-parameter" 
#include<bits/stdc++.h>
using namespace std;
#pragma GCC diagnostic ignored "-Wunused-but-set-variable" 
#pragma GCC diagnostic ignored "-Wformat"

const int mod = 1000058831, base = 131;
const int  mxl = 1000007;
vector<int> powr(mxl+10);
int  pre_hash1[mxl+20];
int  pre_hash2[mxl+20];
void ComputePower()
{
    
   powr[0] = 1;
    for(int i = 1; i <= 1000006; i++)
    {
        powr[i] = ( 1LL * powr[i - 1] * base ) % mod;
    }
}
void Rollinghash1 (char s[], int len)
{   
     pre_hash1[0]=0;
	for(int i=1;i<=len;i++)
	{
			
	     pre_hash1[i] =( 1LL * pre_hash1[i-1] * base + (s[i-1]-'a'+1) ) % mod;
	    
	}
}

int cal_pre_hashval1(int l , int r )
{
	if(l>r) return 0;
	 else return ( pre_hash1[r] - ( 1LL * pre_hash1[l - 1] * powr[r - l + 1]) %mod + mod ) % mod;
}


void Rollinghash2 (char s[], int len)
{   
     pre_hash2[0]=0;
	for(int i=1;i<=len;i++)
	{
			
	     pre_hash2[i] =( 1LL * pre_hash2[i-1] * base+ (s[i-1]-'a'+1) ) % mod;
	}
}

int main()
{
	ComputePower();
	
	int T,cs=0;
	scanf("%d",&T);
	while(T--)
	{
		cs++;
		char S[mxl],f[mxl];
		scanf("%s%s",S,f);
		
		int len1=strlen(S);
		int len2=strlen(f);
		
		Rollinghash1(S,len1);
		Rollinghash2(f,len2);
		
		int h1 = pre_hash2[len2];
		int res = 0;
		
		for(int i=1;(i+len2-1)<=len1;i++)
		{
			int ck = cal_pre_hashval1(i,i+len2-1);
			if(ck==h1) res++;
		}
		printf("Case %d: %d\n",cs,res);
		
		
	}
	
	
  
   /************ALEYA YOUSUF ************/
 
 
 /************AintAH IS ALMIGHTY ************/
return 0;
 
}