/*########  IN THE NAME OF AintAH   ##########*/

#pragma GCC diagnostic ignored "-Wunused-variable"
#pragma GCC diagnostic ignored "-Wunused-parameter" 
#include<bits/stdc++.h>
using namespace std;
#pragma GCC diagnostic ignored "-Wunused-but-set-variable" 
#pragma GCC diagnostic ignored "-Wformat"
#define ll unsigned long long
const ll mod = 1000058831, base = 129;
const ll  mxl = 1000007;
vector<ll> powr(mxl+10);
ll  pre_hash[mxl+20];
ll  r_pre_hash[mxl+20];

void ComputePower()
{
    
   powr[0] = 1;
    for(int i = 1; i <= 1000006; i++)
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

int main()
{
	ComputePower();
  
   int T,N,E,u,Q,v,n,i,j,k,sum=0,ck=0,x,y,cs=0;
   cin>>T;
   while(T--)
   {
   	     cs++;
	     string S;
	      cin>>S;
	      cout<<"Case "<<cs<<":"<<endl;
	      Rollinghash(S);
	      ll h=pre_hash[S.length()];
	      
	      ll r_h=r_pre_hash[S.length()];
	      
	      //cout<<h<<" "<<r_h<<endl;
	      int len=S.length();
	      cin>>E;
	     for(i=0;i<E;i++)
	     {
	     	
	     	  ll hash1=0;
	     	   char ch1,ch2;
	     	   int n;
	     	     cin>>ch1>>ch2>>n;
	     	     
	     	     if(ch1=='L')
	     	     {
	     	     	for(j=0;j<n;j++) hash1=(hash1 * base+ch2);
	     	     	
	     	     	h=(hash1*powr[len] + h);
	     	     	r_h=(r_h*powr[n] + hash1);
	     	     }
	     	     
	     	     else
	     	     {
	     	        for(j=0;j<n;j++) hash1=(hash1 * base+ch2);
	     	        h=(h*powr[n] + hash1);
	     	     	r_h=(hash1*powr[len] + r_h);
	     	     		
	     	     }
	     	     
	     	     len+=n;
	     	      
	     	      if(h==r_h)
	     	      {
	     	      	cout<<"Yes"<<endl;
	     	      }
	     	      else
	     	      {
	     	      	cout<<"No"<<endl;
	     	      }
	     			
	     }
	     		
	}

   
   /************ALEYA YOUSUF ************/
 
 
 /************AintAH IS ALMIGHTY ************/
return 0;
 
}