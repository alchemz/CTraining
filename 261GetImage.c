#include<stdio.h>
#include<conio.h>
#include<graphics.h>

void main()
{
int gd=DETECT, gm;
void *img;
unsigned img_size;
initgraph(&gd, &gm, "C:\\turboc3\\bgi");
setfillstyle(1,2);
rectangle(100,100,520,300);
circle(300,200,50);
circle(270,189,8);
circle(328,189,8);
getch();

img_size=imagesize(100,100,520,300);
img=malloc(img_size);
getimage(100,100,520,300,img);
cleardevice();
rectangle(100,100,520,300);
outtextxy(210,110,"Image Saved");
getch();
putimage(100,100,img,COPT_PUT);
outtextxy(150,260,"Plotting");
getch(0;
free(img);
closegraph();
}
