/* layer2 - producer program */
#include<stdio.h>
#include"layer.h"

void func(struct student *value)
{
	value->id=10;
        sprintf(value->name,"ramu");
        value->per=90;

	printf("student id:%d\n",value->id);
	printf("student name:%s\n",value->name);
	printf("student percentage:%f\n",value->per);
}
