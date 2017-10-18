#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(int argc, char* argv[])

{
	int i=0;
	float n1=0, n2=0, res=0 ;

    if (argc != 3 || strcmp(argv[1], "--help") == 0)
        { 
		printf("%s num1 num2 \n", argv[0]);
		return -1;
	}

	n1= atof(argv[1]);
	n2= atof(argv[2]);

	res= n1+n2;
	printf("%0.2lf + %0.2lf = %0.2lf\n",n1,n2,res);

	return 0;

}
