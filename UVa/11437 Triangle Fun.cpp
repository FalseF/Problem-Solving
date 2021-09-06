

                  /*########  IN THE NAME OF ALLHA   ##########*/
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
ll A[300005],C[300005],D[300005],visited[300005],level[300005];
int fx4[]={1,-1,0,0}; int fy4[]={0,0,1,-1};
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    ll ck=0,n,m,T,c=0,s=0,i,j,k,l;
    double ax,ay,bx,by,cx,cy,ex,ey,fx,fy,dx,dy,ac,be,bc,ab,af,cf,ec,ad,bd,S1,S2,S3,A1,A2,A3,A,SS;

     sf1(T);
     for(i=0;i<T;i++)
    {
        cin>>ax>>ay>>bx>>by>>cx>>cy;
        ac=sqrt((ax-cx)*(ax-cx)+(ay-cy)*(ay-cy));
        ab=sqrt((ax-bx)*(ax-bx)+(ay-by)*(ay-by));
        bc=sqrt((bx-cx)*(bx-cx)+(by-cy)*(by-cy));
        SS=(ac+bc+ab)/2.0;
        A=sqrt(SS*(SS-bc)*(SS-ac)*(SS-ab));


        ec=ac/3.0;
        bd=bc/3.0;
        af=ab/3.0;

        ex=(ax+2.0*cx)/3.0;
        ey=(ay+2.0*cy)/3.0;
        be=sqrt((bx-ex)*(bx-ex)+ (by-ey)*(by-ey));
        S1=(bc+be+ec)/2.0;
        A1=sqrt(S1*(S1-bc)*(S1-be)*(S1-ec));



         fx=(ax+2.0*bx)/3.0;
        fy=(ay+2.0*by)/3.0;
        cf=sqrt((cx-fx)*(cx-fx)+ (cy-fy)*(cy-fy));
        S2=(ac+af+cf)/2.0;
        A2=sqrt(S2*(S1-cf)*(S2-ac)*(S2-af));


         dx=(cx+2.0*bx)/3.0;
        dy=(cy+2.0*by)/3.0;
        ad=sqrt((ax-dx)*(ax-dx)+ (ay-dy)*(ay-dy));
        S3=(ad+bd+bc)/2.0;
        A3=sqrt(S3*(S3-ad)*(S3-ab)*(S3-bd));


    ll result=int(A-(A1+A2+A3));
    cout<<result<<endl;



    }


return 0;
}

