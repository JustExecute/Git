#include<stdio.h>
void swap(int *a,int *b)
{
 *a=*a+*b;
 *b=*a-*b;
 *a=*a-*b;

}
int main()
{

	int x=10, y=20;
	swap(&x,&y);

         printf("a=%d b=%d",x,y);
}
