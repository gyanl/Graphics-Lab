#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<stdlib.h>
#include<stdio.h>

void fillcircle(int, int, int);
int l;
void main()
{
int gd=DETECT,gm,i;
char c;
int n=20;
initgraph(&gd,&gm,"C:/TC/BGI");
for(n=0;n<1000;n++)
   {
    fillcircle(320,240,n);
    setbkcolor(n+1%15);
    setcolor(8);
    setfillstyle(1,2);

    delay(10);
    clrscr();
  }
getch();
cleardevice();
closegraph();
}

void fillcircle(int x, int y, int r)
  {
    int n;
    for(n=1;n<2*r;n++)
    {
      setcolor(l%15);
      l++;
      circle(x,y,n);
    }
  }
