#include<stdio.h>
#include<conio.h>

void main()
{
  //bit pattern for 32: 100000
int a=32, b;
//use 32 to check 5th bit
clrscr();
b=a|1;
  //turn on the first bit
  //100001 33
printf("%d",b);
b=a|2;
  //turn on the second bit
  //100010 34
printf("%d",b);
getch;
}
