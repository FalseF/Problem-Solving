
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
double area(int x1, int y1, int x2, int y2, int x3, int y3)
{
    double a=abs((x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2))/2.0);
    return a;
}
int a[1000];
int main()
{
    //freopen("2.txt","w",stdout);
    int x1,x2,x3,y1,y2,y3;
    int p1,p2,T,N;
    cin>>T;
    for(int i=1;i<=T;i++){
            memset(a,-1,sizeof(a));
        cin>>x1>>y1>>x2>>y2;
        cin>>N;
    for(int j=0;j<N;j++){
    cin>>p1>>p2;
    if(p1>=x1 && p1<=x2 && p2>=y1 && p2<=y2) {a[j]=1;}
    }
    cout<<"Case "<<i<<":"<<endl;
    for(int j=0;j<N;j++)
    {
        if(a[j]==1) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    memset(a,-1,sizeof(a));
}
return 0;
}

