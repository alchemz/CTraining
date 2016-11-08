/*Demonstrate the malloc() function*/
//dynamic memory allocation
/*
stack: store local variables
heap: dynamic memory allocation
data : store global static variables
code: store all instructions

four functions:
malloc(); eg ptr=(data-type *)malloc(byte-size wanted)
calloc();
realloc();
free();
use stdlib.h
*/
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>

void main()
{
int a,i,*p; 
clrscr();
printf("Enter the size of array!");
scanf("%d",&a);//store the array size with a

p=(int *)malloc(a*sizeof(int));// eg ptr=(data-type *)malloc(byte-size wanted)
  //two bytes for integer, int return 2

if(p==NULL)
{
printf("The Memory Allocation fails!");
}
//use for loop to fill the array
for(i=0;i<a;i++)
{
printf("Enter value for p[%d]",i);
scanf("%d",&p[i]);//store values to the allocated memory
}
//use for loop to print out the memory address
for(i=0;i<a;i++)
{
printf("\n Value %d Memory address %u",p[i],&p[i]);
  //print out the memory address
  /*
  Enter!: 2
  Enter for p[0]: 12
  p[1]:14
  
  value 12 memory address 1942
  value 14 memory address 1944
  //2 bytes distance
  */
}

getch();

}
