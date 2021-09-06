/*########  IN THE NAME OF AintAH   ##########*/

#pragma GCC diagnostic ignored "-Wunused-variable"
#pragma GCC diagnostic ignored "-Wunused-parameter" 
#include<bits/stdc++.h>
using namespace std;
#pragma GCC diagnostic ignored "-Wunused-but-set-variable" 
#pragma GCC diagnostic ignored "-Wformat"
typedef long long ll;
ll dp2[12][2],dp1[12][2][2];
string S;
ll fun2(int pos, int issmall)
{
	if(pos>=S.length()) return 1ll;
	if(dp2[pos][issmall]!=-1) return dp2[pos][issmall];
	ll res=0;
	int lo=0,hi=S[pos]-'0';
	if(issmall) hi=9;
	for(int i=lo;i<=hi;i++)
	{
		ll val=fun2(pos+1,issmall|(i<hi));
		res+=val;
	}
	
	//res+=fun2(pos+1,1);
	
	return dp2[pos][issmall]=res;
}
ll fun1(int pos, int issmall, int hasstarted)
{
	if(pos>=S.length())
	{
		 return 0ll;//karon ekhon porjonto kono (0) bosai nei ar jodi 0 bosano e hoy 
		//seta fun2 e count hoiche ekhane count korle overcounting hoy jabe
	}
	
	if(dp1[pos][issmall][hasstarted]!=-1) return dp1[pos][issmall][hasstarted];
	ll res=0;
	int lo=0,hi=S[pos]-'0';
	if(issmall) hi=9;
	for(int i=lo;i<=hi;i++)
	{
		ll val=fun1(pos+1,issmall|(i<hi),hasstarted|(i!=0));
		if(hasstarted && i==0)//(0) bosanor aghe 0 er theke boro num bosaichi ar ekon 
		//0 bosale  er sabne ar joto sob num banano jabe sob gulo te 0  contribute hobe
		{
			val+=fun2(pos+1,issmall|(i<hi));//picho ne 0 bosaiya ar koto vabe num banan jay 
		}
		
		res+=val;
	}
	
	//res+=fun1(pos+1,1,1);
	
	return dp1[pos][issmall][hasstarted]=res;
}


string bignum_minus(string str1, string str2) {
    string str = "";
    int n1 = str1.length(), n2 = str2.length();
    reverse(str1.begin(), str1.end());
    reverse(str2.begin(), str2.end());
    int carry = 0;
    for (int i=0; i<n2; i++){
        int sub = ((str1[i]-'0')-(str2[i]-'0')-carry);
        if (sub < 0){
            sub = sub + 10;
            carry = 1;
        }
        else
            carry = 0;
        str.push_back(sub + '0');
    }
    for (int i=n2; i<n1; i++){
        int sub = ((str1[i]-'0') - carry);
        if (sub < 0){
            sub = sub + 10;
            carry = 1;
        }
        else
            carry = 0;
        str.push_back(sub + '0');
    }
    reverse(str.begin(), str.end());
    while ( str[0]=='0' && str.size()>1)
        str.erase(str.begin()) ;
    return str;
}

int main()
{
	int t;
	scanf("%d",&t);
	int cs=0;
	while(t--)
	{
			cs++;
		 string l,r;
	     cin>>l>>r;
	     S=r;
	     memset(dp1,-1,sizeof(dp1));
	     memset(dp2,-1,sizeof(dp2));
	     /// 0to r porjonto ber korchi
	     ll  R=fun1(0,0,0)+1;
	     //cout<<"Right side "<<R<<endl;
	    memset(dp1,-1,sizeof(dp1));
	     memset(dp2,-1,sizeof(dp2));
	      //0 to (l-1) porjonto ber korchi 
	      ll L=1;
	      if(l[0]=='0') L=0;
	      	  S=bignum_minus(l,"1");
	      	  //cout<<S<<endl;
	          L+=fun1(0,0,0);
	  
	      
	      printf("Case %d: %lld\n",cs,R-L);
	    
	     
      }

   /************ALEYA YOUSUF ************/
 
 
 /************AintAH IS ALMIGHTY ************/
return 0;
 
}