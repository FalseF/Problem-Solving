

#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
   string S[1000];
   int ar[1000],ck=0;
   while(1)
   {
       cin>>S[ck]>>ar[ck];
       if(ar[ck]==99) break;
       else if(ar[ck]<=20) continue;
       ck++;
   }

   for(int i=0;i<ck;i++)
   {
       cout<<"Name :"<<S[i]<<" Age = "<<ar[i]<<endl;
   }

return 0;

}
