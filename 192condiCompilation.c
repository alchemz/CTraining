#include<stdio.h>
#include<conio.h>
#define WINDOWS
#undef WINDOWS

void main()
{
clrscr();
#ifndef WINDOWS
printf("This code is for WINDOWS PC");
#endif
getch();
}
