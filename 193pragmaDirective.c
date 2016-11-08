#include<stdio.>
#include<conio.h>

void Hello();//delcare function
void Bye();
#pragma startup Hello //execute before main
#pragma exit Bye //execute after main
//#pragma warn rvl
//#pragma warn par
//#pragma warn rch
void main()
{
delay(1000);//execute hello first
gotoxy(12,14);
printf("\n Now I am inside main function!");
getch;
}

void Hello()
{
clrscr();
gotoxy(12,12);
printf("\n Hello I am executing before main()");
}
void Bye()
{
gotoxy(12,16);
printf("\n Hi I have executed after main()");
}
