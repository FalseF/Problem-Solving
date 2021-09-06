
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
//ll A[10000000],C[10000000],D[10000000],visited[10000000],level[10000000];
int fx4[]={1,-1,0,0}; int fy4[]={0,0,1,-1};
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    ll ck=0,n,m,T,c=0,s=0,i,j,k,l,ans;
     sf1(T);
     for(i=1;i<=T;i++)
     {
         sf2(n,m);
         if(n==1){pc(i);pn(m);continue;}
         else if(m==1){pc(i);pn(n);continue;}
         else if(n==2 || m==2)
         {
             if(n==2) ans=m;
             else if(m==2) ans=n;
             if(ans%4==1) ans++;
             else if(ans%4==2) ans+=2;
             else if(ans%4==3) ans+=1;

         }
         else if((n*m)%2==0) ans=(n*m)/2;
         else if ((n*m)%2!=0) ans=(m*n)/2+1;
         pc(i);
         pn(ans);
    }
     //sf1(n);
     //sf2(n,m);




return 0;
}
