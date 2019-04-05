#include<iostream>
#include<graphics.h>
using namespace std;
void translater(int p[][2],int t[])
{
	rectangle(p[0][0],p[0][1],p[1][0],p[1][1]);
	p[0][0]=p[0][0]+t[0];
	p[0][1]=p[0][1]+t[1];
	p[1][0]=p[1][0]+t[0];
	p[1][1]=p[1][1]+t[1];
	rectangle(p[0][0],p[0][1],p[1][0],p[1][1]);
}

int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,NULL);
	int p[2][2]={200,250,300,350};
	int t[2]={50,100};
	translater(p,t);
	delay(4000);
	closegraph();
}
