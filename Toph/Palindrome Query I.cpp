/*########  IN THE NAME OF AintAH   ##########*/

#pragma GCC diagnostic ignored "-Wunused-variable"
#pragma GCC diagnostic ignored "-Wunused-parameter" 
#include<bits/stdc++.h>
using namespace std;
#pragma GCC diagnostic ignored "-Wunused-but-set-variable" 
#pragma GCC diagnostic ignored "-Wformat"
#define ull unsigned long long
const ull mod = 1000058831, base = 129;
const ull mxl = 1000007;
vector<ull> powr(mxl+10);
ull pre_hash[mxl+20];
ull r_pre_hash[mxl+20];
void ComputePower()
{
    
   powr[0] = 1;
    for(int i = 1; i <= 1000006; i++)
    {
        powr[i] = (powr[i - 1] * base);
    }
}

void Roullinghash (string s)
{   
     pre_hash[0]=0;
     r_pre_hash[0]=0;
	for(int i=1;i<=s.length();i++)
	{
			
	     pre_hash[i]=(pre_hash[i-1]*base+(s[i-1]));
	     r_pre_hash[i]=(r_pre_hash[i-1]*base+(s[i-1]));
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
  
   int T,N,E,u,Q,v,n,i,j,k,sum=0,ck=0,x,y,cs=0;
     
     string S;
     cin>>S;
     int len=S.length();
     ull h=cal_pre_hash(1,len);
     ull r_h=cal_r_pre_hash(1,len);
     cin>>E;
     while(E--)
     {
     	char ch;
     	cin>>ch;
     	int l,r;
     	if(ch=='C')
     	{
     		cin>>l>>r;
     		
     		if(hash1==hash2)
     		{
     			cout<<"Yes!"<<endl;
     		}
     		else
     		{
     			cout<<"No!"<<endl;
     		}
     		
     	}
     	
     	else if(ch=='D')
     	{
     		int d;
     		cin>>d;
     		ull l1=cal_pre_hash(1,d-1);
     		ull r1=call_pre_hash(d+1,len);
     		len--;
     		
     		
     	}
     }
     
     

   
   /************ALEYA YOUSUF ************/
 
 
 /************AintAH IS ALMIGHTY ************/
return 0;
 
}