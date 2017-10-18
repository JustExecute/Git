#include<stdio.h>
int fun(int*);
int main()
	{
	int a[5]={5,10,15,20,25};
	int size;
	int sum=0;	

	printf("Total size of an array 'a' : %ld\n",sizeof(a));
	printf("size of an array a[0] : %ld\n",sizeof(a[0]));

	sum=fun(a);
	printf("The Sum of Arrays : %d\n",sum);	

	return 0;
	}

int fun(int p[])
	{
	int f,fun_sum=0,fun_size=0;

	printf("sizeof(p) : %ld\n",sizeof(p));
	printf("sizeof(p[0]) : %ld\n",sizeof(p[0]));
	
	fun_size=sizeof(p)/sizeof(p[0]);
	
	for(f=0;f<fun_size;f++)
	{
		printf("%d\n",p[f]);
		fun_sum = p[f] + fun_sum;
	}
	return fun_sum;
	}

	



