

                  /*########  PRAISE TO BE GOD  ##########*/
#include <bits/stdc++.h>
#include<cstdio>
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
#define                        r0                                return 0
#define                        r1                                return
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
ll A[10010];
ll ans[10010];
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    ll ck=0,n,m,T,c=0,s=0,i,j,k,l;
    char ch;
    while(cin>>k)
    {
        ch=1;
        for(i=0;ch!='\n';i++)
        {
            scanf("%lld%c",&A[i],&ch);

        }
        ans[0]=A[0];
        for(j=1;j<i;j++)
        {
            ans[j]=A[j]+k*ans[j-1];
        }
        printf("q(x): ");
        for(j=0;j<i-1;j++){ printf(" %lld",ans[j]);}
       printf("\nr = %lld\n\n",ans[i-1]);

    }





return 0;
}


