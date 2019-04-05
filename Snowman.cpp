#include <graphics.h> 
#include<iostream>
using namespace std;
void boundaryFill4(int x, int y, int fill_color,int boundary_color)
{
    if(getpixel(x, y) != boundary_color && getpixel(x, y) != fill_color)
    {
        putpixel(x, y, fill_color);
        boundaryFill4(x + 1, y, fill_color, boundary_color);
        boundaryFill4(x, y + 1, fill_color, boundary_color);
        boundaryFill4(x - 1, y, fill_color, boundary_color);
        boundaryFill4(x, y - 1, fill_color, boundary_color);
    }
}
/*
int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,NULL);
	
	setbkcolor(6);
	
	
	rectangle(70,200,250,100);
	boundaryFill4(70,201,0,15);
	
	circle(100,220,20);
	floodfill(100,220,CYAN);
	circle(220,220,20);
	floodfill(220,220,CYAN);
	delay(8000);
	closegraph();
}
*/
int main()
{
int gd=DETECT,gm,x0=100, y0=200, x1=100, y1=200;
initgraph(&gd,&gm,NULL);
circle(180,200,5);
circle(210,200,5);

ellipse(200,200,0,360,50,25);

ellipse(200,270,0,360,75,50);
boundaryFill4(205,270,15,15);
line(340,300,270,245);

line(135,250,40,280);
ellipse(215,385,0,360,120,80);
boundaryFill4(200,205,15,15);
boundaryFill4(205,270,15,15);
boundaryFill4(215,370,15,15);
delay(8000);
	closegraph();
}

/*
int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,NULL);
	/*line(200,200,300,100);
	line(300,100,400,200);
	line(400,200,300,300);
	line(300,100,300,300);
	line(259,241,281,301);*/
/*line(100,100,50,180);
line(100,100,150,180);
line(50,180,100,250);
line(150,180,100,250);
line(100,100,100,250);
line(50,180,150,180);
line(100,250,70,300);
line(100,250,130,300);
line(70,300,130,300);


setcolor(4);*/
	/*int x=getmaxx()/2;
	int y=getmaxy()/2;
	for(int i=30;i<300;i++)
	{
		delay(100);	
		setcolor(i/15);
		arc(x,y,0,180,i+10);
	}*/
/*
	setcolor(RED);
	circle(140,100,40);

	floodfill(140,100,RED);
	
	line(0,210,655,210);
	
	lineto(130,210);
	floodfill(130,210,GREEN);
setcolor(WHITE);
	line(130,210,300,2);

	line(300,00,510,210);

	line(510,210,639,2);
	setcolor(GREEN);
	//tree

	circle(65,290,10);
	floodfill(65,290,GREEN);
	circle(86,290,10);
	floodfill(86,290,GREEN);
	circle(76,276,10);
	floodfill(76,276,GREEN);
	
	rectangle(90,299,60,450);
	floodfill(91,61,BROWN);
	setcolor(MAGENTA);
	circle(265,290,10);
	circle(286,290,10);
	circle(276,276,10);
	
	rectangle(285,300,260,450);
	
	circle(465,290,10);
	circle(486,290,10);
	circle(476,276,10);
	rectangle(465,301,490,450);
	//rectangle();
	delay(10000);
	closegraph();
}*/
/*
int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,NULL);
	int mx=getmaxx()/2;
	int my=getmaxy()/2;

	setcolor(CYAN);
	rectangle(95,120,100,500);
	floodfill(96,121,CYAN);


	setcolor(RED);
	rectangle(100,100,450,150);
	floodfill(101,101,RED);
	
	setcolor(WHITE);
	rectangle(100,150,450,200);
	floodfill(101,151,WHITE);


	setcolor(BLACK);
	//circle(270,180,20);
	pieslice(270,180,0,75,20);
	setcolor(MAGENTA);
	pieslice(270,180,75,150,20);
	setcolor(GREEN);
	pieslice(270,180,150,225,20);setcolor(BLACK);
	pieslice(270,180,225,300,20);setcolor(YELLOW);
	pieslice(270,180,300,360,20);setcolor(CYAN);
	
	setcolor(GREEN);
	rectangle(100,200,450,250);
	floodfill(101,201,GREEN);
	
	delay(4000);
	closegraph();
}
/*
int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,NULL);
	for(int i=190;i<510;i++)
	{
		delay(30);
		line(i,210,i,230);
	}
	delay(3000);
	closegraph();
}
/*
int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,NULL);
	setcolor(CYAN);
	circle(150,200,100);
	boundaryFill4(150,200,6,CYAN);
	circle(130,140,5);
	circle(189,140,5);
	arc(175,190,160,200,20);	
	arc(135,159,50,100,100);
	delay(3000);
	closegraph();
}
/*
int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,NULL);
	setcolor(RED);
	circle(200,300,100);
	floodfill(200,300,4);
	setcolor(CYAN);
	circle(200,300,90);
	boundaryFill4(200,300,3,CYAN);
	setcolor(YELLOW);
	
	circle(200,300,80);
	boundaryFill4(200,300,2,YELLOW);
	delay(3000);
	closegraph();
}

/*
int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,NULL);
int border_color=RED;

	rectangle(139,200,220,450);

	
	circle(180,260,30);
	boundaryFill4(180,260,4,WHITE);
	circle(180,330,30);
boundaryFill4(180,330,14,WHITE);
	circle(180,399,30);
boundaryFill4(180,399,2,WHITE);
	delay(3000);
	closegraph();
}

int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,NULL);
	
	int mx=getmaxx()/2;
	int my=getmaxy()/2;
setcolor(CYAN);
setbkcolor(RED);
	pieslice(mx,my,0,75,100);
setcolor(BLACK);
	pieslice(mx,my,75,150,100);
setcolor(MAGENTA);
	pieslice(mx,my,150,365,100);	
	delay(3000);
	closegraph();
}

int main() 
{ 
    int gd = DETECT, gm; 
    initgraph(&gd, &gm,NULL); 
	//head
	circle(190,150,50);
	circle(200,130,2);
	circle(180,130,2);
	arc(200,130,70,-10,40);
	line(165,200,165,240);
	line(205,200,205,240);
	rectangle(140,239,235,310);
	line(235,245,320,300);
	line(145,255,320,270);
	rectangle(150,310,170,360);
	rectangle(200,310,220,360);
    delay(4000); 
    closegraph(); 
    return 0; 
} */
