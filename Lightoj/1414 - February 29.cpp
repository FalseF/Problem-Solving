
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
#define                        sf2(a,b)                          scanf("%lld%lld",&a,&b)
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
bool leep(ll n)
{
    if((n%4==0 && n%100!=0)|| (n%400==0)) return true;
    else return false;
}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    ll ck=0,n,m,T,c=0,s=0,i,j,k,l;
    string m1,m2,cm1,cm2;
    ll d1,d2,y1,y2;

     sf1(T);
     for(i=1;i<=T;i++)
    {
        cin>>m1>>d1>>cm1>>y1;
        getchar();
       cin>>m2>>d2>>cm2>>y2;
        getchar();
        ll ans=(y2/4+y2/400-y2/100)-(y1/4+y1/400-y1/100);
        if(leep(y1))
        {
            if(m1=="February" || m1=="January") ans++;
        }
        if(leep(y2))
        {
            if(((m2=="February") && d2<29) || (m2=="January"))ans--;
        }
        pc(i);
        pn(ans);
    }
     //sf1(n);
     //sf2(n,m);




return 0;
}

