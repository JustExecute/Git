#include<stdio.h>

int main()
{
	int a[5]={12,13,24,35,4777};
	int *p;
	int i;
	//p=&a[0];
	p=a;
	
/*	for(i=0;i<=4;i++)
	{
	printf("Value of a[%d] = %d\n",i,*(a+i));
	printf("Address of a[%d]= %p\n",i,(a+i));
	}
*/

	
/*	printf("Address of a[0]= %p\n",a);
	printf("Address of a[1]= %p\n",a+1);
	printf("Address of a[2]= %p\n",a+2);
	printf("Address of a[3]= %p\n",a+3);
	printf("Address of a[4]= %p\n",a+4);
*/

	for(i=0;i<=4;i++)
	printf("a[%d] = %d\n",i,*(p+i));

	return 0;

}
