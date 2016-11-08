#include<stdio.>
#inclue<conio.h>

void Hello();
void Bye();
#pragma startup Hello
#pragma exit Bye

void main()
{
delay(1000);
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
