#include<stdio.h>
#include<conio.h>

void main()
{
int a=32;
  //bit pattern 100000
clrscr();
a=a^4;
  //first turn on the third bit
  //36
printf("\n%d",a);
a=a^4;
  //then turn off the third bit
printf("\n%d",a);
getch();
}
