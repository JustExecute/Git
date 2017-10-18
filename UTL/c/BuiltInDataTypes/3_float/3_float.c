#include<stdio.h>
#include<float.h>

int main()
	{
	printf("size of float is %ld \n",sizeof(float));
	printf("Float max value  %E \n",FLT_MIN);
	printf("Float min value  %E \n",FLT_MAX);
	printf("float precision value is %f \n",FLT_DIG);
	return 0;
	}

