#include<stdio.h>
#include<conio.h>
//huge pointer can access to all memory address

void main()
{
  //replace near with huge here
int huge *p;
int x=200;
clrscr();
p=&x;
printf("\nThe size of huge pointer is %d byte",sizeof(p));
printf("\nThe Memory Address %Fp",p);
  //%Fp print the segment of certain address of variable
  //printed: The size of huge pointer is 4 byte
  //The memory address 8FDC:FFF0
getch();
}
