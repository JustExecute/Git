#include<stdio.h>
#include<string.h>
#include<errno.h>

int main(int argc, char* argv[])
{
	int i=0;


	if(argc!=3 || strcmp(argv[1],"--help")==0)
	{
		printf("Please Enter 3 arguments : ./a.out Old_file New_file\n");
	}
	else
	{
		printf("Number of Arguments Entered argc = %d\n",argc);
		for(i=0;i<argc;i++)
		printf("argv[%d] = %s\n",i,argv[i]);	
	}	
return 0;
}
