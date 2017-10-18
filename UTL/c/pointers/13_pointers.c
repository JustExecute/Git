#include<stdio.h>
#include<string.h>

int main()
	{	
	char s[15]="Embedded Linux";
	int length;
	length = strlen(s);
	
	printf("The String is     : %s\n",s);
	printf("The String length : %d\n",length);
	printf("The string size   : %ld\n",sizeof(s));
	
	return 0;
	}

