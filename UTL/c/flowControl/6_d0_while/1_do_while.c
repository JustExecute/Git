
//Finding the average of the five given numbers
#include<stdio.h>

int main()
	{
	int num=0,i=0,e=0;

	do{
	printf("Enter the list of Numbers ");
	scanf("%d",&num);
	i=num+i;
	e++;
	}while(e<5);

	printf("Average of the give 5 Numbers is :%d\n",i/5);
	return 0;
	}
