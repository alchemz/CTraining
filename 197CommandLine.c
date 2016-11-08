/*C code to demonstrate command line arguments*/
//make directory
//C:\>MD PRASHANT
//>CLA PRASHANT 1233 4445
//program name is CLA
//name is prashant

#include<stdio.h>
//pass two arguments with main function
//number of arguments
//array, character pointer store arguments

void main(int argc, char *argv[])
{
int i;
printf("The total number of arguments passed %d",argc);
  //for loop to print out the results one by one
for(i=0; i<argc; i++)
{
  //print arguments one by one
printf("n The argument %d=%s",i,argv[i]);
}

}
