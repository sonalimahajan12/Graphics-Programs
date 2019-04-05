#include<iostream>
#include<graphics.h>

using namespace std;

int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,NULL);
        for(int i=0;i<50;i++)
        {
            circle(200+i,100,10);
            circle(250+i,100,10);
            line(200+i,100,250+i,100);
            line(50+i,50,250+i,100);
            line(50+i,50,200+i,100);
            delay(100);
            cleardevice();
        }
    closegraph();
    return 0;
}
