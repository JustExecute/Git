#include <stdio.h>

/* typecast example */

main ()
{
int a=300;
char *p= (char *) &a;
getchar();
printf("*p - dec:%d\n",*p);
printf("*p - hex:%x\n",*p);
printf("*p - char:%c\n",*p);
printf("*++p - dec:%d\n",*++p);
printf("*p - hex:%x\n",*p);
}

