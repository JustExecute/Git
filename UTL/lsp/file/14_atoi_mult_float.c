#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc,char *argv[])
{
	
	float num1,num2;

	if(argc != 3 || strcmp(argv[1],"--help")==0)
	{
	printf("Enter correct Format : ./a.out number1 number2\n");
	return -1;
	}
	
	num1=atof(argv[1]);
	num2=atof(argv[2]);

	printf("%0.2lf * %0.2lf = %0.2lf\n",num1,num2,num1*num2);
	return 0;
}
