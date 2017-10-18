#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<sys/types.h>
#include<sys/stat.h>

#define BUFSIZE 30

int main()
{
	int file,offset;
	char buffer[]={"ijklmnopqrstuvwxyz"};
	int bytesWrite;

	file = open("file24",O_RDWR|O_CREAT,S_IRUSR |S_IWUSR|S_IRGRP|S_IWGRP|S_IWOTH|S_IROTH);
	if(file<0)
	printf("File Open Failes\n");
			
	lseek(file,0,SEEK_END);
	
	
	bytesWrite = write(file,buffer,sizeof(buffer)-1);
	
	printf("%d\n",bytesWrite);
	close(file);

return 0;
}
