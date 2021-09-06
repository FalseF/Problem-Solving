#include<bits/stdc++.h>

using namespace std;

int main()

{
   int N,E;

   vector<int>A;

   cin>>N;

   for(int i=0;i<N;i++)
   {
     cin>>E;

     A.push_back(E);

   }

  sort(A.begin(),A.end());

   int  Iower=(lower_bound(A.begin(),A.end(),7))-A.begin();

   int  Upper=(upper_bound(A.begin(),A.end(),7))-A.begin();

   cout<<Iower<<endl;

   cout<<Upper;nl;
}
