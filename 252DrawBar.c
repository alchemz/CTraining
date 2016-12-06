#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

void main()
{
int gd=DETECT, gm;
initgraph(&gd, &gm, "C:\\turboc3\\bgi");
setfillstyle(3,3);
bar(350,50,250,150);
getch();
closegraph();
}
