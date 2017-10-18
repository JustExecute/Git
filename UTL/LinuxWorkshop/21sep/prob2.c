#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(int argc, char* argv[])
{
	int i=0;
	int n1=0, n2=0, n3=0, res=0 ;

    if (argc != 4 || strcmp(argv[1], "--help") == 0)
        { 
		printf("Please Enter Three Arguments like :  %s num1 num2 num3\n", argv[0]);
		return -1;
	}

	n1= atoi(argv[1]);
	n2= atoi(argv[2]);
	n3= atoi(argv[3]);

	res= n1*n2*n3;
	printf("%d * %d *%d = %d\n",n1,n2,n3,res);

	return 0;

}
