/*Demonstrate the malloc() function*/
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>

void main()
{
int a,i,*p; 
clrscr();
printf("Enter the size of array!");
scanf("%d",&a);//store the array size with a

p=(int *)malloc(a*sizeof(int));//??

if(p==NULL)
{
printf("The Memory Allocation fails!");
}
//use for loop to fill the array
for(i=0;i<a;i++)
{
printf("Enter value for p[%d]",i);
scanf("%d",&p[i]);
}
//use for loop to print out the memory address
for(i=0;i<a;i++)
{
printf("\n Value %d Memory address %u",p[i],&p[i]);
}

getch();

}
