#include<stdio.h>
#include<conio.h>

void main()
{
char ch;
  //declare a character
clrscr();
printf("Press Any key on keyboard");
ch=getch();
printf("\nAscii code=%d",ch);
if(ch==0)
{
ch=getch();
  //return the corresponding scan code
printf("\nscan code =%d",ch);
}
getch();
  
  //press any key on keyboard ! F5
  //Ascii code=0
  //Scan code =60
}
