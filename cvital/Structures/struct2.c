#include<stdio.h>
#include "struct.h"

main()
{

	struct student record = {11,"kishore",91};
//	record.id=10;
//	sprintf(record.name,"ramu");
//	record.per=90;

	printf("student id:%d\n",record.id);
	printf("student name:%s\n",record.name);
	printf("student percentage:%f\n",record.per);

}
