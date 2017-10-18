#include<stdio.h>
#include<stdlib.h>

int main()
	{
	int n,i;
	int *a;
	printf("Enter the size of Array:");
	scanf("%d",&n);
	
	a=(int*)malloc(n*sizeof(int));
	
	for(i=0;i<=n;i++)
	{
		*a=*a+1;
		printf("a[%d] : %d\n",i,*a);
	}
	return 0;
	}
