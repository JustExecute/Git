#include<stdio.h>

struct student
{
	int id;
	char name[30];
	float per;
};

main()
{
int i;
	struct student record[3];

//1st student record
	record[0].id=10;
	sprintf(record[0].name,"ramu");
	record[0].per=90;

//2nd student record
	record[1].id=11;
	sprintf(record[1].name,"rajesh");
	record[1].per=91;

//3rd student record
	record[2].id=12;
	sprintf(record[2].name,"ramesh");
	record[2].per=93;

	for (i=0;i<3;i++)
	{
		printf("student id:%d\n",record[i].id);
		printf("student name:%s\n",record[i].name);
		printf("student percentage:%f\n",record[i].per);
	}
}
