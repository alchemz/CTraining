//file folder protection software
#include<stdio.h>
#include<conio.h>
#include<dos.h>

void main()
{
	int i;
	char s[]={"#FILE/FOLDER PROTECTION SOFTWARE!"};
	clrscr();
	gotoxy(14,5);
	textcolor(2);
	cprintf("_________________________________________"); //print the line in green color
	gotoxy(14,6);
	cprintf("_________________________________________");
	gotoxy(14,10);
	cprintf("_________________________________________")
	gotoxy(18,8);
	textcolor(10);
	//reads each character from the s string until reaches end
	for(i=0;s[i]!='\0';i++)
	{
		_setcursortype(1); 
		cprintf("%c",s[i]);
		delay(50);
		sound(1500);
		delay(50);
		nosound();
	}

	//next step provide options
	textcolor(2);
	gotoxy(22,12);
	cprintf("1:HIDE A FILE/FOLDER");
	gotoxy(22,14;
	cprintf("2:SHOW A FILE/FOLDER");
	gotoxy(22,16);
	cprintf("3:HELP");

	gotoxy(10,24);
	cprintf("Designed & developed at code offline.com copyright 2015")
	gotoxy(16,18);
	cprintf("ENTER YOUR CHOICE:->>");
	getch();	

}
