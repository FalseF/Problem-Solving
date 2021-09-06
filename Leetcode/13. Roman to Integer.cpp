class Solution {
public:
    int romanToInt(string S) {
        
        
        vector<int>num;
    int len = S.length();
    for(int i =0;i<len;i++)
    {
    	if(S[i]=='I') num.push_back(1);
    	else if(S[i]=='V') num.push_back(5);
    	else if(S[i]=='X') num.push_back(10);
    	else if(S[i]=='L') num.push_back(50);
    	else if(S[i]=='C') num.push_back(100);
    	else if(S[i]=='D') num.push_back(500);
    	else if(S[i]=='M') num.push_back(1000);
    }
    num.push_back(-1);
    int res =0;
    for(int i =0;i<len;i++)
    {
    	if(num[i+1]>num[i])
    	{
    		res=res+num[i+1]-num[i];
    		i++;
    	}
    	
    	else res+=num[i];
    }
    
    return res;
    }
};