#include<stdio.h>
#include<conio.h>
#include<dos.h>
/*
left shift
right shift
Byte address 0x417
*/
void main()
{
char far*key;
/*The key is pointing to memory address 0x417 where is monitors the status
of toggle keys where they are on/off*/;
key=(char far*)0x417;//point to a address

while(1)
{
clrscr();
printf("\nPress ALT key to quit");
if(*key&1)
  //1&1=1 both bits are 1 so it returns 1
printf("\nRight shift is pressed");
if(*key&2)
printf("\nLeft shift is pressed");
if(*key&4)
printf("\nCtrl Lock is pressed");
/*
Setting this key to quit when alt key is pressed;
*/
if(*key&8)
break;
if(*key&16)
printf("\nScroll lock is activated");
if(*key&32)
printf("\nNum lock is activated");
if(*key&64)
printf("\nCaps lock is activated");
if(*key&128)
printf("\nInset is activated");
delay(99);
}
}
