#include<stdio.h>
#include<conio.h>

void main()
{
int huge *p;
int x=200;
clrscr();
p=&x;
printf("\nThe size of huge pointer is %d byte",sizeof(p));
printf("\nThe Memory Address %Fp",p);
getch();
}
