/*
Copying the existing file.in data(12MB) in [1024 Bytes]blocks to the Newly created file.out instantly

Checking Output:
$gcc 5_copy_block_in_out.c
$./a.out (This time it will execute instantly)
$ls -la file.* (Check the file.out and its Size(12MB) equals to file.in 
$TIMEFORMAT=""time ./a.out (Check the time taken to execute the file ./a.out)
*/
#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<errno.h>
#include<fcntl.h>

int main()
	{

	int in,out,ret;
	char buffer_block[1024];

	in = open("file.in",O_RDONLY);
	out = open("file.out",O_WRONLY|O_CREAT,S_IRUSR,S_IWUSR);

	while(read(in,&buffer_block,sizeof(buffer_block))!=0)
	{
	ret = write(out,&buffer_block,sizeof(buffer_block));
	}	
	
	close(in);
	close(out);
	
	return 0;
	}
