#include<stdio.h>
int num;


int main()
	{

	printf("Enter the number");
	scanf("%d",&num);

	if(num%2==0)
	printf("The Number Entered %d is Even\n",num);
	else
	printf("The Number Entered %d is Odd \n",num);
	return 0;
	}
