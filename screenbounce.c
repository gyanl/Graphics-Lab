#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<stdlib.h>
#include<stdio.h>

void fillcircle(int, int, int);

void main()
{
int gd=DETECT,gm,i;
char c;
int x=0,y=0,dn=1,rt=1,n=5;
initgraph(&gd,&gm,"C:/TC/BGI");
while(1)
  {
    fillcircle(x,y,20);
    setbkcolor(15);
    setcolor(8);
    setfillstyle(1,2);
    if(dn) y+=n;
    else y-=n;
    if(y==0||y==480) dn=(dn+1)%2;
    if(rt) x+=n;
    else x-=n;
    if(x==0||x==640) rt=(rt+1)%2;
    delay(40);
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
