// Problem: File Recover Testing
// Contest: SPOJ - Classical
// URL: https://www.spoj.com/problems/FILRTEST/
// Memory Limit: 1536 MB
// Time Limit: 1975 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;
int lps[1000005];
char p[1000001];
void lps_fun()
{
	int k=0;
	int plen=strlen(p);
	lps[0]=0;//karon supper prefix niya kaj korchi
	for(int i=1;i<plen;i++)
	{
		while(k>0 && p[k]!=p[i])//kth lps er sathe ith char mismatch hole 
		{
	          k = lps[k-1]; //er pichone je lps ach    e tar porer char sathe milabo ei vabe cholbe
		    
		     // ei khane porer char bolar karon hocche jodi k = 1 hoy er mani l len er lps ache
		     // tar mani string tho 0 base index ar ami jodi 1th char sathe match korai
		    // tahole seta oi 1th lps er porer char er sathe check hobe
		}
		
		if(p[k]==p[i]) 
		{
			k++;//mani lps er len ager theke ek barche
		}
		lps[i] = k;
		//ith index er lps save kore rakchi
		
	}
	
	//for(int i=0;i<plen;i++) cout<<lps[i]<<" ";cout<<endl;
}
int main()
{
	int n;
	while(1) 
	{
		scanf("%d",&n);
	    scanf("%s",p);
	    if(n==-1 && p[0]=='*') return 0;
	    
	    lps_fun();
	    int l = strlen(p);
	    int ans = 0;
	    if(n>=l)
	    {
	    	ans = (n-lps[l-1])/(l-lps[l-1]);
	    }
	    
	    printf("%d\n",ans);
	    
	}
}
