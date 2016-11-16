#include<stdio.h>
#include<conio.h>

void main()
{
char fat *ptr=(char *)0xB8000000;
*ptr='C';
*(ptr+1)=4;
getch();
}
