#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>

char val[4];
void main(unsigned int pin)
{
	int fd, len, j;

	while(1){
	fd = open("/sys/bus/iio/devices/iio:device0/in_voltage1_raw", O_RDONLY);
	if (fd < 0) {
	    perror("adc/get-value");

	}
	read(fd, &val,4);
	printf ("value of pin ADC1 =%.4s",val);
	database_update();
	sleep(2);
	close(fd);
	}
	
}

database_update()
{
	int fd1,size;
	char *p1,*p2,*p3,*ptr,adc[4];
	strncpy(adc, val,4);
	printf("%s\n",adc);
	 fd1=open("hello1.html",O_RDWR,0666);
        	if(fd1==-1)
         	{
         	       printf("hello file open error\n");
         	       return;
         	}
	size=lseek(fd1,0,2);
        lseek(fd1,0,0);
        ptr=malloc(size+50);
        memset(ptr,'\0',size+50);
        read(fd1,ptr,size);
	close(fd1);
	p1=ptr;
        p3=strstr(p1,"Value");
        p3++;
        p2=strchr(p3,'"');
        p2++;
        p1=strchr(p2,'"');
        memmove(p2,p1,strlen(p1)+1);
        memmove(p2+strlen(adc),p2,strlen(p2)+1);
        memcpy(p2,adc,strlen(adc));
        p1=p2+strlen(adc)+1;
        printf("ptr:%s\n",ptr);
        fd1=open("hello1.html",O_RDWR|O_TRUNC,0666);
        if(fd1==-1)
         {
                printf("hello file open error\n");
                return;
         }
        write(fd1,ptr,strlen(ptr));
        close(fd1);
        free(ptr);
	system("mysql -u root -p1234 < hello1.html");
}
