#include<unistd.h>
#include<stdio.h>
#include<errno.h>

int main()
{
int ret;
char buff[100];
	ret = read(0,&buff,100);
	if (ret < 0)
	{
	perror("Read Fails");
	printf("errno:%d\n",errno);
	return -1;
	}
	printf("ret:%d\n buff:%s\n",ret,buff);

}

