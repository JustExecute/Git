#include<stdio.h>
#include<stdlib.h>
int getvalue(char*);

int main()
{
	char str[]="r23";
	int num=0;
	num = getvalue(str);
	printf("num = %d\n",num);
}

int getvalue(char* p)
{
 p++;
return (atoi(p));


}
