#include<iostream>
#include<graphics.h>
using namespace std;
void findnewcoord(int s[][2],int p[][1])
{
	int temp[2][1]={0};
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<1;j++)
		{
			for(int k=0;k<2;k++)
			{
				temp[i][j]+=(s[i][k]*p[k][j]);
			}
		}
	}
	p[0][0]=temp[0][0];
	p[1][0]=temp[1][0];
}
void scale(int x[],int y[],int sx,int sy)
{
	line(x[0],y[0],x[1],y[1]);
	line(x[1],y[1],x[2],y[2]);
	line(x[2],y[2],x[0],y[0]);
	int s[2][2]={sx,0,0,sy};
	int p[2][1];
	for(int i=0;i<3;i++)
	{
		p[0][0]=x[i];
		p[1][0]=y[i];
		findnewcoord(s,p);
		x[i]=p[0][0];
		y[i]=p[1][0];
	}
	line(x[0],y[0],x[1],y[1]);
	line(x[1],y[1],x[2],y[2]);
	line(x[2],y[2],x[0],y[0]);
}
int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,NULL);
	 int x[] = { 100, 200, 300 }; 
    int y[] = { 200, 100, 200 }; 
	int sx=2,sy=2;
	scale(x,y,sx,sy);
	delay(4000);
	closegraph();
}
