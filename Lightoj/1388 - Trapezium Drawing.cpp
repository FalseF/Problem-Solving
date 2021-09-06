#include<bits/stdc++.h>
using namespace std;
#include <stdio.h>
#include <math.h>
void Deal ()
{
	double ax,bx,ay,by,b,c,d;
	double cx,cy,dx,dy;
	double x,y,z,AC;
	double sinalpha,cosalpha,temp;
	bool flag=false;
	scanf("%lf%lf%lf%lf%lf%lf%lf",&ax,&ay,&bx,&by,&b,&c,&d);
	x=bx-ax;
	y=by-ay;
	AC=sqrt(x*x+y*y);
	cout<<AC<<endl;
	sinalpha=y/AC;
	cosalpha=x/AC;
	x=d;
	z=b;
	y=AC-c;
	double p=(x+y+z)/2;
	double s=sqrt(p*(p-x)*(p-y)*(p-z));
	if (z*z > x*x+y*y)
		flag=true;
	double h=2.0*s/y;
	temp=fabs(x*x-h*h);
	temp=sqrt(temp);
	cout<<h<<endl;
	if (flag)
		temp=-temp;

	x=temp;y=h;
	cx=x*cosalpha-y*sinalpha+ax;
	cy=x*sinalpha+y*cosalpha+ay;

	x=temp+c;y=h;
	dx=x*cosalpha-y*sinalpha+ax;
	dy=x*sinalpha+y*cosalpha+ay;

	printf("%.8lf %.8lf %.8lf %.8lf\n",dx,dy,cx,cy);
}

int main ()
{
	int T;
	scanf("%d",&T);
	for (int cas=1;cas<=T;cas++)
	{
		printf("Case %d:\n",cas);
		Deal ();
	}
	return 0;
}

