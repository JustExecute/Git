#include<stdio.h>
//void pointer_as_argument(char*);
void array_as_argument(char*);

int main()
	{
	char s[6]="hello";
//	pointer_as_argument(s);
	array_as_argument(s);
	return 0;
	}

/*void pointer_as_argument(char* x)
	{
	int i;
	while(*x!=0)
		{
		 printf("%c",*x);
		 x++;
		}
	
	printf("\t:Printing String using pointer as a function argument\n");
	}
*/

void array_as_argument(char y[])
	{
	int i;
	while(y[i]!=0)
		{
		printf("%c",y[i]);
		i++;
		}
	printf("\t:Printing String using Array as function argument\n");
	}
