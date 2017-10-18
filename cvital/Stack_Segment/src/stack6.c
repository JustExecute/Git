#include<stdio.h>

int fun1(int *);
int fun2(void);

int main()
{
int x =1;

printf("x:%d\n",x);
fun1(&x);
printf("x:%d\n",x);
fun2();
printf("x:%d\n",x);

printf("");

return 0;
}

int fun1(int *b)
{
int x=2;
*b=x;
return 0;
}

int fun2()
{
int y=3;
return 0;
}

