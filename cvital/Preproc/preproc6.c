// how to use predefined macros

#include<stdio.h>

#define message(a,b) \
printf("a:%d b:%d\n",a,b)


main()
{
int ret;

message(10,20);
printf("%s:%s:%d\n",__FILE__,__func__,__LINE__);
ret = add(10,20);

}

int add(int x, int y)
{

printf("%s:%s:%d\n",__FILE__,__func__,__LINE__);

return x+y;
}

