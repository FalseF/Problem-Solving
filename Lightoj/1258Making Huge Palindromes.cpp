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
int  pre_hash[mxl+20];
int  r_pre_hash[mxl+20];

void ComputePower()
{
    
   powr[0] = 1;
    for(int i = 1; i <= 1000006; i++)
    {
        powr[i] = ( 1LL * powr[i - 1] * base ) % mod;
    }
}
void Rollinghash (string s)
{   
     pre_hash[0]=0;
     r_pre_hash[0]=0;
     int len=s.length()-1;
	for(int i=1;i<=s.length();i++)
	{
			
	     pre_hash[i] =( 1LL * pre_hash[i-1]*base+ ((s[i-1]-'a'+1))) % mod;
	     r_pre_hash[i]=( 1LL * r_pre_hash[i-1] * base + (s[len--]-'a'+1) ) % mod;
	}
}

int cal_pre_hashval(int l , int r )
{
	if(l>r) return 0;
	 else return (pre_hash[r] - ( 1LL * pre_hash[l - 1] * powr[r - l + 1]) %mod + mod ) % mod;
}

int cal_r_pre_hashval(int l , int r )
{
	if(l>r) return 0;
	 else return (r_pre_hash[r] - ( 1LL * r_pre_hash[l - 1] * powr[r - l + 1]) % mod + mod ) % mod;
}


int main()
{
	ComputePower();
	
	int T,cs=0;
	scanf("%d",&T);
	while(T--)
	{
		cs++;
		char S[mxl],temp[mxl];
		for(int i=0;i<mxl;i++)
		{
			temp[i]=S[i]='\0';
		}
		
		scanf("%s",S);
		Rollinghash(S);
		int len=strlen(S);
		int h=0,r_h=0;
		
		int pre_h=pre_hash[len];
		int r_pre_h=r_pre_hash[len];
		
		if(pre_h==r_pre_h) 
		{
			
		  printf("Case %d: %d\n",cs,len);
		  continue;
		}
		
		for(int i=0;i<len;i++)
		{
		     temp[i]=S[i];
		     h=( ( 1LL* h*base ) % mod + S[i]-'a'+1)%mod;
		     r_h=( ( 1LL * powr[i]* (S[i]-'a'+1) ) %mod +r_h ) % mod;
		     int ck1 =( ( 1LL * pre_h*powr[i+1]) % mod + r_h ) %mod;
		     
		     int ck2 = ( ( 1LL * h * powr[len] ) % mod + r_pre_h) % mod;
		     if(ck1==ck2)
		     {
		     	break;
		     }
		     
		}
		
		int l=strlen(temp);
		printf("Case %d: %d\n",cs,l+len);
		
		
		
		
	}
	
	
  
   /************ALEYA YOUSUF ************/
 
 
 /************AintAH IS ALMIGHTY ************/
return 0;
 
}