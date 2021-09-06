/*########  IN THE NAME OF AintAH   ##########*/

#pragma GCC diagnostic ignored "-Wunused-variable"
#pragma GCC diagnostic ignored "-Wunused-parameter" 
#include<bits/stdc++.h>
using namespace std;
#pragma GCC diagnostic ignored "-Wunused-but-set-variable" 
#pragma GCC diagnostic ignored "-Wformat"
#define ll unsigned long long
const ll mod = 1000058831, base = 131;
const ll  mxl = 10007;
vector<ll> powr(mxl+10);
ll  pre_hash[mxl+20];
ll  r_pre_hash[mxl+20];

void ComputePower()
{
    
   powr[0] = 1;
    for(int i = 1; i <= 10006; i++)
    {
        powr[i] = (powr[i - 1] * base);
    }
}
void Rollinghash (string s)
{   
     pre_hash[0]=0;
     r_pre_hash[0]=0;
     int len=s.length()-1;
	for(int i=1;i<=s.length();i++)
	{
			
	     pre_hash[i] =(pre_hash[i-1]*base+(s[i-1]));
	     r_pre_hash[i]=(r_pre_hash[i-1]*base+(s[len--]));
	}
}

ll cal_pre_hashval(int l , int r )
{
	if(l>r) return 0;
	 else return (pre_hash[r] - (pre_hash[l - 1] * powr[r - l + 1]));
}

ll cal_r_pre_hashval(int l , int r )
{
	if(l>r) return 0;
	 else return (r_pre_hash[r] - (r_pre_hash[l - 1] * powr[r - l + 1]));
}


int main()
{
	ComputePower();
	
	int T;
	cin>>T;
	while(T--)
	{
		string S;
		cin>>S;
		Rollinghash(S);
		int len=S.length();
		int pal=len;
		int total=(len*(len+1))/2;
		// all substring 
		for(int i=1;i<=len;i++)
		{
			for(int j=1;(j+i)<=len;j++)
			{
				ll h1=cal_pre_hashval(j,j+i);
				
				int lo=len-(j+i)+1;
                int up=len-j+1;
				ll h2=cal_r_pre_hashval(lo,up);
				//cout<<h1<<" "<<h2<<endl;
				if(h1==h2) pal++;//palindrome check
			}
		}
		
		double ans=((double) pal / (double) total);
		printf("%.3f\n",ans);
		
		
	}
	
	
  
   /************ALEYA YOUSUF ************/
 
 
 /************AintAH IS ALMIGHTY ************/
return 0;
 
}