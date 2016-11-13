#include<stdio.h>
#include<conio.h>

void main()
{
char ch;
int a,b;
clrscr();
printf("\nEnter 1 for Addition");
printf("\nEnter 2 for Substraction");
printf("\nEnter 3 for Multiplication");
printf("\nEnter 4 for Division");
printf("\nEnter yourb choice");
scanf("%c",&ch);
switch()
{
case '1':
        printf("\n Enter any two values");
        scanf("%d %d",&a,&b);
        a=a+b;
        printf("\nThe addition of two numbers is %d",a);
        break;
case '2':
       printf("\n Enter any two values");
        scanf("%d %d",&a,&b);
        a=a-b;
        printf("\nThe substraction of two numbers is %d",a);
        break;
case '3':
       printf("\n Enter any two values");
        scanf("%d %d",&a,&b);
        a=a*b;
        printf("\nThe multiplication of two numbers is %d",a);
        break;
case '4':
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
