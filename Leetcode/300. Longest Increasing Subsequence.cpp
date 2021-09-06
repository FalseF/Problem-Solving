class Solution {
public:
    int ar[3000005],Index[20000005];
    int result[100004];
    int fun(int N)
    {
        int mid,low=0,high=0,mx=0;
        for(int i=0;i<N;i++)
        {
            low=0;
            high=mx;
            while(low<=high)
            {
                mid=(low+high)/2;
                if(Index[mid]<ar[i]) low=mid+1;
                else high=mid-1;
            }
            Index[low]=ar[i];
            if(mx<low)
            {
                mx=low;
                result[mx]=ar[i];
            }
        }
        return mx;
    }
    int lengthOfLIS(vector<int>& nums) {
        Index[0]=INT_MIN;
        int N=nums.size();
        for(int i=1;i<=N;i++)
        {
            ar[i-1]=nums[i-1];
            Index[i]=INT_MAX;
        }
        int ans=fun (N);
        return ans;
    }
};
