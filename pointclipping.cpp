#include<stdio.h>
#include<graphics.h>
#include<bits/stdc++.h>
using namespace std;

void clipping(int x,int y,int xwmin,int ywmin,int xwmax,int ywmax)
{
  putpixel(0,30,RED);
  if(xwmin<=x && x<=xwmax && ywmin<=y && y<=ywmax)
   {
    printf("The point (%d,%d) is inside the viewing pane\n",x,y);
    putpixel(x,y,BLUE);
    }
  else
    printf("The point (%d,%d) is outside the viewing pane, hence clipped\n",x,y);

}

int main()
{
int gd = DETECT, gm;
initgraph(&gd,&gm,NULL);
int xwmin=10;
int xwmax=200;
int ywmin=10;
int ywmax=200;

rectangle(xwmin,ywmin,xwmax,ywmax);

clipping(0,30,xwmin,ywmin,xwmax,ywmax);
clipping(20,30,xwmin,ywmin,xwmax,ywmax);
clipping(20,300,xwmin,ywmin,xwmax,ywmax);
getch();
closegraph();
return 0;
}

