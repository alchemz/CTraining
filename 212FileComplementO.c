/*
implement complement operator to encode data from file
*/

#include<stdio.h>
#include<conio.h>

void main()
{
FILE *fa,*fb;
char ch;
fa=fopen("file1.txt","r");//read mode
fb=fopen("file2.txt","write");//write mode
if(fa==NULL||fb==NULL)
{
printf("Open files failed");
exit(1)
}
//read all the characters from the file
while((ch=getc(fa))!=EOF)
{
putc(~ch,fb);//put the character
}
fclose(fa);
fclose(fb);
}
