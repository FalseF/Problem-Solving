#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,E,u,v;
    
    int t;
    cin>>t;
    while(t--)
    {
    	cin>>n;
    	int cnt[n+5]={0};
    	int ar[n+5];
	    for(int i=1;i<=n;i++)
	    {
	        cin>>ar[i];
	        
	        
	    }
	    
	  
	     if(ar[1]==1)
	    {
	    	cout<<n+1;
	    	for(int i=1;i<=n;i++) cout<<" "<<i;
	    	cout<<endl;
	    	continue;
	    }
	    int ck=0;
	    for(int i=1;i<n;i++)
	    {
	    	if(ar[i]==0 && ar[i+1]==1)
	    	{
	    		for(int j =1;j<=i;j++)
	    		{
	    			cout<<j<<" ";
	    		}
	    		cout<<n+1<<" ";
	    		for(int j=i+1;j<=n;j++) cout<<j<<" ";
	    		cout<<endl;
	    		
	    		
	    		ck=1;
	    		break;
	    	}
	    	
	    }
	    
	    if(ck==1) continue;
	    for(int i=1;i<=n+1;i++)
	    {
	    	cout<<i<<" ";
	    }
    
    cout<<endl;
    }
    

 
    //cout<<"shortest path " <<level[dis]<<endl;
    // dist level[dist]
}
