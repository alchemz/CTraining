#include<stdio.h>
#include<conio.h>

void main()
{
int near *p;
int x=200;
clrscr();
p=&x;
printf("The size of near pointer is %d",sizeof(p));
getch();
}
