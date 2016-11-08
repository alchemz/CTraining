/*
Dynamic Memory Allocation
calloc();
ptr=(data-type)calloc(size, sizeof(byte wanted));
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
p=(int *)calloc(a,sizeof(int));
if(p==NULL)
{
printf("Memory Allocation Fails!");
}
for(i=0;i<a;i++)
{
printf("Enter value of p[i]",p[i]);
scanf("%d",&p[i]);
}
free(p);
for(i=0;i<a;i++)
{
printf("\n Vlaue %d Memory Address %u",p[i],&p[i]);
}
getch();
}
