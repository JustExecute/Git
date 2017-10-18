#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>
#include<errno.h>

main()
{
int ret;

	ret = write(1,"Hello World\n",15);
	if (ret < 0)
	{
	printf("ret=%d\n",ret);
	printf("errono:%d\n",errno);
	perror("Write Fails");
	exit(0);
	}
	
	printf("errn:%d\n ret:%d\n",errno,ret);

}

