
      /*########  IN THE NAME OF ALLAH   ##########*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll x,y,d;
void Extended_Euclid(ll a, ll b)
{
    if(b==0)
    {
        x=1;
        y=0;
        d=a;
        return;
    }
    Extended_Euclid(b,a%b);
    ll x1,y1;
    x1=y;
    y1=x-(a/b)*y;
    x=x1;
    y=y1;

}
int main()
{
  ll A, B;
    while (scanf("%lld %lld", &A, &B) == 2) {
        Extended_Euclid(A, B);
        printf("%lld %lld %lld\n", x, y ,d);
    }
 /************ALEYA YOUSUF ************/


 /************ALLAH IS ALMIGHTY ************/
return 0;

}
