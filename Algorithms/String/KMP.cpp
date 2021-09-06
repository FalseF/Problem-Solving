#include<bits/stdc++.h>
using namespace std;
int lps[200005];
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
	
	for(int i=0;i<plen;i++) cout<<lps[i]<<" ";cout<<endl;
}

int match_fun(string text, string pattern)
{
	int tlen=text.length();
	int plen = pattern.length();
	int match_count=0;
	for(int i=0,j=0;i<tlen;i++)
	{
		while(j>0 && text[i]!=pattern[j])
		{
			j=lps[j-1];// text er sathe mismatch hole er aghee 
			// longest lps er porer char sathe match korar try 
			//korbo sob gulor sathe kora lagbe na karon j-1 th index 
			//porjonto prefix ar suffex same so oi khan thek suffex string 
			// match korale hobe
		}
		
		if(pattern[j]==text[i]) j++;
		//pattern ek gor sabne agabe
		if(j==plen)
		{
			match_count++;
			j=lps[j-1];// pattern er last e chole aschi 
			// ar sob char match hobar porer index ekta mismatch 
			// char hisabe kaj korbe tai er ager lps  th index theke
			// abar text er sathe mash korabo
		}
		
	}
	
	return match_count;
}


int main()
{
	string text,pattern;
	cin>>text>>pattern;
	
	lps_fun(pattern);
	int ans = match_fun(text,pattern);

	cout<<"Total matching "<<ans<<endl; 
	
	
	
}