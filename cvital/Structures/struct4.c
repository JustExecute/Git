#include<stdio.h>

struct student
{
	int id;
	char name[30];
	float per;
};

main()
{

	struct student record1 = {11,"kishore",91};
	struct student *ptr = &record1;
	
	printf("student id:%d\n",record1.id);
	printf("student name:%s\n",record1.name);
	printf("student percentage:%f\n",record1.per);

	printf("student id:%d\n",ptr->id);
	printf("student name:%s\n",ptr->name);
	printf("student percentage:%f\n",ptr->per);
}
