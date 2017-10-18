#include<stdio.h>

int main()
	{
	int num;
	int flag=0;
	printf("Enter the Number : ");
	scanf("%d",&num);

	flag = ((num%2==0)?1:0);

	if (flag==1)
	printf("Condition is  True: Even\n");
	else
	printf("Condition is False: Odd\n");
	}
