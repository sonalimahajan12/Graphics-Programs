#include<stdio.h>
#include<graphics.h>
#include<stdlib.h>
int main()
{
    int gd=DETECT,gm;
    int x1,y1,x2,y2,x3,y3;
    char a;

    initgraph(&gd,&gm,NULL);

    x1=100;y1=100;x2=200;y2=100;x3=150;y3=200;

    line(x1,y1,x2,y2);
    line(x2,y2,x3,y3);
    line(x3,y3,x1,y1);
    delay(500);
    cleardevice();
    line(320,0,320,430);
    line(0,240,640,240);

    
    y1+=240;y2+=240;y3+=240;
    x1+=320;x2+=320;x3+=320;
    line(x1,y1,x2,y2);
    line(x2,y2,x3,y3);
    line(x3,y3,x1,y1);
    delay(4000);
    cleardevice();

    //getch();
    closegraph();
    return 0;
}

