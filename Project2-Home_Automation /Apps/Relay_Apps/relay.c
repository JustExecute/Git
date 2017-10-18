#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
 
#define IN  0
#define OUT 1
 
#define LOW  0
#define HIGH 1
 
#define R1  8 
#define R2  9 
#define R3  10 
//#define R4  9 
char st[2];
 
static int GPIOExport(int pin)
{
#define BUFFER_MAX 3
	char buffer[BUFFER_MAX];
	ssize_t bytes_written;
	int fd;
 
	fd = open("/sys/class/gpio/export", O_WRONLY);
	if (-1 == fd) {
		fprintf(stderr, "Failed to open export for writing!\n");
		return(-1);
	}
 
	bytes_written = snprintf(buffer, BUFFER_MAX, "%d", pin);
	write(fd, buffer, bytes_written);
	close(fd);
	return(0);
}
 
static int GPIOUnexport(int pin)
{
	char buffer[BUFFER_MAX];
	ssize_t bytes_written;
	int fd;
 
	fd = open("/sys/class/gpio/unexport", O_WRONLY);
	if (-1 == fd) {
		fprintf(stderr, "Failed to open unexport for writing!\n");
		return(-1);
	}
 
	bytes_written = snprintf(buffer, BUFFER_MAX, "%d", pin);
	write(fd, buffer, bytes_written);
	close(fd);
	return(0);
}
 
static int GPIODirection(int pin, int dir)
{
	static const char s_directions_str[]  = "in\0out";
 
#define DIRECTION_MAX 35
	char path[DIRECTION_MAX];
	int fd;
 
	snprintf(path, DIRECTION_MAX, "/sys/class/gpio/gpio%d/direction", pin);
	fd = open(path, O_WRONLY);
	if (-1 == fd) {
		fprintf(stderr, "Failed to open gpio direction for writing!\n");
		return(-1);
	}
 
	if (-1 == write(fd, &s_directions_str[IN == dir ? 0 : 3], IN == dir ? 2 : 3)) {
		fprintf(stderr, "Failed to set direction!\n");
		return(-1);
	}
 
	close(fd);
	return(0);
}
 
static int GPIORead(int pin)
{
#define VALUE_MAX 30
	char path[VALUE_MAX];
	char value_str[3];
	int fd;
 
	snprintf(path, VALUE_MAX, "/sys/class/gpio/gpio%d/value", pin);
	fd = open(path, O_RDONLY);
	if (-1 == fd) {
		fprintf(stderr, "Failed to open gpio value for reading!\n");
		return(-1);
	}
 
	if (-1 == read(fd, value_str, 3)) {
		fprintf(stderr, "Failed to read value!\n");
		return(-1);
	}
 
	close(fd);
 
	return(atoi(value_str));
}
 
static int GPIOWrite(int pin, int value)
{
	static const char s_values_str[] = "01";
 
	char path[VALUE_MAX];
	int fd;
 
	snprintf(path, VALUE_MAX, "/sys/class/gpio/gpio%d/value", pin);
	fd = open(path, O_WRONLY);
	if (-1 == fd) {
		fprintf(stderr, "Failed to open gpio value for writing!\n");
		return(-1);
	}
 
	if (1 != write(fd, &s_values_str[LOW == value ? 0 : 1], 1)) {
		fprintf(stderr, "Failed to write value!\n");
		return(-1);
	}
 
	close(fd);
	return(0);
}
int main(int argc, char *argv[])
{
	if (-1 == GPIOExport(R1) || -1 == GPIOExport(R2) || -1 == GPIOExport(R3))
		return(1);
	while(1){ 
		relay_state();	
		printf("%s\n",st);
		int re=atoi(st);
		if(re==1)/* For activating relay direction is given as OUT */
		{
			GPIODirection(R1, OUT);
			GPIODirection(R2, OUT);
			GPIODirection(R3, OUT);
		}
		if(re==0)/* For de-activating relay direction is given as IN */
		{
			GPIODirection(R1, IN);
                        GPIODirection(R2, IN);
                        GPIODirection(R3, IN);
		}
	}
	GPIOUnexport(R1);
        GPIOUnexport(R2);
        GPIOUnexport(R3);

	return(0);
}

relay_state()
{
	int fd,i,size,value;
        char *ptr,*p1,*p2;
	system("mysql -u root -p1234 < relay.sql > state");
        fd=open("state",O_RDONLY,0666);
        if(fd==-1)
        {
                printf("state file open error");
                return;
        }
        size=lseek(fd,0,2);
        lseek(fd,0,0);
        ptr=malloc(size+1);
        memset(ptr,'\0',size+1);
        read(fd,ptr,size);
        close(fd);
	p2=strchr(ptr,'\n');
        p2++;
        i=0;
        while(p2[i]>='0'&&p2[i]<='9')
        {
                st[i]=p2[i];
                i++;
        }
        st[i]='\0';
//	printf("sa:%s",st);
	free(ptr);
}
	


