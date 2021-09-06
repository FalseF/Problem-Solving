class Solution {
public:
    string longestCommonPrefix(vector<string>& S) {
        
        
         string ans="",res;
     for(int i =0;i<S[0].length();i++)
     {
     	ans+=S[0][i];
     	int ck =0;
     	int len = ans.length();
         int n = S.size();
     		//cout<<ans<<endl;
     	for(int j=1;j<n;j++)
     	{
     		
     		int in=0,k;
     	
     		for(k=0;k<S[j].length();k++)
     		{
     			if(S[j][k]==ans[in])
     			{
     				in++;
     			}
     			else break;
     		}
     		
     		//cout<<in<<endl;
     		
     		if(len!=in) 
     		{
     			ck = 1;break;
     		}
     		
     	}
     	
     	if(ck==1) break;
     	else res = ans;
     }
        return res;
    }
};