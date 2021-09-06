/*########  IN THE NAME OF AintAH   ##########*/

#pragma GCC diagnostic ignored "-Wunused-variable"
#pragma GCC diagnostic ignored "-Wunused-parameter" 
#include<bits/stdc++.h>
using namespace std;
#pragma GCC diagnostic ignored "-Wunused-but-set-variable" 
#pragma GCC diagnostic ignored "-Wformat"
#define ull unsigned long long
const ull mod = 1000058831, base = 131;
const int  mxl = 100007;
vector<ull> powr(mxl+10);
ull  pre_hash[mxl+20];
ull  r_pre_hash[mxl+20];

void ComputePower()
{
    
   powr[0] = 1;
    for(int i = 1; i <= 100006; i++)
    {
        powr[i] = (powr[i - 1] * base);
    }
}
void Rollinghash (string s, int len)
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
	
	  string S;
	while(cin>>S)
	{
		int len=S.length();
		string temp = "";
		Rollinghash(S,len);
		
		
		ull h=0,r_h=0;
		
		ull pre_h=pre_hash[len];
		ull r_pre_h=r_pre_hash[len];
		
		if(pre_h==r_pre_h) 
		{
			
		  cout<<S<<endl;
		  continue;
		}
		
		for(int i=0;i<len;i++)
		{
		     temp+=S[i];
		     h=h*base+S[i]-'a'+1;
		     r_h=powr[i]*(S[i]-'a'+1)+r_h;
		     ull ck1 = pre_h*powr[i+1] + r_h;
		     
		     ull ck2 = h*powr[len] + r_pre_h;
		     if(ck1==ck2)
		     {
		     	break;
		     }
		     
		}
		
		int l=temp.length();
		cout<<S;
		for(int i=0, j=l-1 ;i<l;i++,j--) cout<<temp[j];
		printf("\n");
		
	
		
	}
	
	
  
   /************ALEYA YOUSUF ************/
 
 
 /************AintAH IS ALMIGHTY ************/
return 0;
 
}