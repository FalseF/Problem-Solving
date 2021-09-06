class Solution {
public:
    int getmax(vector<int>v,int id)
{
	if(id==0) return INT_MIN;
	else return v[id-1];
}
int getmin(vector<int>v,int id)
{
	if(id==v.size()) return INT_MAX;
	else return v[id];
}
    double findMedianSortedArrays(vector<int>& v1, vector<int>& v2) {
        int n=v1.size();
        int m = v2.size();
        if(n>m) swap(v1,v2);
   int hi=v1.size();
   int lo=0;
   int total=(n+m+1)/2;
   double res;
   while(lo<=hi)
   {
   	  int f_mid = (lo+hi)/2;
   	  
   	  int s_mid = total - f_mid;
   	  
   	  int l1 = getmax(v1,f_mid);
   	  int r1 = getmin(v1,f_mid);
   	  int l2=getmax(v2,s_mid);
   	  int r2=getmin(v2,s_mid);
   	  if(l1<=r2 && l2<=r1)
   	  {
   	  	if((n+m)%2==0)
   	  	{
   	  		res = ( double)(max(l1,l2) + min(r1,r2))/2;
   	  		
   	  	}
   	  	
   	  	else res = max(l2,l1);
   	  	break;
   	  }
   	  
   	  if(l1>r2) hi = f_mid-1;
   	  
   	  else lo=f_mid+1;
   	  
   	  
   }
        
        return res;
        
    }
};