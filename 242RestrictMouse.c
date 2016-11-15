#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<graphics.h>

void detect_mouse();
void show_mouse();
void check_button_status();
void restrict_mouse();
union REGS in,out;
int x,y;
void main()
{
detect_mouse();
show_mouse();
restrict_mouse();
check_mouse_status();
getch();
}

void detect_mouse()
{
in.x.ax=0;
int86(0x33,&in,&out);
if(out.x.ax==0)
printf("Mouse failed to initialize!");
else
printf("Mouse is initialized sucessfull!");
}

void show_mouse()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\turboc3\\bgi");
in.x.ax=1;
int86(0x33,&in,&out);
}

void check_button_status()
{
while(!kbhit())
{
in.x.ax=3;
int86(0x33,&in,&out);
if(out.x.bx==1)
{
printf("\n Left Button is Pressed!");
x=out.x.cx;
y=out.x.dx;
printf("\n X=%d and y=%d",x,y);
}
if(out.x.bx==2)
printf("\n Right button is Pressed!");
delay(100);
}

void restric_mouse()
{
in.x.ax=7;
in.x.cx=100;
in.x.dx=400;
int86(0x33,&in,&out);
in.x.ax=8;
in.x.dx=400;
int86(0x33,&in,&out);
}
