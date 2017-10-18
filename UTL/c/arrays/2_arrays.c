#include<stdio.h>

int main()
	{
	int i,j;
	int value=0;
	for(i=0;i<=3;i++)
	{	for(j=0;j<=3;j++)
		{
		printf("array[%d][%d] : ",i,j);
		scanf("%d",&value);
		}
	}
	return 0;
	}



