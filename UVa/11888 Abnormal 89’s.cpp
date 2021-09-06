/*########  IN THE NAME OF AintAH   ##########*/

#pragma GCC diagnostic ignored "-Wunused-variable"
#pragma GCC diagnostic ignored "-Wunused-parameter" 
#include<bits/stdc++.h>
using namespace std;
#pragma GCC diagnostic ignored "-Wunused-but-set-variable" 
#pragma GCC diagnostic ignored "-Wformat"
#define ull unsigned long long
const ull mod = 1000058831, base = 131;
const int  mxl = 200007;
vector<ull> powr(mxl+10);
ull  pre_hash[mxl+20];
ull  r_pre_hash[mxl+20];

void ComputePower()
{
    
   powr[0] = 1;
    for(int i = 1; i <= 200006; i++)
    {
        powr[i] = (powr[i - 1] * base);
    }
}
void Rollinghash (char s[], int len)
{   
     pre_hash[0]=0;
     r_pre_hash[0]=0;
     int l = len;
     len--;
	for(int i=1;i<=l;i++)
	{
			
	     pre_hash[i] =(pre_hash[i-1]*base+((s[i-1]-'a'+1)));
	     r_pre_hash[i]=(r_pre_hash[i-1]*base+(s[len--]-'a'+1));
	}
}

ull cal_pre_hashval(int l , int r )
{
	if(l>r) return 0;
	 else return (pre_hash[r] - (pre_hash[l - 1] * powr[r - l + 1]));
}

ull cal_r_pre_hashval(int l , int r )
{
	if(l>r) return 0;
	 else return (r_pre_hash[r] - (r_pre_hash[l - 1] * powr[r - l + 1]));
}


int main()
{
	ComputePower();
	
	int T;
	scanf("%d",&T);
	while(T--)
	{
		char S[200005];
		scanf("%s",S);
		int len = strlen(S);
		Rollinghash(S,len);
		int ck=0;
		for(int i = 1 ; i<=len ; i++)
		{
			ull h1 = cal_pre_hashval(1,i);
			
			int lo1 = len - i + 1;
			int up1 = len; 
			ull r_h1 = cal_r_pre_hashval(lo1,up1);
			
			
			ull h2 = cal_pre_hashval(i+1,len);

			int lo2 = 1;
			int up2 = len - i ; 
			
			ull r_h2 = cal_r_pre_hashval(lo2,up2);
			
			if(h1 == r_h1 && h2 == r_h2 && i!=len)
			{
				printf("alindrome\n");
				ck=1;
				break;
			}
		}
		
		if(pre_hash[len]==r_pre_hash[len] && ck==0)
		{
			printf("palindrome\n");
		}
		else if(ck==0)
		{
			printf("simple\n");
		}
		
	}
	
  
   /************ALEYA YOUSUF ************/
 
 
 /************AintAH IS ALMIGHTY ************/
return 0;
 
}