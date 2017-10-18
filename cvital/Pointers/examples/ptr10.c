#include<stdio.h>


main()
{
char a[] = "literal";
char *p = "string";
getchar();
printf("%s\n",a);
a[0] = 'b';
printf("%s &a:%p p:%p\n",a,&a,p);
//printf("%s\n",&p);

//*p = 'a';

}
