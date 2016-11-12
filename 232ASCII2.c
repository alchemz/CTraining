#include<stdio.h>
#include<conio.h>

void main()
{
char ch;
clrscr();
printf("Press Any key on keyboard");
ch=getch();
printf("\nAscii code=%d",ch);
if(ch==0)
{
ch=getch();
printf("\nscan code =%d",ch);
}
getch();
}
