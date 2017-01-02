/*
filestyle()
setbkcolor()
setfillstyle()
floodfill()
rectangle()
circle()
line()
putimage(x,y,buffer,XOR_PUT)
getimage(x,y,x,y,buffer)
imagesize()
buffer=imagesize()

*/

#include<stdio.h>

#include<graphics.h>

#include<stdio.h>

#include<conio.h>

#include<dos.h>

#include<stdlib.h>

void print_line();

void print_line2();

void main()

{

int gd=DETECT,gm,i,j,IMG1;

  //define an empty pointer
void *BUFFER1;

initgraph(&gd,&gm,"C:\\turboc3\\bgi");

cleardevice();

setbkcolor(2);

/*Drawing Brick*/

rectangle(0,0,60,22);

//fill blue color
setfillstyle(1,9);
//fill the region with the blue color
floodfill(2,2,15);

  //caculate the image size
IMG1=imagesize(0,0,60,22);

BUFFER1=malloc(IMG1);//allocate the image size

getimage(0,0,60,22,BUFFER1);
//XOR_PUT source image with the image already onscreen
putimage(0,0,BUFFER1,XOR_PUT);
//calculate the bricks position
for(j=0;j<180;j+=30)
//8 here is to make the bricks displayed at the center
for(i=8;i<600;i+=70)

{
putimage(i,30+j,BUFFER1,XOR_PUT);
}

/* Drawing the Paddle */

setcolor(6);

rectangle(80,445,180,460);

setfillstyle(1,15);

floodfill(82,447,6);

/*Drawing Ball */

setcolor(WHITE);

setfillstyle(1,12);

circle(350,350,10);

floodfill(350,350,WHITE);

print_line();

print_line2();

getch();

}

void print_line()

{
//background color
setcolor(WHITE);
//horizontal line
  
  //draw a larger stroke line
line(0,18,640,18);

line(0,19,640,19);

line(0,20,640,20);

line(0,21,640,21);

line(0,22,640,22);

}

void print_line2()

{

line(0,465,640,465);

line(0,466,640,466);

line(0,467,640,467);

line(0,468,640,468);

line(0,469,640,469);

}
