
#include<stdio.h>
#include<conio.h>

/*
Bitwise AND operator: &
X=A & 32
check the bit on/off
1-on
0-off
check from the right to left 5th is 0, off
65-1000001
32- 100000

bit number: n
value used to test 2^n
*/

void main()
{
int i=65,j;
clrscr();
printf("\n Vlaue of i=%d",i);
  //use 1 to check first bit
j=i&1;
if(j==0)
printf("\tIt's first bit is off");
else
printf("Itis first bit is on");
  
/*
j=1&32;
if(j==0)
printf("\tThe fifth bit is off");
else
printf("\tThe fifth bit is on");
*/  
getch;
}
