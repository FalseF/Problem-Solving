/*########  IN THE NAME OF AintAH   ##########*/

#pragma GCC diagnostic ignored "-Wunused-variable"
#pragma GCC diagnostic ignored "-Wunused-parameter" 
#include<bits/stdc++.h>
using namespace std;
#pragma GCC diagnostic ignored "-Wunused-but-set-variable" 
#pragma GCC diagnostic ignored "-Wformat"
const int mod1 = 1000058831, base1 = 131;
const int  mod2 = 1e9+7, base2 = 89;
const int mxn = 1e6 + 3 ;
int powr1[mxn+5], powr2[mxn+5];

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
struct node
{
	int h1,h2,cnt;
	
};

char str [mxn],r_str [mxn] ;

node t1[4*mxn+5], t2[4*mxn+5];

void build( int n, int b, int e)
{
	if(b == e)
	{
		t1[n].h1 = str[b-1]-96;
		t1[n].h2 = str[b-1]-96;
		t1[n].cnt = 1;
		
		t2[n].h1 = r_str[b-1]-96;
		t2[n].h2 = r_str[b-1]-96;
		t2[n].cnt = 1;
		return ;
	}
	
	int mid = (b + e)/2;
	
	build (2*n, b , mid );
	build (2*n+1, mid+1, e);
	// suja string er jonno
	int temp1 = (  1LL * t1[2*n].h1 * powr1[ t1 [2*n+1].cnt] + t1[2*n+1].h1 ) % mod1;
	int temp2 = (  1LL * t1[2*n].h2 * powr2[ t1[2*n + 1].cnt] + t1[2*n+1].h2 ) % mod2;
	t1[n].h1 = temp1;
	t1[n].h2 = temp2;
	t1[n].cnt = t1[2*n].cnt + t1[2*n+1].cnt;
	//ulta string er jonno
	int temp3 = (  1LL * t2[2*n].h1 * powr1[ t2 [2*n+1].cnt] + t2[2*n+1].h1 ) % mod1;
	int temp4 = (  1LL * t2[2*n].h2 * powr2[ t2[2*n + 1].cnt] + t2[2*n+1].h2 ) % mod2;
	t2[n].h1 = temp3;
	t2[n].h2 = temp4;
	t2[n].cnt = t2[2*n].cnt + t2[2*n+1].cnt;
	

}

int findpos1(int n, int b, int e, int pos)
{
	if(b==e)
	{
		return b;
	}
	
	int mid = (b + e)/2;
	
	if(t1[2*n].cnt >= pos)
	{
		return findpos1(2*n,b,mid,pos);
	}
	else
	{
		return findpos1(2*n+1,mid+1,e,pos-t1[2*n].cnt);
	}
}

int findpos2(int n, int b, int e, int pos)
{
	if(b==e)
	{
		return b;
	}
	
	int mid = (b + e)/2;
	
	if(t2[2*n+1].cnt >=pos)
	{
		return findpos2(2*n+1,mid+1,e,pos);
	}
	else
	{
		return findpos2(2*n,b,mid,pos-t2[2*n+1].cnt);
	}
}

node query1(int n, int b, int e, int l, int r)
{
	if(e<l || b>r)
	{
		node ck;
		ck.h1 = 0;
		ck.h2=0;
		ck.cnt=0;
		return ck;
	}
	if(b>=l && e<=r)
	{
		return t1[n];
	}
	
	int mid = (b + e)/2;
	
	node ans1 = query1(2*n,b,mid,l,r);
	node ans2 = query1(2*n+1,mid+1,e,l,r);
	
	
	node ans;
	if(ans1.cnt==0)
	{
		ans=ans2;
	}
	else if(ans2.cnt==0)
	{
	    ans=ans1;	
	}
	
	else 
	{
		int temp1 = (  1LL * ans1.h1 * powr1[ans2.cnt] + ans2.h1 ) % mod1;
	    int temp2 = (  1LL * ans1.h2 * powr2[ans2.cnt] + ans2.h2 ) % mod2;
	   
	   ans.h1=temp1;
	   ans.h2=temp2;
	   ans.cnt=ans1.cnt+ans2.cnt;
	}

	return ans;
}

node query2(int n, int b, int e, int l, int r)
{
	if(e<l || b>r)
	{
		node ck;
		ck.h1 = 0;
		ck.h2=0;
		ck.cnt=0;
		return ck;
	}
	if(b>=l && e<=r)
	{
		return t2[n];
	}
	
	int mid = (b + e)/2;
	
	node ans1 = query2(2*n,b,mid,l,r);
	node ans2 = query2(2*n+1,mid+1,e,l,r);
	
	
	node ans;
	if(ans1.cnt==0)
	{
		ans=ans2;
	}
	else if(ans2.cnt==0)
	{
	    ans=ans1;	
	}
	
	else 
	{
		int temp1 = ( 1LL *  ans1.h1 * powr1[ans2.cnt] + ans2.h1 ) % mod1;
	    int temp2 = (  1LL * ans1.h2 * powr2[ans2.cnt] + ans2.h2 ) % mod2;
	   
	   ans.h1=temp1;
	   ans.h2=temp2;
	   ans.cnt=ans1.cnt+ans2.cnt;
	}

	return ans;
}

