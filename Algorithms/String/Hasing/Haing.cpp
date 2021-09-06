/*########  IN THE NAME OF AintAH   ##########*/

#pragma GCC diagnostic ignored "-Wunused-variable"
#pragma GCC diagnostic ignored "-Wunused-parameter" 
#include<bits/stdc++.h>
using namespace std;
#pragma GCC diagnostic ignored "-Wunused-but-set-variable" 
#pragma GCC diagnostic ignored "-Wformat"
#define ll unsigned long long
const ll mod = 1000058831, base = 129;
const ll mxl = 100007;
vector<ll> powr(mxl+10);
ll pre_hash[mxl+20];
ll r_pre_hash[mxl+20];
void ComputePower()
{
    
   powr[0] = 1;
    for(int i = 1; i <= 100006; i++)
    {
        powr[i] = (powr[i - 1] * base);
    }
}

void Rollinghash (string s)
{   
     pre_hash[0]=0;
	for(int i=1;i<=s.length();i++)
	{
			
	     pre_hash[i]=(pre_hash[i-1]*base+(s[i-1]));
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
	int l,r;
   string s;
   cin>>s;
   int len=s.length();
   ComputePower();
   Rollinghash(s);  
  //1 based;
  cin>>l>>r;
 ll l1=cal_pre_hashval(l,r);
 
 int lo=len-r+1;
 int up=len-l+1;
 ll l2=cal_r_pre_hashval(lo,up);
 
  if(l1==l2) cout<<"Palindrome"<<endl;
  else cout<<" No "<<endl;
   /************ALEYA YOUSUF ************/
 
 
 /************AintAH IS ALMIGHTY ************/
return 0;
 
}