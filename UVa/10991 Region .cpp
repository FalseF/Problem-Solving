

                  /*########  PRAISE TO BE GOD  ##########*/
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define                      pc(a)                         printf("Case %lld: ",a)
#define                      pn(a)                         printf("%lld\n",a)
#define                       pb                                 push_back
#define                       m0(a)                              memset(a,0,sizeof(a))
#define                       m1(a)                              memset(a,-1,sizeof(-1))
#define                       sf1(a)                             scanf("%lld",&a)
#define                        sf2(a,b)                          scanf("%lld %lld",&a,&b)
#define                        sf3(a,b,c)                        scanf("%lld %lld %lld",&a,&b,&c)
#define                        MAX                               10000000000
#define                        MIN                               -10000000000
#define                        in1(a)                            cin >> a
#define                        in2(a, b)                         cin >> a >> b
#define                        in3(a, b, c)                      cin >> a >> b >> c
#define                        in4(a, b, c, d)                   cin >> a >> b >> c >> d
#define                        out1(a)                           cout << a << endl
#define                        out2(a, b)                        cout << a <<  ' ' << b << endl
#define                        out3(a, b, c)                     cout << a << ' ' << b << ' ' << c << endl
#define                        out4(a, b, c, d)                  cout << a << ' ' << b << ' ' << c << ' ' << d << endl
#define                        N                                 cout << "No" << endl
#define                        Y                                 cout << "Yes" << endl
#define                        nl                                cout << endl
#define                        max3(a, b, c)                     max(a, max(b, c))
#define                        max4(a, b, c, d)                  max(a, max(b, c, d))
#define                        min3(a, b, c)                     min(a, min(b, c))
#define                        min4(a, b, c, d)                  min(a, min(b, c, d))
#define                        PI     acos(0.0)
ll max(ll x,ll y) {if(x>y) return x; else return y;}
ll min(ll x,ll y) {if(x<y) return x; else return y;}
ll pow(ll Base,ll Power) { ll S=1; for(ll i=1;i<=Power;i++) S=S*Base; return S;}
/*struct stc{
ll V1,V2;
stc(ll a,ll b)
{
    V1=a;
    V2=b;

}

};
vector<stc>SV;*/

vector<ll>V;
ll A[300005],C[300005],D[300005],visited[300005],level[300005];
int fx4[]={1,-1,0,0}; int fy4[]={0,0,1,-1};
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int i,T;

    double r1,r2,r3,theta1,theta2,theta3;
     sf1(T);
    for(i=0;i<T;i++)
    {
         cin>>r1>>r2>>r3;
         double b=r1+r2;
         double a=r1+r3;
         double c=r3+r2;
         double S=(a+b+c)*0.5;




         double Area=sqrt(S*(S-a)*(S-b)*(S-c));
         double angle1=acos((a*a+b*b-c*c)/(2.0*a*b));
         double angle2=acos((b*b+c*c-a*a)/(2.0*c*b));
         double angle3=acos((a*a+c*c - b*b)/(2.0*a*c));



         double s1=.5*r1*r1*angle1;
         double s2=.5*r2*r2*angle2;
         double s3=.5*r3*r3*angle3;




         double result=Area-(s1+s2+s3);
         printf("%.6f\n",result);



    }
     //sf1(n);
     //sf2(n,m);




return 0;
}

