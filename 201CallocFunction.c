/*
Dynamic Memory Allocation
calloc();
ptr=(data-type)calloc(enteredsize, sizeof(byte wanted));
*/
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>

void main()
{
int a,i,*p;
clrscr();
printf("Enter the array size");
scanf("%d",&a);
  //p=(int *)calloc(a*sizeof(int));
  //allocate with some gabage space
p=(int *)calloc(a,sizeof(int));

  //no entered value, 0 stored
if(p==NULL)
{
printf("Memory Allocation Fails!");
}
  
  //enter and store values
for(i=0;i<a;i++)
{
printf("Enter value of p[i]",p[i]);
scanf("%d",&p[i]);
}
  
free(p);
  //free the allocated memory 
  
for(i=0;i<a;i++)
{
printf("\n Vlaue %d Memory Address %u",p[i],&p[i]);
}
getch();
}
