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

map<ll,ll>Mp;

int main()
{
	ComputePower();
  
   int T,N,E,u,Q,v,n,i,j,k,sum=0,ck=0,x,y,cs=0;
     
    cin>>N>>E;
     
     string S[N+2];
     
     ll ans=0;
     for(i=0;i<N;i++)
     {
     	cin>>S[i];
     	
     	Rollinghash(S[i]);
     	Mp[cal_pre_hashval(1,E)]++;
     }
     
     for(i=0;i<N;i++)
     {
     	Rollinghash(S[i]);
     	
     	for(k=1;k<=E;k++)
     	{
     		for(char ch='a';ch<='z';ch++)
     		{
     			
     			if(ch==S[i][k-1]) {continue;}
     			
     			ll l=cal_pre_hashval(1,k-1);
     			
     			l=( (l*base)+ch);
     			
     			ll r=cal_pre_hashval(k+1,E);
     			
     			ll cur=( (l*powr[E-k]) + r);
     			
     			if(Mp.find(cur)!=Mp.end())
     			{
     				ans+=Mp[cur];
     			}
     		}
     		
     	}
     	
     }
    cout<<ans/2<<endl;

   
   /************ALEYA YOUSUF ************/
 
 
 /************AintAH IS ALMIGHTY ************/
return 0;
 
}