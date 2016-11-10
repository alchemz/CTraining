#include<stdio.h>
#include<conio.h>
/*
Near pointer only access to data segment in row 8
*/
void main()
{
int near *p;
int x=200;
clrscr();
  //assign the x address to p
p=&x;
printf("The size of near pointer is %d",sizeof(p));
getch();
}
