#include<stdio.h>
#include<stdlib.h>

int main(int argc,char *argv[])
{
	
	int num1,num2;

	if(argc != 3 || strcmp(argv[1],"--help")==0)
	{
	printf("Enter correct Format : ./a.out number1 number2\n");
	}
	
	num1=atoi(argv[1]);
	num2=atoi(argv[2]);

	printf("number1 * number2 = %d\n",num1*num2);
	return 0;
}
