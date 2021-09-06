
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
#define                        sf2(a,b)                          scanf("lld",&a,&b)
#define                        sf3(a,b,c)                        scanf("lld%lld",&a,&b,&c)
#define                        r0                                retunr 0
#define                        r1                                retunr
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
#define                        sf2(a,b)                          scanf("lld",&a,&b)
#define                        sf3(a,b,c)                        scanf("lld%lld",&a,&b,&c)
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
ll A[100000],C[100000],D[100000],visited[100000],level[100000];
int fx4[]={1,-1,0,0}; int fy4[]={0,0,1,-1};
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    ll ck=0,n,m,T,c=0,s=0,i,j,k,l;
     sf1(T);
     for(i=1;i<=T;i++)
     {
         sf1(n);
        ll row,colum;
         ll sq=sqrt(n);
         if(sq*sq==n){} else sq++;
         //cout<<sq<<endl;
         ll r=sq*sq-n;
           if(r<sq)
       {
           row=r+1;
           colum=sq;
       }
       else
       {
           colum=2*sq-r-1;
           row=sq;
       }
       ll D=sq & 1;
       //cout<<D<<endl; sq%2==0 hole colum hoy jabe row r row hoy jabe colum
       if(D) swap(colum,row);
         pc(i);
         printf("%lld %lld\n",colum,row);

    }
     //sf1(n);
     //sf2(n,m);




return 0;
}
