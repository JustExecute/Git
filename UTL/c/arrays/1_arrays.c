#include<stdio.h>

int main()
	{
	int i,sum=0;
	int array[10];
	for(i=1;i<=10;i++)
	{
	printf("Enter the Number [%d]=\t",i);
	scanf("%d",&array[i]);
	sum=array[i]+sum;
	}
	printf("Sum of above numbers = %d\n",sum);

	return 0;
	}
