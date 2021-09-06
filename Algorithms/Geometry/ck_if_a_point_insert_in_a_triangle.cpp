#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
double area(int x1, int y1, int x2, int y2, int x3, int y3)
{
    double a=abs((x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2))/2.0);
    return a;
}
int main()
{
    int x1,x2,x3,y1,y2,y3;
    int p1,p2;
    while(1){
    cin>>x1>>y1>>x2>>y2>>x3>>y3;
    double area_of_big_triangle=area(x1,y1,x2,y2,x3,y3);
    cin>>p1>>p2;
    p2+=y1;
    double are1_1=area(p1,p2,x2,y2,x3,y3);
    double are1_2=area(x1,y1,p1,p2,x3,y3);
    double are1_3=area(x1,y1,x2,y2,p1,p2);
    double Sum=are1_1+are1_2+are1_3;
    if(Sum==area_of_big_triangle) cout<<"the point lies inside"<<endl;
    else cout<<"no inside"<<endl;}
return 0;
}

