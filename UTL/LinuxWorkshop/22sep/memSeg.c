#include<stdio.h>
int g_var_1=10;
int g_var_2;

int testFun()
{
	g_var_1= 100;
	g_var_2 = 123;
}

int main()
{
	int l_var_1 = 10;
	int l_var_2;

	l_var_1++;
	l_var_2++;

	printf("%d, %d\n",l_var_1, l_var_2);

	printf("address of g_var_1 = %p\n",&g_var_1);
	printf("address of g_var_2 = %p\n",&g_var_2);

	printf("address of l_var_1 = %p\n",&l_var_1);
	printf("address of l_var_2 = %p\n",&l_var_2);
	
	printf("address of main = %p\n",main);
	printf("address of Test Functon = %p\n",testFun);


	
	
}


