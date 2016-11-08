/*C code to demonstrate command line arguments*/

#include<stdio.h>

void main(int argc, char *argv[])
{
//int i;
printf("The total number of arguments passed %d",argc);
for(int i=0; i<argc; i++)
{
printf("n The argument %d=%s",i,argv[i]);
}

}
