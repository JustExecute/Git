//Copy the Data from the existing file(file.in-1MB) to a new file.out 
//Drawback : it takes more time to copy from file.in to file.out

/*Checking Output:
$gcc 4_copy_in_out.c
$./a.out (it will take few seconds here)
$ls -la file.* (Check the new file created file.out with 12MB size = file.in)
$TIMEFORMAT="" time ./a.out (Check the time taken to execute the ./a.out)
*/


#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<errno.h>

int main()
	{
	int in,out;
	char buffer;
	
	in = open("file.in",O_RDONLY);	
	if(in<0)
	{
	perror("Cannot open the file.in ");
	}
	out = open("file.out",O_WRONLY|O_CREAT,S_IWUSR|S_IRUSR);
	
	while(read(in,&buffer,1)!=0)
	{
	write(out,&buffer,1);
	}
	close(in);
	close(out);
	return 0;
	}
