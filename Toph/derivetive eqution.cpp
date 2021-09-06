/*########  IN THE NAME OF AllAH   ##########*/

#pragma GCC diagnostic ignored "-Wunused-variable"
#pragma GCC diagnostic ignored "-Wunused-parameter" 
#include<bits/stdc++.h>
using namespace std;
#pragma GCC diagnostic ignored "-Wunused-but-set-variable" 
#pragma GCC diagnostic ignored "-Wformat"
#define ll long long
#define INF 999999999999999999
#define nl prllf("\n")
#define  r0 return 0
#define  r1 return 1
#define sf1(x)  scanf("%d",&x)
#define sf2(x,y)  scanf("%d %d",&x,&y)
#define sf3(x,y,z)  scanf("%d %d %d",&x,&y,&z)
#define pf1(x)  prllf("%d\n",x)
#define pf2(x,y)  prllf("%d %d\n",x,y)
#define pf3(x,y,z)  prllf("%d %d %d\n",x,y,z)
#define yes  prllf("YES\n")
#define no  prllf("NO\n")
#define pc(x,y)  prllf("Case %d: %d\n",x,y)
#define pcn(x,y)  prllf("Case %d:\n",x)
#define pb push_back
#define mp make_pair
#define pa pair<ll,ll>
#define mem(a,b) memset(a,b,sizeof(a))
#define MIN  -99999999999999999
#define READ(f) freopen(f,"r",stdin)
#define WRITE(f) freopen(f,"w",stdout)
#define pi 2.0*acos(0.0)
#define vs(v) (v.begin(),v.end())
ll Power(ll l, ll r)
{
	ll ans=1;
	for(ll i=l;;i--)
	{
		if(i==r) break;
		ans*=i;
		
	}
	
	return ans;
}
int main()
{
   int T,N,E,u,Q,v,n,i,j,k,sum=0,ck=0,x,y,cs=0;
 
     string S,S1;
 
     double d1,d2,d3;
     sf1(T);
     
     while(T--)
     {
     	cs++;
     	cin >> N;
     	getchar();
     	getline(cin,S);
     
     	ll num=0;
     	vector< pair<ll,ll> >vc;
     	
     	for(i=0;i<S.length();i++)
     	{
     		if(S[i]=='X')
     		{
     			ll pw=0;
     			
     			for(j=i+2;j<S.length();j++)
     			{
     				
     				
     				if(S[j]==' ') break;
     				
     			 pw=pw*10+S[j]-'0';
     				
     			}
     			
     			 pw=max(1ll,pw);
     			
     			if(pw==0 && S[j-1]=='0') pw=0ll;
     			
     			if(pw>=N)
     			{
     				num=max(1ll,num);
     				num*=Power(pw,pw-N);
     				vc.push_back(mp(num,pw-N));
     			}
     			i=j+2;
     			num=0;
     			continue;
     		}
     		
     		if(S[i]=='*') continue;
     		
     		 num=num*10+S[i]-'0';
     		
    
     	}
     	
     	printf("Case %d: ",cs);
     	if(N==0)
     	{
     		cout<<S<<endl;
     		continue;
     	}
     	
     	if(vc.size()<1)
     	{
     		printf("0\n");
     		continue;
     	}
     	
     	
     	for(i=0;i<vc.size();i++)
     	{
     		printf("%lld",vc[i].first);
     		
     		if(vc[i].second>1)
     		{
     			printf("*X^%lld",vc[i].second);
     		}
     		else if(vc[i].second==1)
     		{
     			printf("*X");
     		}
     		
     		if(i<(vc.size()-1))
     		{
     			printf(" + ");
     		}
     	}
     	
     	printf("\n");
     	
     	
     	
     }
   
   

   
   /************ALEYA YOUSUF ************/
 
 
 /************AllAH IS ALMIGHTY ************/
return 0;
 
}