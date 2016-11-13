#include<stdio.h>
#include<conio.h>
/*
ASCII stands for American Standard Code for information interchange
0-255
 
*/
void main()
{
int i;
for(i=1;i<255;i++)
{
printf("\n The ASCII Value of \t %c is %d",i,i);
getch();
//%c is for printing out
//%d is for printing out the value
}
}
