#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<graphics.h>

void detect_mouse();
void show_mouse();
union REGS int,out;

void main()
{
detect_mouse();
show_mouse();
getch();
}

void detect_mouse()
{
int.x.ax=0;
int86(0x33,&in,&out);
if(out.x.ax==0)
printf("Mouse failed to initialize!");
else
printf("Mouse is initialized sucessfully!");
}

void show_mouse()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\turboc3\\bgi");
in.x.ax=1;
int86(0x33,&in,&out);
}
