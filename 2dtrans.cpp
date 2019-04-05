#include<stdio.h>
#include<iostream>
#include<bits/stdc++.h>
#include<graphics.h>
#include<math.h>
#define PI 3.14

using namespace std;

//translation
void translation(int tx,int ty)
{

   line(100+tx,100+ty,310+tx,100+ty);
   line(100+tx,300+ty,310+tx,300+ty);
   line(100+tx,100+ty,100+tx,300+ty);
   line(310+tx,300+ty,310+tx,100+ty);
   delay(1000);
   cleardevice();
}
   
   //Scaling
void scaling(int sx,int sy)
{

   //int sx,sy;
 
   line(100*sx,100*sy,310*sx,100*sy);
   line(100*sx,300*sy,310*sx,300*sy);
   line(100*sx,100*sy,100*sx,300*sy);
   line(310*sx,300*sy,310*sx,100*sy);
   delay(100);
   cleardevice();
}
   
   
   //Rotation
void rotation(float angle)
{
   //float angle;

   line(100*cos(angle)-100*sin(angle),100*cos(angle)+100*sin(angle),310*cos(angle)-100*sin(angle),310*sin(angle)+100*cos(angle));
   line(100*cos(angle)-300*sin(angle),300*cos(angle)+100*sin(angle),310*cos(angle)-300*sin(angle),310*sin(angle)+300*cos(angle));
   line(100*cos(angle)-100*sin(angle),100*cos(angle)+100*sin(angle),100*cos(angle)-300*sin(angle),100*sin(angle)+300*cos(angle));
   line(310*cos(angle)-300*sin(angle),300*cos(angle)+310*sin(angle),310*cos(angle)-100*sin(angle),310*sin(angle)+100*cos(angle));
   delay(4000);
   
 }  
   

int main()
{

int tx,ty,sx,sy,d;
float angle=PI/180;

int gd=DETECT,gm;
   
getch();

printf("Enter your choice\n 1.Rotation\n 2.Scaling\n 3.Translation\n");
   scanf("%d",&d);
   switch(d)
   {
      case 1: 
              printf("Enter rotation angle in float:");
              cin>>angle;
              initgraph(&gd,&gm,NULL);

              rotation(angle);
              break;
      case 2: 
              printf("Enter scaling vector");
              cin>>sx>>sy; 
              initgraph(&gd,&gm,NULL);
 
              scaling(sx,sy);
              break;
      case 3: 
              printf("Enter translation vector");
              cin>>tx>>ty;
              initgraph(&gd,&gm,NULL);

              translation(tx,ty);
              break;
   } 

   /*line(100,100,310,100);
   line(100,300,310,300);
   line(100,100,100,300);
   line(310,300,310,100);
   delay(1000);
   cleardevice();*/
 
delay(4000);
   closegraph();

 return 0;
}
   
