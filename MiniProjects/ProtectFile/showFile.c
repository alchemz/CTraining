//show the file which is hidden by the software

//FFProtection_2.c
//_chmod() defined in io.h hiding folder 
//3 parameters a.path, b.0 or 1 c.DOS file attributes
//file folder protection software
#include<stdio.h>
#include<conio.h>
#include<dos.h>

void main()
{
	int i, test;
	char ch, FN[20];
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

	//receive from the keyboard
	ch=getch();

	if(ch==27);
	exit(1)； //terminate
	switch(ch)
	{
		case 1:
			clrscr();
			gotoxy(15,6);
			textcolor(2);
			cprintf("______________________________________________")
			gotoxy(15,7);
			cprintf("______________________________________________")
			gotoxy(15,12);
			cprintf("______________________________________________")
			gotoxy(17,9);
			cprintf("Enter file/folder name with correct path!");
			gotoxy(17,11);
			cprintf("$:");
			fflush(stdin); //clears previous memory to receive new data
			gets(FN); //file path

			test=_chmod(FN,1,FA_SYSTEM | FA_HIDDEN |FA_RDONLY);
			if(test==-1)
			{
				clrscr();
				gotoxy(19,9);
				sound(1000);
				delay(200);
				cprintf("Unable to hide file / folder!");
			}else{
				clrscr();
				gotoxy(19,9);
				cprintf("Operation executed successfully!");
			}

			nosound();
			break();
		case '2':
			clrscr();
			gotoxy(15,6);
			textcolor(2);
			cprintf("______________________________________________")
			gotoxy(15,7);
			cprintf("______________________________________________")
			gotoxy(15,12);
			cprintf("______________________________________________")
			gotoxy(17,9);
			cprintf("Enter file/folder name with correct path!");
			gotoxy(17,11);
			cprintf("$:");
			fflush(stdin); //clears previous memory to receive new data
			gets(FN); //file path

			test=_chmod(FN,1,0); //remove all attributes
			if(test==-1)
			{
				clrscr();
				gotoxy(19,9);
				sound(1000);
				delay(200);
				cprintf("Unable to show file / folder!");
			}else{
				clrscr();
				gotoxy(19,9);
				cprintf("Operation executed successfully!");
			}

			nosound();
			break;
	}

	getch();	

}
