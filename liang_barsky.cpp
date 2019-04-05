#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;

int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,NULL);
	float xwmin=100,xwmax=250,ywmin=100,ywmax=250;
	float x1=50,y1=150,x2=300,y2=300;
	float xx1,yy1,xx2,yy2;
	float dx=x2-x1;
	float dy=y2-y1;
	float t1=0,t2=1,p[4],q[4];
	
	p[0]=-dx,p[1]=dx,p[2]=-dy,p[3]=dy;
	q[0]=x1-xwmin;
	q[1]=xwmax-x1;
	q[2]=y1-ywmin;
	q[3]=ywmax-y1;
	
	rectangle(xwmin,ywmin,xwmax,ywmax);
	line(x1,y1,x2,y2);
	delay(2000);
	cleardevice();
	
	for(int i=0;i<4;++i)
	{
		if(p[i]<0)
		{
			t1=max(t1,q[i]/p[i]);
		}
		else if(p[i]>0)
		{
			t2=min(t2,q[i]/p[i]);
		}
	}
	if(t1!=0)
	{
		xx1=x1+t1*dx;
		yy1=y1+t1*dy;
	}
	else
	{
		xx1=x1;
		yy1=y1;
	}
	if(t2!=1)
	{
		xx2=x1+t2*dx;
		yy2=y1+t2*dy;
	}
	else
	{
		xx2=x2;
		yy2=y2;
	}
	cout<<xx1<<" "<<yy1<<" "<<xx2<<" "<<yy2;
	rectangle(xwmin,ywmin,xwmax,ywmax);
	line(xx1,yy1,xx2,yy2);
	delay(1000);
	getch();
	closegraph();
	return 0;
}
