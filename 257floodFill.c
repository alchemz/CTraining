#include<graphics.h>
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>

void main()
{
int gd=DETECT, gm;
initgraph(&gd, &gm, "C:\\turboc3\\bgi");
setcolor(2);
circle(20,40,25);
setfillstyle(1,2);
floodfill(20,40,2);
getch(0;
closegraph();
}
