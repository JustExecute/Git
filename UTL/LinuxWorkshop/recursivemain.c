#include<stdio.h>
void main()
{
	static int i=0;
	if(i==5)
		return;
	else
		i++;
		printf("main\n");
		main(); 


}

