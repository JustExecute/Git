#include<stdio.h>
int main()
	{
	int day=0;

	printf("Enter the weak day :");
	scanf("%d",&day);

	switch(day)
	{
		case 1 : 
			printf("Monday\n");
 			break;
		case 2 : 
			printf("Tuesday\n");
			break;
		case 3 : 
			printf("Wednesday\n");
			break;
		case 4 : 
			printf("Thursday\n");
			break;
		case 5 : 
			printf("Friday\n");
			break;
		case 6 : 
			printf("Saterday\n");
			break;
		case 7 : 
			printf("Sunday\n");
			break;
		default :
			printf("Please Enter the Numbers between 1 to 7\n");
			break;
	}

	return 0;
}
