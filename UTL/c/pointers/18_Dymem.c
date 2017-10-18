#include<stdio.h>
#include<stdlib.h>

int main()
	{
	int n,i;
	printf("Enter the Array Size: ");
	scanf("%d",&n);

	int *a=(int*)calloc(n,sizeof(int));

	for(i=0;i<=n;i++)
	{
		a[i]=i+1;
		printf("a[%d] : %d -> Its Address: %p\n",i,a[i],&a[i]);
	}

	free(a);//Free the memory allocated 
	a=NULL;

	for(i=0;i<=n;i++)
	{
		a[i]=i+1;
		printf("a[%d] : %d -> Its Address: %p\n",i,a[i],&a[i]);
		printf("allocated memory to 'a' is free NOW\n");	
	}

	return 0;
	}
