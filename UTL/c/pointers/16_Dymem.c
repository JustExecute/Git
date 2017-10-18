//implementing malloc() and assignning values

#include<stdio.h>
#include<stdlib.h>
int main()
	{
	
	int *p=(int*)malloc(sizeof(int));
	printf("p  : %p\n",p);
	
	*p=10;
	*(p+1)=100;
	*(p+2)=200;
	*(p+3)=300;
	*(p+4)=400;
	*(p+5)=500;
	*(p+6)=600;
	*(p+7)=700;
	*(p+8)=800;
	*(p+9)=900;
	*(p+10)=1000;
	
	printf("*p     : %d\n",*p);
	printf("*(p+1) : %d\n",*(p+1));
	printf("*(p+2) : %d\n",*(p+2));
	printf("*(p+3) : %d\n",*(p+3));
	printf("*(p+4) : %d\n",*(p+4));
	printf("*(p+5) : %d\n",*(p+5));	
	printf("*(p+6) : %d\n",*(p+6));
	printf("*(p+7) : %d\n",*(p+7));
	printf("*(p+8) : %d\n",*(p+8));
	printf("*(p+9) : %d\n",*(p+9));
	printf("*(p+10): %d\n",*(p+10));


	printf("p     : %p\n",p);
	printf("(p+1) : %p\n",(p+1));
	printf("(p+2) : %p\n",(p+2));
	printf("(p+3) : %p\n",(p+3));
	printf("(p+4) : %p\n",(p+4));
	printf("(p+5) : %p\n",(p+5));	
	printf("(p+6) : %p\n",(p+6));
	printf("(p+7) : %p\n",(p+7));
	printf("(p+8) : %p\n",(p+8));
	printf("(p+9) : %p\n",(p+9));	
	printf("(p+10): %p\n",(p+10));
	return 0;
	}
