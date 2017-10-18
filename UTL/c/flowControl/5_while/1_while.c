#include<stdio.h>

int main()
	{
	int f,f2,j=1;
	printf("Enter the number to get its factorial: \n");
	scanf("%d",&f);
	while(f>0)
		{
		j=j*f;
		f--;
		}
	if(j<=2140000000)
		printf("factorial of a Number is %d\n",j);
	else
		printf("The number exceeds the 4-Bit signed interger storage size\n");
	return 0;
	}
