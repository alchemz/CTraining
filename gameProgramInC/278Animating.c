/*
Blue brick hunter
*/

#include <stdio.h>
#include <graphic.h>
#include <stdio.h>
#include <conio.h>
#include <dos.h>
#include <stdlib.h>

void print_line();
void print_line2();

void main()
{
int gd=DETECT, gm;
int IMG1, IMG2, IMG3, x,y,i,j;
void *BUFFER1, *BUFFER2, *BUFFER3;
int x_axis=325, y_axis=325, ch, x_direction=-1; y_direction=-1,speed=15;

initgraph(&gd, &gm, "C:\\turboc3\\bgi");
cleardevice();
setbkcolor(2);

//draw bricks
rectangle(0,0,60,22);
setfillstyle(1,9);
floodfill(2,2,15);
IMG1=imagesize(0,0,60,22);
BUFFER1=malloc(IMG1);
getimage(0,0,60,22,BUFFER1);
putimage(0,0,BUFFER1,XOR_PUT);

//print bricks
for(int j=0; j<180; j+=30)
for(int i=8; i<600; i+=70)
{
putimage(i,30+j,BUFFER1, XOR_PUT);
}

//draw paddle
setcolor(6);
rectangle(80,445,180,460);
setfillstyle(1,15);
floodfill(82,447,6);
IMG2=imagesize(80,445,180,460);
BUFFER2=malloc(IMG2);
getimage(80,445,180,460,BUFFER2);

//draw ball
setcolor(white);
setfillstyle(1,12);
circle(350,350,10);
floodfill(350,350,WHITE);

IMG3=imagesize(340,340,360,360);
BUFFER3=malloc(IMG3);
getimage(340,340,360,360,BUFFER3);
putimage(340,340,BUFFER3,XOR_PUT);

  //animate the ball
  //infinite for loop, empty for loop
for(;;)
{
putimage(x_axis,y_axis,BUFFER3, XOR_PUT);
delay(speed);
 //with the delay, the continous ball movement is completed
putimage(x_axis,y_axis,BUFFER3, XOR_PUT);

x_axis=x_axis+(x_direction*2);
y_axis=y_axis+(y_direction*3);
if(x_axis+10-1>640)
{
x_direction*=-1;
x_axis=640-10+1;
}

if(x_axis<0)
{
x_direction*=-1;
x_axis=0;
}

if(y_axis+10-1>470)
{
cleardevice();
initgraph(&gd,&gm,"C:\\turboc3\\bgi");
outtextxy(200,200,"Hey you lose the game");
}

if(getpixel(x_axis,y_axis)==6)
{
sound(900);
delay(15);
nosound();
y_direction*=-1;
}
if(getpixel(x_axis,y_axis)==9)
{
sound(300);
delay(50);
nosound();
y_direction*=-1;
x=x_axis;
y=y_axis;
x=(x/70)*70+8;
y=(y/30)*30;
putimage(x,y,BUFFER1, XOR_PUT);
}

if(y_axis<0)
{
y_direction*=-1;
y_axis=0;
}
if(kbhit())
{
//free memory occupied by images
  //if not free the memory, the game will be stuck 
  //with any keyboard hit, it will terminate the program
free(BUFFER1);
free(BUFFER2);
free(BUFFER3);
closegraph();
exit(0);
}
}
}

void print_line()
{
setcolor(WHITE);
line(0,18,640,18);
line(0,19,640,19);
line(0,20,640,20);
line(0,21,640,21);
line(0,22,640,22);
}
void print_line2(){
line(0,465,640,465);
line(0,466,640,466);
line(0,467,640,467);
line(0,468,640,468);
line(0,469,640,469);
}
