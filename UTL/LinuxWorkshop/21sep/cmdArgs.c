#include<stdio.h>
#include<string.h>
int main(int argc, char* argv[])
{
	int i=0;
	printf("argc= %d\n",argc);
	
	for(i=0;i<=argc; i++)
		printf("argv[%d]=%s\n",i,argv[i]);

    if (argc != 3 || strcmp(argv[1], "--help") == 0)
         printf("%s old-file new-file\n", argv[0]);

	return 0;


}
