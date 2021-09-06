class Solution {
public:
    int threeSumClosest(vector<int>& v, int target) {
        
     int sum=v[0]+v[1]+v[2];
   sort(v.begin(),v.end());
        int n = v.size();
   for(int i=0;i<n-2;i++)
   {
   	  int lo=i+1;
      int hi=n-1;
      while(lo<hi)
      {
      	 int temp=v[i] + v[lo] + v[hi];
      	 if(abs(temp-target)<abs(sum-target)) sum=temp;
      	 if(temp<target) lo++;
      	 else if(temp>target) hi--;
          else return target;	
      }
   } 
        return sum;
        
    }
};