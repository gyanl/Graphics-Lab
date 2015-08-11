#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<stdlib.h>
#include<stdio.h>

void fillcircle(int, int, int);
void fillrect(int, int, int, int);
void makebus(int,int);

void main()
{
int gd=DETECT,gm,i;
char c;
int x,y;
initgraph(&gd,&gm,"C:/TC/BGI");
x=320;y=245;
while(1)
  {
    setbkcolor(15);
    setcolor(8);
    setfillstyle(1,2);
    line(0,255,640,255);
    makebus(x,y);
    c=getch();
    if(c=='K') x-=2;
    if(c=='M') x+=2;
    if(c=='H') y-=2;
    if(c=='P') y+=2;
    if(c=='e') break;
    delay(30);
    clrscr();
  }
getch();
cleardevice();
closegraph();
}

void fillcircle(int x, int y, int r)
  {
    int n;
    for(n=1;n<r;n++)
    {
      circle(x,y,n);
    }
  }

void fillrect(int x, int y, int a, int b)
  {
    int n;
    if(x>a)
    {
    for(n=1;n<x-a;n++)
     {
      rectangle(x,y,a,b);
      y++;
      b--;
     }
    }
     else
     {
     for(n=1;n<a-x;n++)
      {
      rectangle(x,y,a,b);
      y--;
      b++;
      }
     }
}

void makebus(int x1,int y1)
{
int x,y,z,w,p;
x=x1;
y=y1;
fillcircle(x-40,y,12);
fillcircle(x+40,y,12);
rectangle(x-75,y,x+75,y-60); //bus
rectangle(x-10,y-30,x-25,y); //door
x=x+40;y=y-35;z=x+30;w=y-22;
for(p=0;p<5;p++)
{
 rectangle(x,y,z,w);  //windows
 x-=28;z-=28;
}

}
