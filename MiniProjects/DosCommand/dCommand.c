//develop our own command
//the program name dCommand
// dCommand Ling a directory named as ling will be created
#include <DIR.h>
#include <stdio.h>
void main(int argc, char *argv[])
{
	int stat;
	if(argc>1 || argc <2)
   {
	printf("Please enter valid arguments!");
	exit(1);

	stat=mkdir(argv[1]);  //when successful, it is written 0
	if(stat==0)
	{
		printf("\n Directory created successfully!");
	}else
	{
		printf("\n Unable to create directory!");
		exit(1);
	}
  }
}
