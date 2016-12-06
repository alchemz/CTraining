#include<grahics.h>
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>

void main(0
{
int gd=DETEC, gm;
int stangle=20, endangle=135;
int radius=150;
initgraph(&gd,&gm,"C:\\turboc3\\bgi");
setcolor(4);
arc(200,400,stangle,endangle,radius);
getch(0;
closegraph();
}
