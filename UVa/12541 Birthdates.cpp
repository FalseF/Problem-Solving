#include <iostream>
using namespace std;
#define ll long long
#define WRITE(f) freopen(f,"w",stdout)

int main()
{
    WRITE("1.txt");
  ll pd, pm, py, bd, bm, by,T;
  cin>>T;
  ll mn=99999999999999999;
  ll mx=-999999999;
  string young ,old;
  while(T--)
  {
  string S;
  cin >>S>> bd >> bm >> by;
  ll ans=bd+bm*10+by*100;
  if(ans<mn)
  {
      mn=ans;
      young=S;
  }
  if(ans>mx)
  {
      mx=ans;
      old=S;
  }

  }
  cout<<old<<endl<<young<<endl;
  return 0;
}
