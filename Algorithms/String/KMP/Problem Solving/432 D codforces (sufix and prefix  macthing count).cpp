#include<bits/stdc++.h>
using namespace std;
int lps[200005],LPS[200005];
void lps_fun(string p)
{
	int k=0;
	int plen=p.length();
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
	
	for(int i=0;i<plen;i++)
	{
		LPS[i+1] =lps[i];
		// 1 base niya kaj korbo
	} 
	//cout<<lps[i]<<" ";cout<<endl;
}



int sub_end[200005],subcnt[200005],csum[200005];
int main()
{
	string text,pattern;
	cin>>pattern;
	
	lps_fun(pattern);
 
	int len = pattern.length();
	//for(int i=1;i<=len;i++) cout<<LPS[i]<<" ";
	int now=len;
	int cnt=0;
	// je khane je khane ekta ekta lps sesh hoiche ta cnt kore rakchi
	while(now)
	{
		sub_end[now]++;
		now=LPS[now];
		cnt++;
	}
	
	for(int i=len;i>=1;i--)
	{
		subcnt[LPS[i]]++;// same len er koy ta prefix suffix ache ta cnt korchi
	}
	
	for(int i=len;i>=1;i--)
	{
		subcnt[LPS[i]]+=subcnt[i];// same len er je koy ta prefix suffix ache tar csume kore rakchi
		
		
	}
	// je koy ta suffix prefix match kore tar count
	cout<<cnt<<endl;
	for(int i=1;i<=len;i++)
	{
		if(sub_end[i]) cout<<i<<" "<<subcnt[i]+1<<endl;
	}
}