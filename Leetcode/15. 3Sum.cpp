class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& v) {
        
        vector< vector<int> > triples;
   int n,u;
   n=v.size();
   sort(v.begin(),v.end());
   
   //for(auto it:v) cout<<it<<" ";cout<<endl;
   for(int i =0;i<n && v[i]<=0;i++)
   {
   	  if(i>0 && v[i]==v[i-1]) continue;
   	  int lo=i+1;
   	  int hi=n-1;
   	  while(lo<hi)
   	  {
   	  	 int sum = v[lo] + v[hi] + v[i];
   	  	 //cout<<sum<<v[i]<<" "<<v[lo]<<" "<<v[hi]<<endl;
   	  	 if(sum<0)
   	  	 {
   	  	 	lo++;
   	  	 }
   	  	 
   	  	 else if(sum>0) hi--;
   	  	 else{
   	  	 	
   	  	 	//cout<<v[i]<<" "<<v[lo]<<" "<<v[hi]<<endl;
   	  	 	
   	  	 	triples.push_back({v[lo],v[hi],v[i]});
   	  	 	while(lo<hi && v[lo]==v[lo+1]) lo++;
   	  	 	while(lo<hi && v[hi]==v[hi-1]) hi--;
   	  	 	lo++;
   	  	 	hi--;
   	  	 }
   	  }
   }
        
        return triples;
        
    }
};