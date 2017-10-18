#include<stdio.h>
#include<stdlib.h>
void mystrRev(char *s);
int main(int i,char *str[])
{
	if(i!=2)
	{
	printf("Syntax: ./reverse <str>\n");
	return -1;
	}

	mystrRev(str[1]);
	printf("%s\n",str[1]);

}

void mystrRev(char *s)
	{
	char *temp1 = s;
	char *temp2 = s;
	int i=0;
	char ch;

	while(*temp2 != '\0')
	{
	i++;
	temp2++;
	}

        temp2--;

	while(temp1 < temp2)
	{
	ch = *temp1;
	*temp1 = *temp2;
	*temp2= ch;
	temp2--;
	temp1++;
	}
	}
