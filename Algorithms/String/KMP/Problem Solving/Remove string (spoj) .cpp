
#include<bits/stdc++.h>
using namespace std;
void FastIO(){
	ios_base :: sync_with_stdio (false);
  	cin.tie(0);
	cout.precision(20);
}

string text,pat;
int n,m,dp[10005][1005];
int lps[1005];
void prefix_function(){
	lps[0]=0;
	for(int i=1;i<m;i++){
		int j=lps[i-1];
		while(j>0 && pat[i]!=pat[j]){
			j=lps[j-1];
		}
		if(pat[i]==pat[j]){
			j++;
		}
		lps[i]=j;
	}
}
int f(int idx,int len){// idx = cur idx of text, len = mathching length of text with pat
	if(idx >= n) return 0;
	int &ret = dp[idx][len];
	if(ret != -1) return ret;
	int cur = len;
	while(cur>0 && text[idx]!=pat[cur]){
		cur = lps[cur-1];
	}
	if(text[idx] == pat[cur]){
		if(cur+1==m){ // get a matching -> must remove cur char
			ret = 1 + f(idx+1,len);
		}
		else{
			int p = 1 + f(idx+1,len); // remove cur char from text
			int q = f(idx+1,cur+1); // won't remove from text
			ret = min(p,q);
		}
	}
	else{
		ret = f(idx+1,cur); // won't remove from text
	}
	//cout<<idx<<" "<<len<<" "<<ret<<endl;
	return ret;
}


int main()
{
	//what the hell are youing? Think again before coding.
	FastIO();
	
	while(cin>>text>>pat){
		n = text.length(); m = pat.length();
		
		memset(dp,-1,sizeof(dp));
		memset(lps,0,sizeof(lps));
		
		prefix_function();
		int ans=f(0,0);
		
		cout<<ans<<endl;
	}
	

    return 0;
}