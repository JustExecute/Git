#include<stdio.h>

int main(){

int x=20;
int *y = &x;
int temp;
printf("x:%d &x:%p y:%x *y:%d &y:%p\n",x,&x,y,*y,&y);

printf ("x:%ld y:%ld\n",sizeof(x),sizeof(y));

return 0;
}
