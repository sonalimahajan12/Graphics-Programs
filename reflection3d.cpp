#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;
int main()
{
 int gd=DETECT,gm;
 initgraph(&gd,&gm,NULL);
 int maxx=getmaxx();
 int maxy=getmaxy();
 int midx=maxx/2;
 int midy=maxy/2;

 line(midx,0,midx,maxy);
 line(0,midy,maxx,midy);

  cout<<midx<<" "<<midy<<" "<<maxx<<" "<<maxy<<endl;
  int x1=350,y1=100,x2=450,y2=100,x3=450,y3=180,x4=350,y4=180;
  int x=50,y=50;
   int xx1=x1+x, xx2=x2+x, xx3=x3+x, xx4=x4+x, yy1=y1+y, yy2=y2+y, yy3=y3+y, yy4=y4+y;
    outtextxy(x1,y1,"(X,Y)");
    line(x1,y1,x2,y2);
    line(x2,y2,x3,y3);
    line(x3,y3,x4,y4);
    line(x4,y4,x1,y1);
    
    line(xx1,yy1,xx2,yy2);
    line(xx2,yy2,xx3,yy3);
    line(xx3,yy3,xx4,yy4);
    line(xx4,yy4,xx1,yy1);
  
    line(x1,y1,xx1,yy1);
     line(x2,y2,xx2,yy2);
      line(x3,y3,xx3,yy3);
       line(x4,y4,xx4,yy4);
      
  outtextxy(30,30,"REFLECTION about Y axis");
    
       x=midx;
       x1-=x;
       x1=midx-x1;
       x2-=x;
        x2=midx-x2;
       x3-=x;
        x3=midx-x3;
       x4-=x;
        x4=midx-x4;
  
       xx1-=x;
        xx1=midx-xx1;
       xx2-=x;
        xx2=midx-xx2;
       xx3-=x;
        xx3=midx-xx3;
       xx4-=x;
         xx4=midx-xx4;
   outtextxy(x1,y1,"(X,Y)");
    line(x1,y1,x2,y2);
    line(x2,y2,x3,y3);
    line(x3,y3,x4,y4);
    line(x4,y4,x1,y1);
    
    line(xx1,yy1,xx2,yy2);
    line(xx2,yy2,xx3,yy3);
    line(xx3,yy3,xx4,yy4);
    line(xx4,yy4,xx1,yy1);
  
    line(x1,y1,xx1,yy1);
     line(x2,y2,xx2,yy2);
      line(x3,y3,xx3,yy3);
       line(x4,y4,xx4,yy4);
  
     delay(2000);
return 0;
}

