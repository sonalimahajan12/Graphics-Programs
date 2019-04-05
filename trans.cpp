
#include<graphics.h>
#include<stdlib.h>
#include<stdio.h>

#include<iostream>

#include<math.h> 
using namespace std;
 

int x1,y1,x2,y2,x,y,x3,y3,x4,y4,ch;
void main()
{
  int gd = DETECT,gm,errorcode;
  initgraph(&gd,&gm,"c:\\tc\\bgi");
  errorcode = graphresult();
  if(errorcode!=grOk)
  {
    printf("Graphics error:%s\n",grapherrormsg(errorcode));
    printf("press any key to halt:");
    getch();
    exit(1);
  }
  do
  {
    clrscr();
    cout<<"  #############MAIN-ENU###############\n";
    cout<<"    SHEARING\n";
    cout<<"   1.LINE\n";
    cout<<"   2.RECTANGLE\n";
    cout<<"   3.TRINGLE\n";
    cout<<"enter your choice:0 for exit:\n";
    cin>>ch;
    switch(ch)
    {
      case 1:
      cout<<"enter the value of line coordinates:";
      cin>>x1>>y1>>x2>>y2;
      cout<<"enter the value of shearing for x-axis:";
      cin>>x;
      cout<<"enter the value of shearing for y-axis:";
      cin>>y;
      cleardevice();
      setcolor(4);
      line(x1,y1,x2,y2);
      cout<<"now hit a key to see shear in x_axis:";
      getch();
      setcolor(1);
      line(x1,y1,x2*x,y2);
      cout<<"\nnow hit a key to see shear in y_axis:";
      getch();
      setcolor(58);
      line(x1,y1,x2,y2*y);
      getch();
      break;
      case 2:
      cout<<"enter the top left coordinates:";
      cin>>x1>>y1;
      cout<<"enter the bottom right coordinates:";
      cin>>x2>>y2;
      cout<<"enter the value of shearing coordinates for x-shear:";
      cin>>x;
      cout<<"enter the value of shearing coordinates for y-shear:";
      cin>>y;
      cleardevice();
      setcolor(5);
      rectangle(x1,y1,x2,y2);
      cout<<"now hit a key to see shear in x_axis:";
      getch();
      setcolor(1);
      rectangle(x1,y1,x2+x*y2,y2);
      cout<<"\nnow hit a key to see shear in y_axis:";
      getch();
      setcolor(58);
      rectangle(x1,y1,x2,y2+y*x2);
      getch();
      break;
      case 3:
      cout<<"enter the coordinates of triangle:\n";
      cin>>x1>>y1>>x2>>y2;
      cin>>x3>>y3;
      cout<<"enter the value of shearing coordinates for x-shear:";
      cin>>x;
      cout<<"enter the value of shearing coordinates for y-shear:";
      cin>>y;
      cleardevice();
      setcolor(5);
      line(x1,y1,x2,y2);
      line(x1,y1,x3,y3);
      line(x3,y3,x2,y2);
      cout<<"\nnow hit a key to see shear in x_axis:";
      getch();
      setcolor(10);
      line(x1,y1,x2*x,y2);
      line(x1,y1,x3*x,y3);
      line(x3*x,y3,x2*x,y2);
      cout<<"\nnow hit a key to see shear in y_axis:";
      getch();
      setcolor(1);
      line(x1,y1,x2,y2*y);
      line(x1,y1,x3,y3*y);
      line(x3,y3*y,x2,y2*y);
      getch();
      break;
      case0:break;
      default:cout<<"invalid choice";break;
    }}while(ch!=0);
    closegraph();
    getch();
}

