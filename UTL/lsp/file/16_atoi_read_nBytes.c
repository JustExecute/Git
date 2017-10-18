#include<stdlib.h>
#include<stdio.h>

int getnumber(char*);

int main(int argc,char *argv[])
{

	char string[]="a7";
	int num;
	

	printf("default String = %s\n",string);
	num = getnumber(string);
	printf("Only Number = %d\n",num);
	return 0;
}


int getnumber(char *p)
{
	p++;
	return(atoi(p));
}
