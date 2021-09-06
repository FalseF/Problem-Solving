class Solution {
public:
    vector<vector<int>>fourSum(vector<int>& v, int target) {
        
   int n=v.size();
   vector<vector<int>>ans;
    sort(v.begin(),v.end()); 
     for(int i =0;i<n;i++)
     {
     	if(i>0 && v[i]==v[i-1]) continue;
     	for(int j=i+1;j<n-2;j++)
     	{
     		if(j>(i+1) && v[j]==v[j-1]) continue;
     		int lo=j+1;
     		int hi=n-1;
     		while(lo<hi)
     		{
     			long long sum=v[i] + v[j] + v[lo] + v[hi];
     			if(sum<target) lo++;
     			else if(sum>target) hi--;
     			else 
     			{
     			    ans.push_back({v[i],v[j],v[lo],v[hi]});
     			    while(lo<hi && v[lo]==v[lo+1]) lo++;
     			    while(lo<hi && v[hi]==v[hi-1]) hi--;
     			    lo++;
     			    hi--;
     			     
     			}
     			
     		}
     		
     	}
     }
        
        return ans;
        
    }
};