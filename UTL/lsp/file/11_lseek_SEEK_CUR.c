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
			
	offset=lseek(file,10,SEEK_CUR);
	printf("seek Offset : %d\n",offset);	
	
	bytesWrite = write(file,buffer,sizeof(buffer)-1);
	
	printf("Bytes Written into the File24: %d\n",bytesWrite);
	close(file);

return 0;
}
