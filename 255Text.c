#include<graphics.h>
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>

void main(0
{
int gd=DETECT, gm;
initgraph(&gd,&gm, "C:\\turboc3\\bgi");
setcolor(2);
settextstyle(1,0,4);
outtextxy(200,200,"Hello World!");
getch(0;
closegraph();
}
