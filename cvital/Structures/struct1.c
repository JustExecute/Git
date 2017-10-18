#include<stdio.h>

struct student
{
	int id;
	char name[30];
	float per;
};

main()
{

	struct student record;// = {11,"kishore",91.78};
	record.id=10;
	sprintf(record.name,"ramu");
	record.per=90;

	printf("student id:%d\n",record.id);
	printf("student name:%s\n",record.name);
	printf("student percentage:%f\n",record.per);

}
