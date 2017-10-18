#include<stdio.h>
#include<unistd.h>
int main()
{
	int c;
	c = mygetchar();
	c = getchar();
	printf("c:%c \n",c);
	return 0;
}
int mygetchar(void)
{
	char c;
	return (read(0,&c,1) == 1) ? (unsigned char) c: EOF;
}

