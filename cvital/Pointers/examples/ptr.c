#include<stdio.h>

main()
{
int x=3;
int *p = &x;

printf("x:%d *p:%d &x:%p &p:%p p:%p \n",x,*p,&x,&p,p);
printf("p++:%p\n",p++);
}
