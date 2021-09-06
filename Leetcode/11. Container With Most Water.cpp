class Solution {
public:
    int maxArea(vector<int>& v) {
        long long ans =0,temp;
        for(int i=0,j=v.size()-1;i<=j;)
     {
     	 temp=min(v[i],v[j]);
     	temp*=(j-i);
     	ans = max(ans,temp);
     	if(v[i]<=v[j])
     	{
     		i++;
     	}
     	else j--;
     }
        
        return ans;
        
    }
};