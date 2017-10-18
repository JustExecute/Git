/* layer1 program  - consumer  */
#include<stdio.h>
#include"layer.h"

main()
{
	struct student record;

	func(&record);
	printf("student id:%d\n",record.id);
	printf("student name:%s\n",record.name);
	printf("student percentage:%f\n",record.per);

}
