#include<stdio.h>

int main()
{
int i;
int *ptr;
//getchar();
ptr = (int *) malloc(1000000*sizeof(int));

/*if (ptr == NULL)
{
perror("Memory allocation fails\n");
exit(-1);
}*/
//getchar();
for (i=0;i<100;i++) {
*ptr = 10;
printf("*ptr:%d\n",*ptr);
}
printf("%s\n",*ptr);
//getchar();
free(ptr);

return 0;
}
