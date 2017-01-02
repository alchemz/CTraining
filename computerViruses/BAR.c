//BAR.c
//a screen killer
#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

void main()
{
	int gd= DETECT, gm;
	initgraph(&gd, &gm, "C:\\turboc3\\bgi");
	setfillstyle(2,2);
	bar(350,50,250,150);
	getch();
	closegraph();
}
