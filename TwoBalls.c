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
int x1=0,y1=0,x2=640,y2=480,dn1=1,rt1=1,dn2=0,rt2=0,n=20;
initgraph(&gd,&gm,"C:/TC/BGI");
while(1)
  {
    l=(l+1)%20;
    fillcircle(x1,y1,n);
    fillcircle(x2,y2,n);
    setbkcolor(15);
    setcolor(8);
    setfillstyle(1,2);
    if(dn1) y1+=n;
    else y1-=n;
    if(y1==0||y1==480) dn1=(dn1+1)%2;
    if(rt1) x1+=n;
    else x1-=n;
    if(x1==0||x1==640) rt1=(rt1+1)%2;

    if(dn2) y2+=n;
    else y2-=n;
    if(y2==0||y2==480) dn2=(dn2+1)%2;
    if(rt2) x2+=n;
    else x2-=n;
    if(x2==0||x2==640) rt2=(rt2+1)%2;

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
    for(n=1;n<2*r;n++)
    {
      setcolor(l%15);
      l++;
      circle(x,y,n);
    }
  }
