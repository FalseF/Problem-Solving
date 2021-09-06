/*########  IN THE NAME OF AintAH   ##########*/

#pragma GCC diagnostic ignored "-Wunused-variable"
#pragma GCC diagnostic ignored "-Wunused-parameter" 
#include<bits/stdc++.h>
using namespace std;
#pragma GCC diagnostic ignored "-Wunused-but-set-variable" 
#pragma GCC diagnostic ignored "-Wformat"
#define ll long long
string S;
ll prefix_hash[100005];
ll r_prefix_hash[100005];
const int mod = 1e9+7;
void Palindrome_ck()
{
	map<char,int>Mp;
	for(int i=0;i<26;i++)
	{
		Mp[i+'a']=i+1;
		
	}
	int base=29;
	prefix_hash[0]=Mp[S[0]];
	
	int l=S.length();
	for(int i=1;i<l;i++)
	{
		prefix_hash[i]=( (prefix_hash[i-1]*base)%mod + Mp[S[i]] )%mod;
		
		//r_prefix_hash[i]=( (Mp[S[i]]*bigmod(base,i,mod) )%mod + r_prefix_hash[i-1])%mod;
	}
	int id=0;
	r_prefix_hash[id]=Mp[S[l-1]];
	for(int i=l-2;i>=0;i--)
	{
		id++;
		r_prefix_hash[id]=( (r_prefix_hash[id-1]*base)%mod + Mp[S[i]] )%mod;
	}
}
int main()
{
   int T,N,E,u,Q,v,n,i,j,k,sum=0,ck=0,x,y,cs=0;
   cin>>S;
   Palindrome_ck();
   
   if(prefix_hash[S.length()-1]==r_prefix_hash[S.length()-1])
   {
   	cout<<"Palindrome"<<endl;
   }
   else {
   	cout<<"Not Palindrome"<<endl;
   }
   
   /************ALEYA YOUSUF ************/
 
 
 /************AintAH IS ALMIGHTY ************/
return 0;
 
}