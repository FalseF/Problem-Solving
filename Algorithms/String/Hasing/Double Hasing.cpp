/*########  IN THE NAME OF AintAH   ##########*/

#pragma GCC diagnostic ignored "-Wunused-variable"
#pragma GCC diagnostic ignored "-Wunused-parameter" 
#include<bits/stdc++.h>
using namespace std;
#pragma GCC diagnostic ignored "-Wunused-but-set-variable" 
#pragma GCC diagnostic ignored "-Wformat"
typedef long long ll;
const int mod1 = 1000058831, base1 = 131;
const int  mod2 = 1e9+7, base2 = 89;
const int mxn = 1e6 + 3 ;
int powr1[mxn+5], powr2[mxn+5];
int h1[mxn+5],h2[mxn+5];
int r_h1[mxn+5],r_h2[mxn+5];
char str[mxn+5], r_str[mxn+5];
void computepower()
{
	powr1[0]=1;
	powr2[0]=1;
	for(int i = 1;i<mxn;i++)
	{
		powr1[i] = ( 1LL * powr1[i-1] * base1) % mod1;
		
		powr2[i] = ( 1LL * powr2[i-1] * base2 ) % mod2;
	}
	
}

void Rollinghash ()
{   
     h1[0]=0;
     h2[0]=0;
     r_h1[0]=0;
     r_h2[0]=0;
     int len1=strlen(str)-1;
     int len2=len1;
	for(int i=1;i<=strlen(str);i++)
	{
			
	     h1[i]=( 1LL * h1[i-1] * base1 + str[i-1]) % mod1;
	     h2[i]=( 1LL * h2[i-1] * base2 + str[i-1]) % mod2;
	     
	     r_h1[i] = ( 1LL * r_h1[i-1] * base1 + str[len1--]) % mod1;
	     r_h2[i] = ( 1LL* r_h2[i-1] * base2 + str[len2--]) % mod2;
	}
}

int cal_hash1(int l , int r )
{
	if(l>r) return 0;
	 else return (h1[r] - ( 1LL * h1[l - 1] * powr1[r - l + 1]) % mod1 + mod1 ) % mod1;
}

int cal_hash2(int l , int r )
{
	if(l>r) return 0;
	 else return (h2[r] - ( 1LL * h2[l - 1] * powr2[r - l + 1]) %mod2+ mod2 ) % mod2;
}

int cal_r_hash1(int l , int r )
{
	if(l>r) return 0;
	 else return (r_h1[r] - ( 1LL * r_h1[l - 1] * powr1[r - l + 1]) % mod1 + mod1 ) % mod1;
}

int cal_r_hash2(int l , int r )
{
	if(l>r) return 0;
	 else return (r_h2[r] - ( 1LL * r_h2[l - 1] * powr2[r - l + 1]) % mod2 + mod2 ) % mod2;
}

int main()
{
	int T,cs=0;
	scanf("%s",str);
	computepower();
	
	Rollinghash();
	
	int l,r;
	
	int len = strlen(str);
	
	
	scanf("%d%d",&l,&r);
	
	int v1=cal_hash1(l,r);
	int v2=cal_hash2(l,r);
	  
	int lo=len - r +1;
	int up = len - l + 1;
	int r_v1=cal_r_hash1(lo,up);
	int r_v2=cal_r_hash2(lo,up);
	
	cout<<v1<<" "<<r_v1<<" "<<v2<<" "<<r_v2<<endl;
	if(v1==r_v1 && v2==r_v2)
	{
		cout<<"Palindrome\n";
	}
	else
	{
		cout<<"No Palindrome \n";
	}
	
	if(h1[len]==r_h1[len] && h2[len]==r_h2[len])
	{
		cout<<"Same\n";
	}
	else
	{
		cout<<"Not Same\n";
	}
}