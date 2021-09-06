class Solution {
public:
    vector<int> twoSum(vector<int>& ar, int k) {
        
        
        map<int,int>cnt;
        int n = ar.size();
     for(int i =0;i<n;i++)
     {
     	cnt[ar[i]]++;
     }
     int ans1,ans2,ck;
     
     for(int i =0;i<n;i++)
     {
     	 ck = k-ar[i];
     	if(cnt[ck])
     	{
     		if(ck==ar[i] && cnt[ck]>1) { ans1=i;break;}
     		 else if(ck!=ar[i])
     		 {
     		 	ans1=i;
     		 	break;
     		 }
     	}
     	
     }
     
     for(int i =0;i<n;i++)
     {
     	if(ar[i]==ck && i!=ans1)
     	{
     		ans2=i;break;
     	}
     }
        
        vector<int>v;
        v.push_back(ans1);
        v.push_back(ans2);
        
        return  v;
    }
};