#include<stdio.h>
#include<conio.h>
#include<graphics.h>

void main(0
{
int i, gd=DETECT, gm;
initgraph(&gd, &gm, "C:\\turboc3\\bgi");
clrscr(0;
cleardevice();
setbkcolor(1);
setcolor(7);
rectangle(99,99,501,121);
rectangle(98,98,502,122);
for(i=0;i<200;i++)
{
setfillstyle(1,2);
sound(99);
bar(100,100,300+i,120);
delay(15);
}
nosound();
getch();
}
