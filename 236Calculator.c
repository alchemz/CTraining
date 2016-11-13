#include<stdio.h>
#include<conio.h>

void main()
{
char ch;
int a,b;
clrscr();
printf("\nEnter A for Addition");
printf("\nEnter S for Substraction");
printf("\nEnter M for Multiplication");
printf("\nEnter D for Division");
printf("\nEnter yourb choice");
scanf("%c",&ch);
switch()
{
case 'A':
        printf("\n Enter any two values");
        scanf("%d %d",&a,&b);
        a=a+b;
        printf("\nThe addition of two numbers is %d",a);
        break;
case 'S':
       printf("\n Enter any two values");
        scanf("%d %d",&a,&b);
        a=a-b;
        printf("\nThe substraction of two numbers is %d",a);
        break;
case 'M':
       printf("\n Enter any two values");
        scanf("%d %d",&a,&b);
        a=a*b;
        printf("\nThe multiplication of two numbers is %d",a);
        break;
case 'D':
       printf("\n Enter any two values");
        scanf("%d %d",&a,&b);
        a=a/b;
        printf("\nThe division of two numbers is %d",a);
        break;
default:
        printf("\nYou Enter a wrong choice!");
        break;

}
getch();
}
