//
//      /*########  IN THE NAME OF ALLAH   ##########*/
//
//#include<bits/stdc++.h>
//using namespace std;
//#define ll long long
//#define MAX 999999999999999999
//#define nl printf("\n")
//#define  r0 return 0
//#define  r1 return 1
//#define sf1(x)  scanf("%lld",&x)
//#define sf2(x,y)  scanf("%lld %lld",&x,&y)
//#define sf3(x,y,z)  scanf("%lld %lld %lld",&x,&y,&z)
//#define pf1(x)  printf("%lld\n",x)
//#define pf2(x,y)  printf("%lld %lld\n",x,y)
//#define pf3(x,y,z)  printf("%lld %lld %lld\n",x,y,z)
//#define yes  printf("YES\n")
//#define no  printf("NO\n")
//#define pc(x)  printf("Case %lld :",x)
//#define pb push_back
//#define mp make_pair
//#define pa pair<ll,ll>
//#define mem(a,b) memset(a,b,sizeof(a))
//#define MIN  -99999999999999999
//#define READ(f) freopen(f,"r",stdin)
//#define WRITE(f) freopen(f,"w",stdout)
//#define pi 2.0*acos(0.0)
//#define sp printf(" ")
//#define vs(v) (v.begin(),v.end())
//ll max(ll a,ll b) {if(a>b) return a; else return b;} ll min(ll a,ll b) {if(a<b) return a; else return b;}
//ll power(ll B,ll P){ if(P==0) return 1; ll X=power(B,P/2); if(P%2==0) return X*X; else return B*X*X;}
//ll fx[]={1,-1,0,0}; ll fy[]={0,0,1,-1};
//vector<ll>V,G;
//int make;
//ll fun(int start, int taka, int k,vector<int>&nums,int visited[])
//{
//    if(k==1){ return 1;}
//    if(taka==0) {return fun(0,make,k-1,nums,visited);}
//    for(int i=0;i<nums.size();i++)
//    {
//        if(visited[i]==0)
//        {
//            visited[i]=1;
//            if(fun(i+1,taka-nums[i],k,nums,visited)) return 1;
//            //cout<<ck1<<endl;
//            visited[i]=0;
//
//        }
//    }
//    return 0;
//}
//int main()
//{
//   ll T,N,E,u,Q,v,i,j,k,sum=0,ck=0,x,y,cs=0;
//
//   string S,S1;
//
//   double d1,d2,d3;
//   vector<int>nums;
//   cin>>N>>k;
//   for(i=0;i<N;i++)
//   {
//       cin>>u;
//       nums.pb(u);
//       ck+=u;
//   }
//   if(ck%k) cout<<"false"<<endl;
//    make=ck/k;
//    int visited[10000]={0};
//   int ans=fun(0,make,k,nums,visited);
//   if(ans==1) cout<<"true"<<endl;
//   else cout<<"false"<<endl;
// /************ALEYA YOUSUF ************/
//
////7
////4 4 3 2 3 5 2 1
// /************ALLAH IS ALMIGHTY ************/
//return 0;
//
//}

 class Solution {
public:
int T,N,E,u,Q,v,i,j,k,sum=0,ck=0,x,y,cs=0;
int make;
int fun(int start, int taka, int k,vector<int>&nums,int visited[])
{
    if(k==1){ return 1;}
    if(taka==0) {return fun(0,make,k-1,nums,visited);}
    for(int i=0;i<nums.size();i++)
    {
        if(nums[i]>taka) return 0;
        if(visited[i]==0)
        {
            visited[i]=1;
            if(fun(i+1,taka-nums[i],k,nums,visited)) return 1;
            //cout<<ck1<<endl;
            visited[i]=0;

        }
    }
    return 0;
}
    bool canPartitionKSubsets(vector<int>& nums, int k) {
        for(i=0;i<nums.size();i++)
   {
       ck+=nums[i];
   }
   int visited[10000]={0};
   if(ck%k) return false;
    make=ck/k;
        sort(nums.begin(),nums.end());
   int ans=fun(0,make,k,nums,visited);
   if(ans==1) return true;
   else return false;


    }
};
