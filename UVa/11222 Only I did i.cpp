
      /*########  IN THE NAME OF ALLAH   ##########*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 999999999999999999
#define nl printf("\n")
#define  r0 return 0
#define  r1 return 1
#define sf1(x)  scanf("%lld",&x)
#define sf2(x,y)  scanf("%lld %lld",&x,&y)
#define sf3(x,y,z)  scanf("%lld %lld %lld",&x,&y,&z)
#define pf1(x)  printf("%lld\n",x)
#define pf2(x,y)  printf("%lld %lld\n",x,y)
#define pf3(x,y,z)  printf("%lld %lld %lld\n",x,y,z)
#define yes  printf("YES\n")
#define no  printf("NO\n")
#define pc(x)  printf("Case %lld :",x)
#define pb push_back
#define mp make_pair
#define pa pair<ll,ll>
#define mem(a,b) memset(a,b,sizeof(a))
#define MIN  -99999999999999999
#define READ(f) freopen(f,"r",stdin)
#define WRITE(f) freopen(f,"w",stdout)
#define pi 2.0*acos(0.0)
#define sp printf(" ")
#define vs(v) (v.begin(),v.end())
ll max(ll a,ll b) {if(a>b) return a; else return b;} ll min(ll a,ll b) {if(a<b) return a; else return b;}
ll power(ll B,ll P){ if(P==0) return 1; ll X=power(B,P/2); if(P%2==0) return X*X; else return B*X*X;}
ll fx[]={1,-1,0,0}; ll fy[]={0,0,1,-1};

int main()
{

    //WRITE("1.txt");
   ll T,N,E,u,Q,v,i,j,k,sum=0,ck=0,x,y,cs=0;

   string S,S1;

   double d1,d2,d3;
   cin>>T;
   while(T--)
   {
       ll n1,n2,n3;
       ll ar1[10005];
       ll ar2[10005];
       ll ar3[10005];
       ll ar4[10005]={0};
       ll ar5[10005]={0};
       ll ar6[10005]={0};
       //map<ll,ll>ar4,ar5,ar6;
       set<ll>st1,st2,st3;
       cin>>n1;
       for(i=1;i<=n1;i++)
       {  cin>>ar1[i];
          ar4[ar1[i]]=1;
       }
       //for(i=1;i<=n1;i++) cout<<ar4[ar1[i]]<<endl;
       cin>>n2;
       for(i=1;i<=n2;i++)
       { cin>>ar2[i];
         ar5[ar2[i]]=1;
       }
       //for(i=1;i<=n2;i++) cout<<ar4[ar2[i]]<<endl;
       cin>>n3;
       for(i=1;i<=n3;i++)
       {  cin>>ar3[i];
          ar6[ar3[i]]=1;
       }
        for(i=1;i<=n1;i++)
       {
           //cout<<ar4[ar1[i]]<<" ";
           if(ar6[ar1[i]]==1 || ar5[ar1[i]]==1) continue;
            st1.insert(ar1[i]);
       }

       for(i=1;i<=n2;i++)
       {
           //cout<<ar4[ar2[i]]<<" ";
           if(ar6[ar2[i]]==1 || ar4[ar2[i]]==1) continue;
            st2.insert(ar2[i]);
       }

       for(i=1;i<=n3;i++)
       {
           //cout<<ar4[ar3[i]]<<" ";
         if(ar4[ar3[i]]==1 || ar5[ar3[i]]==1) continue;
            st3.insert(ar3[i]);
       }
       cs++;
       cout<<"Case #"<<cs<<":"<<endl;
       if(st1.size()>st3.size() && st1.size()>st2.size())
       {
           cout<<"1 "<<st1.size();
           for(auto it:st1) cout<<" "<<it;
           nl;
       }
       else if(st2.size()>st1.size() && st2.size()>st3.size())
       {
           cout<<"2 "<<st2.size();
           for(auto it:st2) cout<<" "<<it;
           nl;
       }
       else if(st3.size()>st2.size() && st3.size()>st1.size())
       {
           cout<<"3 "<<st3.size();
           for(auto it:st3) cout<<" "<<it;
           nl;
       }
       else{

           if(st1.size()==st2.size() || st3.size()==st1.size())
           {cout<<"1 "<<st1.size();
           for(auto it:st1) cout<<" "<<it;
           nl;}
           if(st1.size()==st2.size() || st2.size()==st3.size())
           {cout<<"2 "<<st2.size();
           for(auto it:st2) cout<<" "<<it;
           nl;}
           if(st3.size()==st2.size() || st3.size()==st1.size())
           {cout<<"3 "<<st3.size();
           for(auto it:st3) cout<<" "<<it;
           nl;}
       }

       //cout<<st1.size()<<" "<<st2.size()<<" "<<st3.size()<<endl;
   }



 /************ALEYA YOUSUF ************/


 /************ALLAH IS ALMIGHTY ************/
return 0;

}
