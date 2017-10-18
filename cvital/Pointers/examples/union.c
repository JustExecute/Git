#include<stdio.h>

union   
{
int a;
char b;
}x;

main ()
{
int z;
x.a=325;
printf ("a:%x b:%x size:%d\n",x.a,x.b,sizeof(x));


}


