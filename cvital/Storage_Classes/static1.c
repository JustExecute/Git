#include<stdio.h>

main()
{

func1();
func1();

}

func1()
{
static int i=10;
i++;
printf("i:%d\n",i);
}