void update1(int n, int b, int e, int l, char ch)
{
	if(b>l || e<l) return;
	if(b==e)
	{
		if(ch=='#')
		{
			t1[n].h1=0;
			t1[n].h2=0;
			t1[n].cnt=0;		
			
		}
		
		else
		{
			t1[n].h1=ch-96;
			t1[n].h2=ch-96;
		}
		
	  return ;
	}
	
	int mid=( b + e )/2;
	update1(2*n,b,mid,l,ch);
	update1(2*n+1,mid+1,e,l,ch);
	
	if(t1[2*n].cnt==0)
	{
		t1[n]= t1[2*n+1];
	
	}
	
	else if(t1[2*n+1].cnt==0)
	{
		t1[n] = t1[2*n];
	}
	
	else
	{
		int temp1 = (  1LL * t1[2*n].h1 * powr1[ t1 [2*n+1].cnt] + t1[2*n+1].h1 ) % mod1;
	   int temp2 = (  1LL * t1[2*n].h2 * powr2[ t1[2*n + 1] .cnt] + t1[2*n+1].h2 ) % mod2;
	   t1[n].h1 = temp1;
	   t1[n].h2 = temp2;
	   t1[n].cnt = t1[2*n].cnt + t1[2*n+1].cnt;
	}
}

void update2(int n, int b, int e, int l, char ch)
{
	if(b>l || e<l) return;
	if(b==e)
	{
		if(ch=='#')
		{
			t2[n].h1=0;
			t2[n].h2=0;
			t2[n].cnt=0;		
			
		}
		
		else
		{
			t2[n].h1=ch-96;
			t2[n].h2=ch-96;
		}
		
	  return ;
	}
	
	int mid=( b + e )/2;
	update2(2*n,b,mid,l,ch);
	update2(2*n+1,mid+1,e,l,ch);
	
	if(t2[2*n].cnt==0)
	{
		t2[n] = t2[2*n+1];
	}
	
	else if(t2[2*n+1].cnt==0)
	{
		t2[n] = t2[2*n];
		
	}
	
	else
	{
		int temp1 = (  1LL * t2[2*n].h1 * powr1[ t2 [2*n+1].cnt] + t2[2*n+1].h1 ) % mod1;
	   int temp2 = (  1LL * t2[2*n].h2 * powr2[ t2[2*n + 1].cnt] + t2[2*n+1].h2 ) % mod2;
	   t2[n].h1 = temp1;
	   t2[n].h2 = temp2;
	   t2[n].cnt = t2[2*n].cnt + t2[2*n+1].cnt;
	}
}
int main()
{
    computepower();
    
    scanf("%s",str);
     
     int len = strlen(str);
     
     
    for(int i = 0, j = len -1; i< len ; i++ , j--)
    {
    	r_str[i] = str[j] ;
    }
    
    build(1,1,len);
    
    int q;
    scanf("%d", &q);
    
    while(q--)
    {
    	int l,r;
    	char ch;
    	cin>>ch;
    	if(ch=='C')
    	{
    		scanf("%d%d", &l,&r);
    		
    		int p1=findpos1(1,1,len,l);
    		int p2=findpos1(1,1,len,r);

    		node ans = query1(1,1,len,p1,p2);
    		
    		int lo=len-r+1;
    		int up=len-l+1;
    		
    		lo = len -lo +1;
    		up = len - up+1;
    		int p3=findpos2(1,1,len,lo);
    		int p4=findpos2(1,1,len,up);
    		
    		//cout<<p3<<" "<<p4<<endl;
    		
    		node ans1 = query2(1,1,len,p3,p4);
    		
    		//cout<<ans.h1<<" "<<ans.h2<<" "<<ans1.h1<<" "<<ans1.h2<<endl;
    		//cout<<ans.h1<<" "<<ans1.h1<<endl;
    		if(ans.h1 == ans1.h1 && ans.h2 == ans1.h2)
    		{
    			printf("Yes!\n");
    		}
    		else
    		{
    			printf("No!\n");
    		}
    		
    	}
    	
    	else if(ch=='U')
    	{
    		
    		char ch1;
    		scanf("%d",&l);
    		cin>>ch1;
    		int p1=findpos1(1,1,len,l);
    		update1(1,1,len,p1,ch1);
    		
    		int lo = len-l+1;
    		lo=len-lo+1;
    		int p2=findpos2(1,1,len,lo);
    		update2(1,1,len,p2,ch1);
    		
    	}
    	
    	else if(ch=='D')
    	{
    		scanf("%d",&l);
    		
    		int p1=findpos1(1,1,len,l);
    		update1(1,1,len,p1,'#');

    		int lo = len-l+1;
    		lo=len-lo+1;
    		
    		int p2=findpos2(1,1,len,lo);
    		update2(1,1,len,p2,'#');
    		
    	}
    }
   
   /************ALEYA YOUSUF ************/
 /************AintAH IS ALMIGHTY ************/
return 0;
 
}