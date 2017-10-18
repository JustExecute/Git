#include<stdio.h>

main()
{
int ret;

getchar();
ret = system("ls");

printf("ret:%d\n",ret);
}
